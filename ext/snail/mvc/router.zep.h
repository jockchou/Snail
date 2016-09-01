
extern zend_class_entry *snail_mvc_router_ce;

ZEPHIR_INIT_CLASS(Snail_Mvc_Router);

PHP_METHOD(Snail_Mvc_Router, getMatchedRoute);
PHP_METHOD(Snail_Mvc_Router, add);
PHP_METHOD(Snail_Mvc_Router, checkMethod);
PHP_METHOD(Snail_Mvc_Router, handleRequest);
zend_object_value zephir_init_properties_Snail_Mvc_Router(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_add, 0, 0, 0)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, httpMethods)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_checkmethod, 0, 0, 2)
	ZEND_ARG_INFO(0, reqMethod)
	ZEND_ARG_ARRAY_INFO(0, methods, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_router_handlerequest, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, application, Snail\\Mvc\\ApplicationInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_mvc_router_method_entry) {
	PHP_ME(Snail_Mvc_Router, getMatchedRoute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router, add, arginfo_snail_mvc_router_add, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Router, checkMethod, arginfo_snail_mvc_router_checkmethod, ZEND_ACC_PRIVATE)
	PHP_ME(Snail_Mvc_Router, handleRequest, arginfo_snail_mvc_router_handlerequest, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
