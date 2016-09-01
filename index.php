<?php

use Snail\Application;

$app = new Application();

$app->any('/hello', ['*'], function() use($app) {
    echo "hello";
})->get('/say', function() {
    echo "say";
})->get('/greeting', function() use($app) {
    echo "greeting";
})->run();
