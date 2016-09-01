
extern zend_class_entry *snail_mvc_routerinterface_ce;

ZEPHIR_INIT_CLASS(Snail_Mvc_RouterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_routerinterface_add, 0, 0, 0)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, httpMethods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_routerinterface_handlerequest, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, application, Snail\\Mvc\\ApplicationInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_mvc_routerinterface_method_entry) {
	PHP_ABSTRACT_ME(Snail_Mvc_RouterInterface, add, arginfo_snail_mvc_routerinterface_add)
	PHP_ABSTRACT_ME(Snail_Mvc_RouterInterface, handleRequest, arginfo_snail_mvc_routerinterface_handlerequest)
	PHP_FE_END
};
