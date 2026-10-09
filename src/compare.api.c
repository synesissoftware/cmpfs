/* /////////////////////////////////////////////////////////////////////////
 * File:    compare.api.c
 *
 * Purpose: Skeleton implementation of the cmpfs comparison API.
 *
 * Created: ... 2010 ...
 * Updated: 17th September 2026
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


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <cmpfs/cmpfs.h>

#include <assert.h>
#include <errno.h>
#include <string.h>

#ifndef ENOSYS
# define ENOSYS     78
#endif /* !ENOSYS */

/* /////////////////////////////////////////////////////////////////////////
 * API
 */

int
cmpfs_compare_binary_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
)
{
    assert(NULL != path1);
    assert(NULL != path2);

    ((void)path1);
    ((void)path2);
    ((void)flags);

    if (NULL != result)
    {
        memset(result, 0, sizeof(*result));
    }

    return ENOSYS;
}

int
cmpfs_compare_text_files(
    char const*                 path1
,   char const*                 path2
,   unsigned                    flags
,   cmpfs_comparison_result_t*  result
)
{
    assert(NULL != path1);
    assert(NULL != path2);

    ((void)path1);
    ((void)path2);
    ((void)flags);

    if (NULL != result)
    {
        memset(result, 0, sizeof(*result));
    }

    return ENOSYS;
}

/* ///////////////////////////// end of file //////////////////////////// */

