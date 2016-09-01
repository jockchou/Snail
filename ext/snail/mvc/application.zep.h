
extern zend_class_entry *snail_mvc_application_ce;

ZEPHIR_INIT_CLASS(Snail_Mvc_Application);

PHP_METHOD(Snail_Mvc_Application, __construct);
PHP_METHOD(Snail_Mvc_Application, getRouter);
PHP_METHOD(Snail_Mvc_Application, any);
PHP_METHOD(Snail_Mvc_Application, run);
PHP_METHOD(Snail_Mvc_Application, get);
PHP_METHOD(Snail_Mvc_Application, post);
PHP_METHOD(Snail_Mvc_Application, put);
PHP_METHOD(Snail_Mvc_Application, head);
PHP_METHOD(Snail_Mvc_Application, options);
PHP_METHOD(Snail_Mvc_Application, delete);
PHP_METHOD(Snail_Mvc_Application, trace);
PHP_METHOD(Snail_Mvc_Application, connect);

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_any, 0, 0, 3)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_ARRAY_INFO(0, methods, 0)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_get, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_post, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_put, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_head, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_options, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_trace, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_snail_mvc_application_connect, 0, 0, 2)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, handleFunc)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(snail_mvc_application_method_entry) {
	PHP_ME(Snail_Mvc_Application, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Snail_Mvc_Application, getRouter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, any, arginfo_snail_mvc_application_any, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, run, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, get, arginfo_snail_mvc_application_get, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, post, arginfo_snail_mvc_application_post, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, put, arginfo_snail_mvc_application_put, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, head, arginfo_snail_mvc_application_head, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, options, arginfo_snail_mvc_application_options, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, delete, arginfo_snail_mvc_application_delete, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, trace, arginfo_snail_mvc_application_trace, ZEND_ACC_PUBLIC)
	PHP_ME(Snail_Mvc_Application, connect, arginfo_snail_mvc_application_connect, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
