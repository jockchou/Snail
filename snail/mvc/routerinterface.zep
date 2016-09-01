namespace Snail\Mvc;

use Snail\Mvc\Route\RouteInterface;

interface RouterInterface
{

    const POSITION_FIRST = 0;
    const POSITION_LAST = 1;

    public function add(string path = null, var httpMethods = null, int position = self::POSITION_LAST) -> <RouteInterface>;

    public function handleRequest(<ApplicationInterface> application);
}
