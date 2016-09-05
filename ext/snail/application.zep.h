
extern zend_class_entry *snail_application_ce;

ZEPHIR_INIT_CLASS(Snail_Application);

PHP_METHOD(Snail_Application, __construct);
PHP_METHOD(Snail_Application, any);
PHP_METHOD(Snail_Application, run);
PHP_METHOD(Snail_Application, get);
PHP_METHOD(Snail_Application, post);
PHP_METHOD(Snail_Application, put);
PHP_METHOD(Snail_Application, head);
PHP_METHOD(Snail_Application, options);
PHP_METHOD(Snail_Application, delete);
PHP_METHOD(Snail_Application, trace);
PHP_METHOD(Snail_Application, connect);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_any, 0, 0, 3)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, methods)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_get, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_post, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_put, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_head, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_options, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_trace, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_application_connect, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_application_method_entry) {
	PHP_ME(Snail_Application, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Snail_Application, any, arginfo_snail_application_any, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, run, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, get, arginfo_snail_application_get, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, post, arginfo_snail_application_post, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, put, arginfo_snail_application_put, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, head, arginfo_snail_application_head, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, options, arginfo_snail_application_options, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, delete, arginfo_snail_application_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, trace, arginfo_snail_application_trace, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Application, connect, arginfo_snail_application_connect, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
