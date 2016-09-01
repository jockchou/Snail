namespace Snail\Mvc;

use Snail\Mvc\Router;

class Application implements ApplicationInterface
{
    protected router;

    public function __construct()
    {
        let this->router = new Router();
    }

    public function any(string! route, var methods = null, handleFunc)
    {
        this->router->add(route, methods)->setHandler(handleFunc);
    }

    public function run()
    {
        this->router->handleRequest();
    }
}

