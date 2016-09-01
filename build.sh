#!/bin/bash

zephir clean
zephir fullclean
rm -rf ./ext/snail.*
rm -rf ./ext/snail/
zephir build


