<?php


use Snail\Mvc\Application;

$app = new Application();

$app->any('/hello', ['*'], function($application) {
    echo "hello";
})->get('/say', function() {
    echo "say";
})->get('/greeting', function($application) {
    echo "greeting";
    var_dump($application->getRouter()->getMatchedRoute()->getId());
})->run();
