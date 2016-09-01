
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Snail_Application) {

	ZEPHIR_REGISTER_CLASS(Snail, Application, snail, application, snail_application_method_entry, 0);

	zend_declare_property_null(snail_application_ce, SL("router"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_class_implements(snail_application_ce TSRMLS_CC, 1, snail_applicationinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Snail_Application, __construct) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	object_init_ex(_0, snail_mvc_router_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_update_property_this(this_ptr, SL("router"), _0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Snail_Application, getRouter) {

	

	RETURN_MEMBER(this_ptr, "router");

}

PHP_METHOD(Snail_Application, any) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *methods = NULL;
	zval *path_param = NULL, *methods_param = NULL, *handleFunc, *route = NULL, *_0, *_1 = NULL;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &path_param, &methods_param, &handleFunc);

	zephir_get_strval(path, path_param);
	zephir_get_arrval(methods, methods_param);


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("router"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(&_1, _0, "add", NULL, 0, path, methods);
	zephir_check_call_status();
	ZEPHIR_CALL_METHOD(&route, _1, "sethandler", NULL, 0, handleFunc);
	zephir_check_call_status();
	RETURN_THIS();

}

PHP_METHOD(Snail_Application, run) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("router"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _0, "handlerequest", NULL, 0, this_ptr);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Snail_Application, get) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "GET", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, post) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "POST", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, put) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "PUT", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, head) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "HEAD", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, options) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "OPTIONS", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, delete) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "DELETE", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, trace) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "TRACE", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Snail_Application, connect) {

	zval *_0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *handleFunc, *_1;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &path_param, &handleFunc);

	zephir_get_strval(path, path_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_create_array(_0, 1, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "CONNECT", 1);
	zephir_array_fast_append(_0, _1);
	ZEPHIR_RETURN_CALL_METHOD(this_ptr, "any", NULL, 0, path, _0, handleFunc);
	zephir_check_call_status();
	RETURN_MM();

}

