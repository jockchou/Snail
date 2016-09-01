
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Snail_Mvc_Router_RouteInterface) {

	ZEPHIR_REGISTER_INTERFACE(Snail\\Mvc\\Router, RouteInterface, snail, mvc_router_routeinterface, snail_mvc_router_routeinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, getId);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, getPath);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, setPath);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, getHttpMethods);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, setHttpMethods);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, setHandler);

ZEPHIR_DOC_METHOD(Snail_Mvc_Router_RouteInterface, getHandler);

