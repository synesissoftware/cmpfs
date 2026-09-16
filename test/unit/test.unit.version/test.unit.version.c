/* /////////////////////////////////////////////////////////////////////////
 * File:    test.unit.version.c
 *
 * Purpose: Unit tests for cmpfs version macros.
 *
 * Created: 21st August 2026
 * Updated: 21st August 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <cmpfs/cmpfs.h>

#include <xtests/xtests.h>

#include <stdlib.h>


static void
test_version_components(void)
{
    XTESTS_TEST_INTEGER_EQUAL(0, CMPFS_VER_MAJOR);
    XTESTS_TEST_INTEGER_EQUAL(0, CMPFS_VER_MINOR);
    XTESTS_TEST_INTEGER_EQUAL(1, CMPFS_VER_PATCH);
    XTESTS_TEST_INTEGER_EQUAL(0x41, CMPFS_VER_ALPHABETA);
    XTESTS_TEST_INTEGER_EQUAL(CMPFS_VER_PATCH, CMPFS_VER_REVISION);
}

static void
test_version_composite(void)
{
    int const computed =
        (0
            |   (   CMPFS_VER_MAJOR       << 24   )
            |   (   CMPFS_VER_MINOR       << 16   )
            |   (   CMPFS_VER_PATCH       <<  8   )
            |   (   CMPFS_VER_ALPHABETA   <<  0   )
        );

    XTESTS_TEST_INTEGER_EQUAL(computed, CMPFS_VER);
    XTESTS_TEST_INTEGER_EQUAL(CMPFS_VER_0_0_1_ALPHA_1, CMPFS_VER);
    XTESTS_TEST_INTEGER_EQUAL(0x00000141, CMPFS_VER);
}


int
main(int argc, char* argv[])
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if (XTESTS_START_RUNNER("test.unit.version", verbosity))
    {
        XTESTS_RUN_CASE(test_version_components);
        XTESTS_RUN_CASE(test_version_composite);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}


/* ///////////////////////////// end of file //////////////////////////// */

