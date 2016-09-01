
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Snail_Mvc_RouterInterface) {

	ZEPHIR_REGISTER_INTERFACE(Snail\\Mvc, RouterInterface, snail, mvc_routerinterface, snail_mvc_routerinterface_method_entry);

	zend_declare_class_constant_long(snail_mvc_routerinterface_ce, SL("POSITION_FIRST"), 0 TSRMLS_CC);

	zend_declare_class_constant_long(snail_mvc_routerinterface_ce, SL("POSITION_LAST"), 1 TSRMLS_CC);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Snail_Mvc_RouterInterface, add);

ZEPHIR_DOC_METHOD(Snail_Mvc_RouterInterface, handleRequest);

