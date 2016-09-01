namespace Snail\Mvc;

use Snail\Mvc\Route\RouteInterface;

interface RouterInterface
{

    public function add(string path = null, var httpMethods = null) -> <RouteInterface>;

    public function handleRequest(<ApplicationInterface> application);
}
