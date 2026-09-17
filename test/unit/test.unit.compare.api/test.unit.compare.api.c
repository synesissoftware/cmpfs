/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.compare.api.c
 *
 * Purpose: Unit tests for the cmpfs skeleton comparison API.
 *
 * Created: 21st August 2026
 * Updated: 17th September 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <cmpfs/cmpfs.h>

#include <xtests/xtests.h>

#include <errno.h>
#include <stdlib.h>

#ifndef ENOSYS
# define ENOSYS     78
#endif /* !ENOSYS */


static void
test_compare_binary_files_is_stub(void)
{
    cmpfs_comparison_result_t   result;
    int const                   r = cmpfs_compare_binary_files("a", "b", CMPFS_F_NONE, &result);

    XTESTS_TEST_INTEGER_EQUAL(ENOSYS, r);
    XTESTS_TEST_INTEGER_EQUAL(0, result.equal);
    XTESTS_TEST_INTEGER_EQUAL(0, (int)result.offset_1);
    XTESTS_TEST_INTEGER_EQUAL(0, (int)result.offset_2);
}

static void
test_compare_binary_files_accepts_null_result(void)
{
    int const r = cmpfs_compare_binary_files("a", "b", CMPFS_F_NONE, NULL);

    XTESTS_TEST_INTEGER_EQUAL(ENOSYS, r);
}

static void
test_compare_text_files_is_stub(void)
{
    cmpfs_comparison_result_t   result;
    int const                   r = cmpfs_compare_text_files(
                                    "a"
                                ,   "b"
                                ,   CMPFS_F_TRIM_LINES | CMPFS_F_SKIP_BLANK_LINES
                                ,   &result
                                );

    XTESTS_TEST_INTEGER_EQUAL(ENOSYS, r);
    XTESTS_TEST_INTEGER_EQUAL(0, result.equal);
}


int
main(int argc, char* argv[])
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.compare.api", verbosity))
    {
        XTESTS_RUN_CASE(test_compare_binary_files_is_stub);
        XTESTS_RUN_CASE(test_compare_binary_files_accepts_null_result);
        XTESTS_RUN_CASE(test_compare_text_files_is_stub);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}


/* ///////////////////////////// end of file //////////////////////////// */

