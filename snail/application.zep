namespace Snail;

use Snail\Mvc\Router;

class Application implements ApplicationInterface
{
    protected router;

    public function __construct()
    {
        let this->router = new Router();
    }

    public function getRouter() -> <Router>
    {
        return this->router;
    }

    public function any(string path, array methods, callable handleFunc) -> <ApplicationInterface>
    {
        var route = this->router->add(path, methods)->setHandler(handleFunc);
        return this;
    }

    public function run() -> void
    {
        this->router->handleRequest(this);
    }

    public function get(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["GET"], handleFunc);
    }

    public function post(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["POST"], handleFunc);
    }

    public function put(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["PUT"], handleFunc);
    }

    public function head(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["HEAD"], handleFunc);
    }

    public function options(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["OPTIONS"], handleFunc);
    }

    public function delete(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["DELETE"], handleFunc);
    }

    public function trace(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["TRACE"], handleFunc);
    }

    public function connect(string path, callable handleFunc) -> <ApplicationInterface>
    {
        return this->any(path, ["CONNECT"], handleFunc);
    }
}

