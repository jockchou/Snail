
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/hash.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Snail_Mvc_Route_Route) {

	ZEPHIR_REGISTER_CLASS(Snail\\Mvc\\Route, Route, snail, mvc_route_route, snail_mvc_route_route_method_entry, 0);

	zend_declare_property_null(snail_mvc_route_route_ce, SL("id"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(snail_mvc_route_route_ce, SL("path"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(snail_mvc_route_route_ce, SL("methods"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(snail_mvc_route_route_ce, SL("handler"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(snail_mvc_route_route_ce, SL("uniqueId"), 1, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_class_implements(snail_mvc_route_route_ce TSRMLS_CC, 1, snail_mvc_route_routeinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Snail_Mvc_Route_Route, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *httpMethods = NULL, *_0, *_1, *_2;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &path_param, &httpMethods);

	if (!path_param) {
		ZEPHIR_INIT_VAR(path);
		ZVAL_EMPTY_STRING(path);
	} else {
		zephir_get_strval(path, path_param);
	}
	if (!httpMethods) {
		httpMethods = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_OBS_VAR(_0);
	zephir_read_static_property_ce(&_0, snail_mvc_route_route_ce, SL("uniqueId") TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("id"), _0 TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("path"), path TSRMLS_CC);
	_1 = zephir_fetch_static_property_ce(snail_mvc_route_route_ce, SL("uniqueId") TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_2);
	ZVAL_LONG(_2, (zephir_get_numberval(_1) + 1));
	zephir_update_static_property_ce(snail_mvc_route_route_ce, SL("uniqueId"), &_2 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "sethttpmethods", NULL, 0, httpMethods);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Snail_Mvc_Route_Route, getId) {

	

	RETURN_MEMBER(this_ptr, "id");

}

PHP_METHOD(Snail_Mvc_Route_Route, getPath) {

	

	RETURN_MEMBER(this_ptr, "path");

}

PHP_METHOD(Snail_Mvc_Route_Route, setPath) {

	zval *path_param = NULL;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &path_param);

	zephir_get_strval(path, path_param);


	zephir_update_property_this(this_ptr, SL("path"), path TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Snail_Mvc_Route_Route, getHttpMethods) {

	

	RETURN_MEMBER(this_ptr, "methods");

}

PHP_METHOD(Snail_Mvc_Route_Route, setHttpMethods) {

	HashTable *_1;
	HashPosition _0;
	zval *httpMethods_param = NULL, *method = NULL, **_2, *_3$$4 = NULL;
	zval *httpMethods = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &httpMethods_param);

	zephir_get_arrval(httpMethods, httpMethods_param);


	zephir_is_iterable(httpMethods, &_1, &_0, 0, 0, "snail/mvc/route/route.zep", 51);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HVALUE(method, _2);
		if (Z_TYPE_P(method) == IS_STRING) {
			ZEPHIR_INIT_NVAR(_3$$4);
			zephir_fast_strtoupper(_3$$4, method);
			zephir_update_property_array_append(this_ptr, SL("methods"), _3$$4 TSRMLS_CC);
		}
	}
	RETURN_THIS();

}

PHP_METHOD(Snail_Mvc_Route_Route, setHandler) {

	zval *handler;

	zephir_fetch_params(0, 1, 0, &handler);



	zephir_update_property_this(this_ptr, SL("handler"), handler TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Snail_Mvc_Route_Route, getHandler) {

	

	RETURN_MEMBER(this_ptr, "handler");

}

