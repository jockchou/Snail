
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "snail.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *snail_mvc_applicationinterface_ce;
zend_class_entry *snail_mvc_router_routeinterface_ce;
zend_class_entry *snail_mvc_routerinterface_ce;
zend_class_entry *snail_mvc_application_ce;
zend_class_entry *snail_mvc_router_ce;
zend_class_entry *snail_mvc_router_route_ce;

ZEND_DECLARE_MODULE_GLOBALS(snail)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(snail)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Snail_Mvc_ApplicationInterface);
	ZEPHIR_INIT(Snail_Mvc_RouterInterface);
	ZEPHIR_INIT(Snail_Mvc_Router_RouteInterface);
	ZEPHIR_INIT(Snail_Mvc_Application);
	ZEPHIR_INIT(Snail_Mvc_Router);
	ZEPHIR_INIT(Snail_Mvc_Router_Route);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(snail)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_snail_globals *snail_globals TSRMLS_DC)
{
	snail_globals->initialized = 0;

	/* Memory options */
	snail_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	snail_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	snail_globals->cache_enabled = 1;

	/* Recursive Lock */
	snail_globals->recursive_lock = 0;

	/* Static cache */
	memset(snail_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_snail_globals *snail_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(snail)
{

	zend_snail_globals *snail_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(snail_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(snail_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(snail)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(snail)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_SNAIL_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_SNAIL_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_SNAIL_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_SNAIL_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_SNAIL_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(snail)
{
	php_zephir_init_globals(snail_globals TSRMLS_CC);
	php_zephir_init_module_globals(snail_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(snail)
{

}


zend_function_entry php_snail_functions[] = {
ZEND_FE_END

};

zend_module_entry snail_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_SNAIL_EXTNAME,
	php_snail_functions,
	PHP_MINIT(snail),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(snail),
#else
	NULL,
#endif
	PHP_RINIT(snail),
	PHP_RSHUTDOWN(snail),
	PHP_MINFO(snail),
	PHP_SNAIL_VERSION,
	ZEND_MODULE_GLOBALS(snail),
	PHP_GINIT(snail),
	PHP_GSHUTDOWN(snail),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_SNAIL
ZEND_GET_MODULE(snail)
#endif
