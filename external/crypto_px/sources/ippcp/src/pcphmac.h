/*
* Copyright (C) 2016 Intel Corporation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the
*     distribution.
*   * Neither the name of Intel Corporation nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

#if !defined(_PCP_HMAC_H)
#define _PCP_HMAC_H

#include "pcphash.h"

/*
// HMAC context
*/
struct _cpHMAC {
   IppCtxId idCtx;               /* HMAC identifier   */
   Ipp8u ipadKey[MBS_HASH_MAX];  /* inner padding key */
   Ipp8u opadKey[MBS_HASH_MAX];  /* outer padding key */
   IppsHashState hashCtx;        /* hash context      */
};

/* accessors */
#define HMAC_CTX_ID(stt)   ((stt)->idCtx)
#define HASH_CTX(stt)      ((stt)->hashCtx)
#define HMAC_VALID_ID(stt) (HMAC_CTX_ID((stt))==idCtxHMAC)

#define IPAD            (0x36)   /* inner padding value */
#define OPAD            (0x5C)   /* outer padding value */

#endif /* _PCP_HMAC_H */
