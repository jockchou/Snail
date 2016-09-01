
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Snail_ApplicationInterface) {

	ZEPHIR_REGISTER_INTERFACE(Snail, ApplicationInterface, snail, applicationinterface, snail_applicationinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, get);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, post);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, put);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, head);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, options);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, delete);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, trace);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, connect);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, any);

ZEPHIR_DOC_METHOD(Snail_ApplicationInterface, run);

