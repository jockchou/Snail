namespace Snail\Mvc;

use Snail\Mvc\Route\Route;

class Router implements RouterInterface
{
    protected routes = [];
    protected matchedRoute;

    public function getMatchedRoute() -> <Route> {
        return this->matchedRoute;
    }

    public function add(string path = null, var httpMethods = null, int position = self::POSITION_LAST) -> <RouteInterface>
    {
        var route;

        let route = new Route(path, httpMethods);

        if position == self::POSITION_FIRST {
            let this->routes[] = route;
        } elseif position == self::POSITION_LAST {
            let this->routes = array_merge([route], this->routes);
        } else {
            throw new \Exception("Invalid route position");
        }
		
        return route;
    }

    private function checkMethod(var reqMethod, array methods) -> boolean
    {
        if count(methods) > 0 && methods[0] === "*" {
            return true;
        } else {
            return in_array(reqMethod, methods);
        }
    }

    public function handleRequest(<ApplicationInterface> application) {
        var route, methods, path, handler, routeFound = false;
        var pathInfo = _SERVER["PATH_INFO"];
        var reqMethod = _SERVER["REQUEST_METHOD"];

        for route in this->routes {
            let methods = route->getHttpMethods();
            let path = route->getPath();
            if this->checkMethod(reqMethod, methods) && pathInfo === path {
                let this->matchedRoute = route;
                let routeFound = true;
                break;
            }
        }

        if routeFound {
            let handler = this->matchedRoute->getHandler();
            if is_callable(handler) {
                return {handler}(application);
            } else {
                throw new \Exception("Invalid callable handler");
            }
        }
        return false;
    }
}
