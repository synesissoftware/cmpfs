/* /////////////////////////////////////////////////////////////////////////
 * File:    main.c
 *
 * Purpose: Scratch test for cmpfs.
 *
 * Created: 21st August 2026
 * Updated: 21st August 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <cmpfs/cmpfs.h>

#include <stdio.h>
#include <stdlib.h>


int
main(void)
{
    cmpfs_comparison_result_t   result;
    int const                   r = cmpfs_compare_text_files(
                                    "left.txt"
                                ,   "right.txt"
                                ,   CMPFS_F_NONE
                                ,   &result
                                );

    printf("cmpfs_compare_text_files() -> %d\n", r);

    return EXIT_SUCCESS;
}


/* ///////////////////////////// end of file //////////////////////////// */

