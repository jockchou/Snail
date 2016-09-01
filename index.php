
<?php

use Snail\Application;

$app = new Application();

$app->any('/hello', ['*'], function($application) {
    echo "hello";
})->get('/say', function() {
    echo "say";
})->get('/greeting', function($application) {
    echo "greeting<br>";
    echo "route id: " . $application->getRouter()->getMatchedRoute()->getId();
})->run();
