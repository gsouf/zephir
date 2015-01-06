
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
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(test_0__closure) {

	ZEPHIR_REGISTER_CLASS(test, 0__closure, test, 0__closure, test_0__closure_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;

}

PHP_METHOD(test_0__closure, __invoke) {

	zval *x;

	zephir_fetch_params(0, 1, 0, &x);



	RETURN_LONG((zephir_get_numberval(x) * 100));

}

