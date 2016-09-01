
extern zend_class_entry *snail_mvc_router_route_ce;

ZEPHIR_INIT_CLASS(Snail_Mvc_Router_Route);

PHP_METHOD(Snail_Mvc_Router_Route, __construct);
PHP_METHOD(Snail_Mvc_Router_Route, getId);
PHP_METHOD(Snail_Mvc_Router_Route, getPath);
PHP_METHOD(Snail_Mvc_Router_Route, setPath);
PHP_METHOD(Snail_Mvc_Router_Route, getHttpMethods);
PHP_METHOD(Snail_Mvc_Router_Route, setHttpMethods);
PHP_METHOD(Snail_Mvc_Router_Route, setHandler);
PHP_METHOD(Snail_Mvc_Router_Route, getHandler);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_route___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, httpMethods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_route_setpath, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_route_sethttpmethods, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, httpMethods, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_route_sethandler, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_mvc_router_route_method_entry) {
	PHP_ME(Snail_Mvc_Router_Route, __construct, arginfo_snail_mvc_router_route___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Snail_Mvc_Router_Route, getId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, getPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, setPath, arginfo_snail_mvc_router_route_setpath, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, getHttpMethods, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, setHttpMethods, arginfo_snail_mvc_router_route_sethttpmethods, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, setHandler, arginfo_snail_mvc_router_route_sethandler, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router_Route, getHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
