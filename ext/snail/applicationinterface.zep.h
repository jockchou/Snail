
extern zend_class_entry *snail_applicationinterface_ce;

ZEPHIR_INIT_CLASS(Snail_ApplicationInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_get, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_post, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_put, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_head, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_options, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_trace, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_connect, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_applicationinterface_any, 0, 0, 3)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_ARRAY_INFO(0, methods, 0)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_applicationinterface_method_entry) {
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, get, arginfo_snail_applicationinterface_get)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, post, arginfo_snail_applicationinterface_post)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, put, arginfo_snail_applicationinterface_put)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, head, arginfo_snail_applicationinterface_head)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, options, arginfo_snail_applicationinterface_options)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, delete, arginfo_snail_applicationinterface_delete)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, trace, arginfo_snail_applicationinterface_trace)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, connect, arginfo_snail_applicationinterface_connect)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, any, arginfo_snail_applicationinterface_any)
	PHP_ABSTRACT_ME(Snail_ApplicationInterface, run, NULL)
	PHP_FE_END
};
