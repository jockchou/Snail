namespace Snail\Mvc;

use Snail\Mvc\Route\Route;

class Router implements RouterInterface
{
    protected routes = [];
    protected matchedRoute;

    public function getMatchedRoute() -> <Route> {
        return this->matchedRoute;
    }

    public function add(string path = null, var httpMethods = null) -> <RouteInterface>
    {
        var route;
        let route = new Route(path, httpMethods);
        let this->routes[] = route;
        
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

    private function checkRule(string uri, string path) -> boolean
    {
        var pos;
        let pos = strpos(uri, "?");
        
        if pos !== false {
            let uri = substr(uri, 0, pos);
        }
        
        if uri === path {
            return true;
        } elseif rtrim(uri, "/") === rtrim(path, "/") {
            return true;
        } else {
            return false;
        }
        
    }

    public function handleRequest(<ApplicationInterface> application) {
        var route, methods, path, handler, reqUri, reqMethod, routeFound = false;
        
        let reqUri = _SERVER["REQUEST_URI"];
        let reqMethod = _SERVER["REQUEST_METHOD"];
        
        for route in this->routes {
            let methods = route->getHttpMethods();
            let path = route->getPath();
            if this->checkMethod(reqMethod, methods) && this->checkRule(reqUri, path) {
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
