namespace Snail\Mvc\Route;

interface RouteInterface
{
    public function getId() -> string;
    public function getPath() -> string;
    public function setPath(string path) -> void;
    public function getHttpMethods() -> array;
    public function setHttpMethods(array httpMethods) -> <RouteInterface>;
    public function setHandler(callable handler) -> <RouteInterface>;
    public function getHandler() -> callable;
}
