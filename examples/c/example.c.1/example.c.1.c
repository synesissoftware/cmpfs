/* /////////////////////////////////////////////////////////////////////////
 * File:    example.c.1.c
 *
 * Purpose: Example of cmpfs: report library version and the skeleton
 *          compare-API status.
 *
 * Created: 21st August 2026
 * Updated: 21st August 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <cmpfs/cmpfs.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ENOSYS
# define ENOSYS     78
#endif /* !ENOSYS */


int
main(void)
{
    cmpfs_comparison_result_t   result;
    int                         r;

    printf(
        "cmpfs %d.%d.%d (composite 0x%08x)\n"
    ,   CMPFS_VER_MAJOR
    ,   CMPFS_VER_MINOR
    ,   CMPFS_VER_PATCH
    ,   CMPFS_VER
    );

    r = cmpfs_compare_binary_files("left.bin", "right.bin", &result);

    if (ENOSYS == r)
    {
        puts("cmpfs_compare_binary_files() is a skeleton stub (ENOSYS)");

        return EXIT_SUCCESS;
    }

    fprintf(
        stderr
    ,   "unexpected cmpfs_compare_binary_files() status : %s (%d)\n"
    ,   strerror(r)
    ,   r
    );

    return EXIT_FAILURE;
}


/* ///////////////////////////// end of file //////////////////////////// */

