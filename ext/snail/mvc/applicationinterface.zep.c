
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Snail_Mvc_ApplicationInterface) {

	ZEPHIR_REGISTER_INTERFACE(Snail\\Mvc, ApplicationInterface, snail, mvc_applicationinterface, snail_mvc_applicationinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, get);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, post);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, put);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, head);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, options);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, delete);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, trace);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, connect);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, any);

ZEPHIR_DOC_METHOD(Snail_Mvc_ApplicationInterface, run);

