/* /////////////////////////////////////////////////////////////////////////
 * File:    cmpfs/cmpfs.h
 *
 * Purpose: Main C header for the cmpfs library.
 *
 * Created: ... 2010 ...
 * Updated: 21st August 2026
 *
 * Home:    https://github.com/synesissoftware/cmpfs
 *
 * Copyright (c) 2019-2026, Matthew Wilson and Synesis Information Systems
 * Copyright (c) 2010-2019, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file cmpfs/cmpfs.h
 * [C, C++] Main header for the \ref group__library__cmpfs "cmpfs"
 *   library.
 */

#ifndef CMPFS_INCL_CMPFS_H_CMPFS
#define CMPFS_INCL_CMPFS_H_CMPFS

/* /////////////////////////////////////////////////////////////////////////
 * version information
 */

#ifndef CMPFS_DOCUMENTATION_SKIP_SECTION
# define CMPFS_VER_CMPFS_H_CMPFS_MAJOR      1
# define CMPFS_VER_CMPFS_H_CMPFS_MINOR      1
# define CMPFS_VER_CMPFS_H_CMPFS_REVISION   1
# define CMPFS_VER_CMPFS_H_CMPFS_EDIT       12
#endif /* !CMPFS_DOCUMENTATION_SKIP_SECTION */

/** \def CMPFS_VER_MAJOR
 * The major version number of cmpfs
 */

/** \def CMPFS_VER_MINOR
 * The minor version number of cmpfs
 */

/** \def CMPFS_VER_PATCH
 * The patch version number of cmpfs
 */

/** \def CMPFS_VER_AB
 * The alpha/beta designator of cmpfs, or 0xFF for a non-prerelease
 */

/** \def CMPFS_VER
 * The current composite version number of cmpfs
 */

#define CMPFS_VER_MAJOR             1
#define CMPFS_VER_MINOR             1
#define CMPFS_VER_PATCH             0
#define CMPFS_VER_AB                0x41

#define CMPFS_VER \
    (0\
        |   (   CMPFS_VER_MAJOR       << 24   ) \
        |   (   CMPFS_VER_MINOR       << 16   ) \
        |   (   CMPFS_VER_PATCH       <<  8   ) \
        |   (   CMPFS_VER_AB   <<  0   ) \
    )

#ifndef CMPFS_DOCUMENTATION_SKIP_SECTION
# define CMPFS_VER_REVISION         CMPFS_VER_PATCH
#endif /* !CMPFS_DOCUMENTATION_SKIP_SECTION */



/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <stddef.h>
#include <stdio.h>


/* /////////////////////////////////////////////////////////////////////////
 * language
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* /////////////////////////////////////////////////////////////////////////
 * flags
 */

/** No text-comparison flags. */
#define CMPFS_F_NONE                                        (0)

/** Trim leading and trailing whitespace from each line (text compare). */
#define CMPFS_F_TRIM_LINES                                  (0x0001)

/** Skip blank lines (text compare). */
#define CMPFS_F_SKIP_BLANK_LINES                            (0x0002)


/* /////////////////////////////////////////////////////////////////////////
 * types
 */

/** Result of a file or stream comparison.
 *
 * \note This structure is a skeleton placeholder. Field semantics will be
 *   completed when comparison is implemented.
 */
struct cmpfs_comparison_result_t
{
    int     equal;      /*!< Non-zero if the compared entities are equal. */
    size_t  offset_1;   /*!< First differing offset in the first entity. */
    size_t  offset_2;   /*!< First differing offset in the second entity. */
};
#ifndef __cplusplus
typedef struct cmpfs_comparison_result_t                    cmpfs_comparison_result_t;
#endif /* !__cplusplus */


/* /////////////////////////////////////////////////////////////////////////
 * API
 */

/** Compares two files as binary sequences.
 *
 * \param path1 Path of the first file. May not be NULL.
 * \param path2 Path of the second file. May not be NULL.
 * \param flags Combination of <code>CMPFS_F_*</code> flags.
 * \param result Optional result structure. May be NULL.
 *
 * \retval 0 The comparison completed successfully (see \c result).
 * \retval !0 A C failure code, suitable for <code>strerror()</code>.
 *
 * \note This function is a skeleton stub and currently returns
 *   <code>ENOSYS</code>.
 *
 * \pre (NULL != path1)
 * \pre (NULL != path2)
 */
int
cmpfs_compare_binary_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);

int
cmpfs_compare_binary_streams(
    FILE*                       stm1
,   FILE*                       stm2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);

/** Compares two files as text.
 *
 * \param path1 Path of the first file. May not be NULL.
 * \param path2 Path of the second file. May not be NULL.
 * \param flags Combination of <code>CMPFS_F_*</code> flags.
 * \param result Optional result structure. May be NULL.
 *
 * \retval 0 The comparison completed successfully (see \c result).
 * \retval !0 A C failure code, suitable for <code>strerror()</code>.
 *
 * \note This function is a skeleton stub and currently returns
 *   <code>ENOSYS</code>.
 *
 * \pre (NULL != path1)
 * \pre (NULL != path2)
 */
int
cmpfs_compare_text_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);

int
cmpfs_compare_text_streams(
    FILE*                       stm1
,   FILE*                       stm2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
);


/* /////////////////////////////////////////////////////////////////////////
 * language
 */

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */


/* /////////////////////////////////////////////////////////////////////////
 * inclusion control
 */

#ifdef STLSOFT_CF_PRAGMA_ONCE_SUPPORT
# pragma once
#endif /* STLSOFT_CF_PRAGMA_ONCE_SUPPORT */

#endif /* !CMPFS_INCL_CMPFS_H_CMPFS */

/* ///////////////////////////// end of file //////////////////////////// */

