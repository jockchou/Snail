namespace Snail\Mvc;

interface ApplicationInterface
{
    public function get(string path, callable handleFunc) -> <ApplicationInterface>;

    public function post(string path, callable handleFunc) -> <ApplicationInterface>;

    public function put(string path, callable handleFunc) -> <ApplicationInterface>;

    public function head(string path, callable handleFunc) -> <ApplicationInterface>;

    public function options(string path, callable handleFunc) -> <ApplicationInterface>;

    public function delete(string path, callable handleFunc) -> <ApplicationInterface>;

    public function trace(string path, callable handleFunc) -> <ApplicationInterface>;

    public function connect(string path, callable handleFunc) -> <ApplicationInterface>;

    public function any(string path, array methods, callable handleFunc) -> <ApplicationInterface>;

    public function run() -> void;
}