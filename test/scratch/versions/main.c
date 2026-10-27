/* /////////////////////////////////////////////////////////////////////////
 * File:    test/scratch/versions/main.c
 *
 * Purpose: Prints cmpfs composite version and efferent dependencies.
 *
 * Created: 17th September 2026
 * Updated: 27th October 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <cmpfs/cmpfs.h>

#ifdef HAS_STLSoft
# include <stlsoft/stlsoft.h>
#endif

#ifdef HAS_xTests
# include <xtests/xtests.h>
#endif

#include <stdio.h>
#include <stdlib.h>


static void
version(
    FILE*       stm
,   char const* prefix
,   char const* libname
,   char const* macroname
,   unsigned    libver
)
{
    fprintf(
        stm
    ,   "%s%s: v%u.%u.%u.%u (%s = 0x%08x)\n"
    ,   prefix
    ,   libname
    ,   (libver >> 24) & 0xff
    ,   (libver >> 16) & 0xff
    ,   (libver >> 8) & 0xff
    ,   (libver >> 0) & 0xff
    ,   macroname
    ,   libver
    );
}


int main(int argc, char* argv[])
{
    size_t efferent_counts = 0;

    ((void)&argc);
    ((void)&argv);

    {
        unsigned const libver = (unsigned)CMPFS_VER;

        version(stdout, "", "cmpfs", "CMPFS_VER", libver);
    }

#ifdef HAS_STLSoft

    (0 == efferent_counts++) && fputs("\nefferent dependencies:\n", stdout);

    {
        unsigned const libver = (unsigned)_STLSOFT_VER;

        version(stdout, "\t", "STLSoft", "_STLSOFT_VER", libver);
    }
#endif

#ifdef HAS_xTests

    (0 == efferent_counts++) && fputs("\nefferent dependencies:\n", stdout);

    {
        unsigned const libver = (unsigned)_XTESTS_VER;

        version(stdout, "\t", "xTests", "_XTESTS_VER", libver);
    }
#endif

    return EXIT_SUCCESS;
}


/* ///////////////////////////// end of file //////////////////////////// */
