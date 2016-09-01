<?php

use Snail\Application;

$app = new Application();

$app->any('/', null, function() {
	echo "Hello Snail";
})->any('/hello', ['post', 'get'], function() use($app) {
    echo "hello";
})->get('/say', function() {
    echo "say";
})->get('/greeting', function() use($app) {
    echo "greeting";
})->run();
