#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <setjmp.h>
#include <inttypes.h>

#include "hash.h"
#include <cmockery/cmockery.h>

// A test case that does nothing and succeeds.
static void hash_test_success(void **state) {
    (void) state;
}

int main(void) {
    const UnitTest tests[] = {
        unit_test(hash_test_success),
    };

    return run_tests(tests, "hash");
}
