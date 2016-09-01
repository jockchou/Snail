
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/array.h"
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "kernel/hash.h"


ZEPHIR_INIT_CLASS(Snail_Mvc_Router) {

	ZEPHIR_REGISTER_CLASS(Snail\\Mvc, Router, snail, mvc_router, snail_mvc_router_method_entry, 0);

	zend_declare_property_null(snail_mvc_router_ce, SL("routes"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(snail_mvc_router_ce, SL("matchedRoute"), ZEND_ACC_PROTECTED TSRMLS_CC);

	snail_mvc_router_ce->create_object = zephir_init_properties_Snail_Mvc_Router;

	zend_class_implements(snail_mvc_router_ce TSRMLS_CC, 1, snail_mvc_routerinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Snail_Mvc_Router, getMatchedRoute) {

	

	RETURN_MEMBER(this_ptr, "matchedRoute");

}

PHP_METHOD(Snail_Mvc_Router, add) {

	zval *_1$$4;
	int position, ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, *httpMethods = NULL, *position_param = NULL, *route = NULL, *_0$$4, *_2$$4;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &path_param, &httpMethods, &position_param);

	if (!path_param) {
		ZEPHIR_INIT_VAR(path);
		ZVAL_EMPTY_STRING(path);
	} else {
		zephir_get_strval(path, path_param);
	}
	if (!httpMethods) {
		httpMethods = ZEPHIR_GLOBAL(global_null);
	}
	if (!position_param) {
		position = 1;
	} else {
		position = zephir_get_intval(position_param);
	}


	ZEPHIR_INIT_VAR(route);
	object_init_ex(route, snail_mvc_route_route_ce);
	ZEPHIR_CALL_METHOD(NULL, route, "__construct", NULL, 1, path, httpMethods);
	zephir_check_call_status();
	if (position == 0) {
		zephir_update_property_array_append(this_ptr, SL("routes"), route TSRMLS_CC);
	} else if (position == 1) {
		ZEPHIR_INIT_VAR(_0$$4);
		ZEPHIR_INIT_VAR(_1$$4);
		zephir_create_array(_1$$4, 1, 0 TSRMLS_CC);
		zephir_array_fast_append(_1$$4, route);
		_2$$4 = zephir_fetch_nproperty_this(this_ptr, SL("routes"), PH_NOISY_CC);
		zephir_fast_array_merge(_0$$4, &(_1$$4), &(_2$$4) TSRMLS_CC);
		zephir_update_property_this(this_ptr, SL("routes"), _0$$4 TSRMLS_CC);
	} else {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid route position", "snail/mvc/router.zep", 25);
		return;
	}
	RETURN_CCTOR(route);

}

PHP_METHOD(Snail_Mvc_Router, checkMethod) {

	zend_bool _0;
	zval *methods = NULL;
	zval *reqMethod, *methods_param = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &reqMethod, &methods_param);

	zephir_get_arrval(methods, methods_param);


	_0 = zephir_fast_count_int(methods TSRMLS_CC) > 0;
	if (_0) {
		zephir_array_fetch_long(&_1, methods, 0, PH_NOISY | PH_READONLY, "snail/mvc/router.zep", 33 TSRMLS_CC);
		_0 = ZEPHIR_IS_STRING_IDENTICAL(_1, "*");
	}
	if (_0) {
		RETURN_MM_BOOL(1);
	} else {
		RETURN_MM_BOOL(zephir_fast_in_array(reqMethod, methods TSRMLS_CC));
	}

}

PHP_METHOD(Snail_Mvc_Router, handleRequest) {

	HashTable *_2;
	HashPosition _1;
	zend_bool routeFound, _6$$3;
	zephir_fcall_cache_entry *_5 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *application, *_SERVER, *route = NULL, *methods = NULL, *path = NULL, *handler = NULL, *pathInfo = NULL, *reqMethod = NULL, *_0, **_3, *_4$$3 = NULL, *_7$$5;

	ZEPHIR_MM_GROW();
	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	zephir_fetch_params(1, 1, 0, &application);



	routeFound = 0;
	ZEPHIR_OBS_VAR(pathInfo);
	zephir_array_fetch_string(&pathInfo, _SERVER, SL("PATH_INFO"), PH_NOISY, "snail/mvc/router.zep", 42 TSRMLS_CC);
	ZEPHIR_OBS_VAR(reqMethod);
	zephir_array_fetch_string(&reqMethod, _SERVER, SL("REQUEST_METHOD"), PH_NOISY, "snail/mvc/router.zep", 43 TSRMLS_CC);
	_0 = zephir_fetch_nproperty_this(this_ptr, SL("routes"), PH_NOISY_CC);
	zephir_is_iterable(_0, &_2, &_1, 0, 0, "snail/mvc/router.zep", 55);
	for (
	  ; zephir_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zephir_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HVALUE(route, _3);
		ZEPHIR_CALL_METHOD(&methods, route, "gethttpmethods", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&path, route, "getpath", NULL, 0);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(&_4$$3, this_ptr, "checkmethod", &_5, 2, reqMethod, methods);
		zephir_check_call_status();
		_6$$3 = zephir_is_true(_4$$3);
		if (_6$$3) {
			_6$$3 = ZEPHIR_IS_IDENTICAL(pathInfo, path);
		}
		if (_6$$3) {
			zephir_update_property_this(this_ptr, SL("matchedRoute"), route TSRMLS_CC);
			routeFound = 1;
			break;
		}
	}
	if (routeFound) {
		_7$$5 = zephir_fetch_nproperty_this(this_ptr, SL("matchedRoute"), PH_NOISY_CC);
		ZEPHIR_CALL_METHOD(&handler, _7$$5, "gethandler", NULL, 0);
		zephir_check_call_status();
		if (zephir_is_callable(handler TSRMLS_CC)) {
			ZEPHIR_RETURN_CALL_ZVAL_FUNCTION(handler, NULL, 0, application);
			zephir_check_call_status();
			RETURN_MM();
		} else {
			ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Invalid callable handler", "snail/mvc/router.zep", 60);
			return;
		}
	}
	RETURN_MM_BOOL(0);

}

zend_object_value zephir_init_properties_Snail_Mvc_Router(zend_class_entry *class_type TSRMLS_DC) {

		zval *_0, *_1$$3;

		ZEPHIR_MM_GROW();
	
	{
		zval *this_ptr = NULL;
		ZEPHIR_CREATE_OBJECT(this_ptr, class_type);
		_0 = zephir_fetch_nproperty_this(this_ptr, SL("routes"), PH_NOISY_CC);
		if (Z_TYPE_P(_0) == IS_NULL) {
			ZEPHIR_INIT_VAR(_1$$3);
			array_init(_1$$3);
			zephir_update_property_this(this_ptr, SL("routes"), _1$$3 TSRMLS_CC);
		}
		ZEPHIR_MM_RESTORE();
		return Z_OBJVAL_P(this_ptr);
	}

}

