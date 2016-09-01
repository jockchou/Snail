namespace Snail\Mvc\Route;

class Route implements RouteInterface
{
    protected id;
    protected path;
    protected methods;
    protected handler;
    private static uniqueId = 1;

    public function __construct(string path = null, var httpMethods = null)
    {
        let this->id = self::uniqueId;
        let this->path = path;

        let self::uniqueId = self::uniqueId + 1;

        this->setHttpMethods(httpMethods);
    }

    public function getId() -> string
    {
        return this->id;
    }

    public function getPath() -> string
    {
        return this->path;
    }

    public function setPath(string path) -> void
    {
        let this->path = path;
    }

    public function getHttpMethods() -> array
    {
        return this->methods;
    }

    public function setHttpMethods(array httpMethods) -> <RouteInterface>
    {
        var method;

        for method in httpMethods {
            if typeof method === "string" {
                let this->methods[] = strtoupper(method);
            }
        }

        return this;
    }

    public function setHandler(callable handler) -> <RouteInterface>
    {
        let this->handler = handler;
        return this;
    }

    public function getHandler() -> callable
    {
        return this->handler;
    }
}
