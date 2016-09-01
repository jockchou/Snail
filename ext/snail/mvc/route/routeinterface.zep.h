
extern zend_class_entry *snail_mvc_route_routeinterface_ce;

ZEPHIR_INIT_CLASS(Snail_Mvc_Route_RouteInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_route_routeinterface_setpath, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_route_routeinterface_sethttpmethods, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, httpMethods, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_route_routeinterface_sethandler, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_mvc_route_routeinterface_method_entry) {
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, getId, NULL)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, getPath, NULL)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, setPath, arginfo_snail_mvc_route_routeinterface_setpath)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, getHttpMethods, NULL)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, setHttpMethods, arginfo_snail_mvc_route_routeinterface_sethttpmethods)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, setHandler, arginfo_snail_mvc_route_routeinterface_sethandler)
	PHP_ABSTRACT_ME(Snail_Mvc_Route_RouteInterface, getHandler, NULL)
	PHP_FE_END
};
