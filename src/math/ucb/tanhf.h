// Copyright (C) 1988-1994 Sun Microsystems, Inc. 2550 Garcia Avenue
// Mountain View, California  94043 All rights reserved.
//
// Any person is hereby authorized to download, copy, use, create bug fixes,
// and distribute, subject to the following conditions:
//
// 	1.  the software may not be redistributed for a fee except as
// 	    reasonable to cover media costs;
// 	2.  any copy of the software must include this notice, as well as
// 	    any other embedded copyright notices; and
// 	3.  any distribution of this software or derivative works thereof
// 	    must comply with all applicable U.S. export control laws.
//
// THE SOFTWARE IS MADE AVAILABLE "AS IS" AND WITHOUT EXPRESS OR IMPLIED
// WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF DESIGN, MERCHANTIBILITY, FITNESS FOR A PARTICULAR
// PURPOSE, NON-INFRINGEMENT, PERFORMANCE OR CONFORMANCE TO
// SPECIFICATIONS.
//
// BY DOWNLOADING AND/OR USING THIS SOFTWARE, THE USER WAIVES ALL CLAIMS
// AGAINST SUN MICROSYSTEMS, INC. AND ITS AFFILIATED COMPANIES IN ANY
// JURISDICTION, INCLUDING BUT NOT LIMITED TO CLAIMS FOR DAMAGES OR
// EQUITABLE RELIEF BASED ON LOSS OF DATA, AND SPECIFICALLY WAIVES EVEN
// UNKNOWN OR UNANTICIPATED CLAIMS OR LOSSES, PRESENT AND FUTURE.
//
// IN NO EVENT WILL SUN MICROSYSTEMS, INC. OR ANY OF ITS AFFILIATED
// COMPANIES BE LIABLE FOR ANY LOST REVENUE OR PROFITS OR OTHER SPECIAL,
// INDIRECT AND CONSEQUENTIAL DAMAGES, EVEN IF IT HAS BEEN ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGES.
//
// This file is provided with no support and without any obligation on the
// part of Sun Microsystems, Inc. ("Sun") or any of its affiliated
// companies to assist in its use, correction, modification or
// enhancement.  Nevertheless, and without creating any obligation on its
// part, Sun welcomes your comments concerning the software and requests
// that they be sent to fdlibm-comments@sunpro.sun.com.
// tanh(+-max) = +-1
T(RN, 0x1.fffffep+127,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.fffffep+127,         -0x1p+0,          0x0p+0, INEXACT)
T(RZ, 0x1.fffffep+127,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ,-0x1.fffffep+127,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RU, 0x1.fffffep+127,          0x1p+0,          0x0p+0, INEXACT)
T(RU,-0x1.fffffep+127,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RD, 0x1.fffffep+127,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD,-0x1.fffffep+127,         -0x1p+0,          0x0p+0, INEXACT)
// tanh(tiny) :=: tiny
T(RN,         0x1p-29,         0x1p-29,  0x1.555556p-37, INEXACT)
T(RN,        -0x1p-29,        -0x1p-29, -0x1.555556p-37, INEXACT)
T(RN,        0x1p-126,        0x1p-126,          0x0p+0, INEXACT)
T(RN,       -0x1p-126,       -0x1p-126,          0x0p+0, INEXACT)
// tanh(+-0) = +-0
T(RN,          0x0p+0,          0x0p+0,          0x0p+0, 0)
T(RN,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
T(RZ,          0x0p+0,          0x0p+0,          0x0p+0, 0)
T(RZ,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
T(RU,          0x0p+0,          0x0p+0,          0x0p+0, 0)
T(RU,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
T(RD,          0x0p+0,          0x0p+0,          0x0p+0, 0)
T(RD,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
// random arguments between -9 9
T(RN,  -0x1.358d5cp+1,  -0x1.f7f0d6p-1,   0x1.36d18cp-2, INEXACT)
T(RN,    0x1.9a3dfp+2,   0x1.ffff4ap-1,  -0x1.a1a278p-3, INEXACT)
T(RN,    0x1.fb23ap+2,   0x1.fffff8p-1,    0x1.94fd3p-2, INEXACT)
T(RN,   -0x1.80af5p+2,  -0x1.fffe6cp-1,   0x1.9b471ep-3, INEXACT)
T(RN,  -0x1.38148ep+1,  -0x1.f84024p-1,   0x1.543fb8p-2, INEXACT)
T(RN,  -0x1.6a1d62p-2,  -0x1.5bbd2ep-2,  -0x1.dde122p-8, INEXACT)
T(RN,   0x1.4d1e6ep+2,   0x1.fff81ap-1,  -0x1.586d5ap-7, INEXACT)
T(RN,   0x1.ec87f4p+2,   0x1.fffff2p-1,  -0x1.f7ee14p-5, INEXACT)
T(RN,  -0x1.833b12p+0,  -0x1.d0971ep-1,  -0x1.4ec0c6p-2, INEXACT)
T(RN,  -0x1.13e934p+3,  -0x1.fffffep-1,  -0x1.680526p-4, INEXACT)
// tanh(nan) is nan
T(RN,             nan,             nan,          0x0p+0, 0)
T(RN,             nan,             nan,          0x0p+0, 0)
T(RZ,             nan,             nan,          0x0p+0, 0)
T(RZ,             nan,             nan,          0x0p+0, 0)
T(RU,             nan,             nan,          0x0p+0, 0)
T(RU,             nan,             nan,          0x0p+0, 0)
T(RD,             nan,             nan,          0x0p+0, 0)
T(RD,             nan,             nan,          0x0p+0, 0)
// tanh(+-inf) is 1.0
T(RN,             inf,          0x1p+0,          0x0p+0, 0)
T(RN,            -inf,         -0x1p+0,          0x0p+0, 0)
T(RZ,             inf,          0x1p+0,          0x0p+0, 0)
T(RZ,            -inf,         -0x1p+0,          0x0p+0, 0)
T(RU,             inf,          0x1p+0,          0x0p+0, 0)
T(RU,            -inf,         -0x1p+0,          0x0p+0, 0)
T(RD,             inf,          0x1p+0,          0x0p+0, 0)
T(RD,            -inf,         -0x1p+0,          0x0p+0, 0)
// tanh(+-subnormal)
T(RN,        0x1p-149,        0x1p-149,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,       -0x1p-149,       -0x1p-149,          0x0p+0, INEXACT|UNDERFLOW)
T(RD, 0x1.000002p-126,        0x1p-126,         -0x1p+0, INEXACT)
T(RD, 0x1.000004p-126, 0x1.000002p-126,         -0x1p+0, INEXACT)
T(RD,        0x1p-125, 0x1.fffffep-126,         -0x1p+0, INEXACT)
T(RD,        0x1p-124, 0x1.fffffep-125,         -0x1p+0, INEXACT)
T(RD,         0x1p-28,  0x1.fffffep-29,         -0x1p+0, INEXACT)
T(RD,         0x1p-27,  0x1.fffffep-28,         -0x1p+0, INEXACT)
T(RD,       0x1.8p-27,  0x1.7ffffep-27,         -0x1p+0, INEXACT)
T(RD,         0x1p-26,  0x1.fffffep-27,         -0x1p+0, INEXACT)
T(RD,       0x1.4p-26,  0x1.3ffffep-26,         -0x1p+0, INEXACT)
T(RD,       0x1.8p-26,  0x1.7ffffep-26,         -0x1p+0, INEXACT)
T(RD,         0x1p-12,  0x1.fffffep-13,  -0x1.555556p-1, INEXACT)
T(RD,       0x1.66p+6,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD,      0x1.634p+9,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD,        0x1p+126,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD,        0x1p+127,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD, 0x1.fffffcp+127,   0x1.fffffep-1,         -0x1p+0, INEXACT)
T(RD,-0x1.000002p-126,-0x1.000002p-126,          0x0p+0, INEXACT)
T(RD,-0x1.000004p-126,-0x1.000004p-126,          0x0p+0, INEXACT)
T(RD,       -0x1p-125,       -0x1p-125,          0x0p+0, INEXACT)
T(RD,       -0x1p-124,       -0x1p-124,          0x0p+0, INEXACT)
T(RD,        -0x1p-28,        -0x1p-28, -0x1.555556p-35, INEXACT)
T(RD,        -0x1p-27,        -0x1p-27, -0x1.555556p-33, INEXACT)
T(RD,      -0x1.8p-27,      -0x1.8p-27,      -0x1.2p-31, INEXACT)
T(RD,        -0x1p-26,        -0x1p-26, -0x1.555556p-31, INEXACT)
T(RD,      -0x1.4p-26,      -0x1.4p-26, -0x1.4d5556p-30, INEXACT)
T(RD,      -0x1.8p-26,      -0x1.8p-26,      -0x1.2p-29, INEXACT)
T(RD,        -0x1p-12,        -0x1p-12,  -0x1.555556p-3, INEXACT)
T(RD,      -0x1.66p+6,         -0x1p+0,          0x0p+0, INEXACT)
T(RD,     -0x1.634p+9,         -0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p+126,         -0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p+127,         -0x1p+0,          0x0p+0, INEXACT)
T(RD,-0x1.fffffcp+127,         -0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-149,          0x0p+0,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD,        0x1p-148,        0x1p-149,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD,        0x1p-128,  0x1.fffffp-129,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD,        0x1p-127, 0x1.fffff8p-128,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD, 0x1.fffff8p-127, 0x1.fffff4p-127,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD, 0x1.fffffcp-127, 0x1.fffff8p-127,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD,        0x1p-126, 0x1.fffffcp-127,         -0x1p+0, INEXACT|UNDERFLOW)
T(RD,       -0x1p-149,       -0x1p-149,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,       -0x1p-148,       -0x1p-148,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,       -0x1p-128,       -0x1p-128,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,       -0x1p-127,       -0x1p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,-0x1.fffff8p-127,-0x1.fffff8p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,-0x1.fffffcp-127,-0x1.fffffcp-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RD,       -0x1p-126,       -0x1p-126,          0x0p+0, INEXACT)
T(RN, 0x1.000002p-126, 0x1.000002p-126,          0x0p+0, INEXACT)
T(RN, 0x1.000004p-126, 0x1.000004p-126,          0x0p+0, INEXACT)
T(RN,        0x1p-125,        0x1p-125,          0x0p+0, INEXACT)
T(RN,        0x1p-124,        0x1p-124,          0x0p+0, INEXACT)
T(RN,         0x1p-28,         0x1p-28,  0x1.555556p-35, INEXACT)
T(RN,         0x1p-27,         0x1p-27,  0x1.555556p-33, INEXACT)
T(RN,       0x1.8p-27,       0x1.8p-27,       0x1.2p-31, INEXACT)
T(RN,         0x1p-26,         0x1p-26,  0x1.555556p-31, INEXACT)
T(RN,       0x1.4p-26,       0x1.4p-26,  0x1.4d5556p-30, INEXACT)
T(RN,       0x1.8p-26,       0x1.8p-26,       0x1.2p-29, INEXACT)
T(RN,         0x1p-12,         0x1p-12,   0x1.555554p-3, INEXACT)
T(RN,       0x1.66p+6,          0x1p+0,          0x0p+0, INEXACT)
T(RN,      0x1.634p+9,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p+126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p+127,          0x1p+0,          0x0p+0, INEXACT)
T(RN, 0x1.fffffcp+127,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.000002p-126,-0x1.000002p-126,          0x0p+0, INEXACT)
T(RN,-0x1.000004p-126,-0x1.000004p-126,          0x0p+0, INEXACT)
T(RN,       -0x1p-125,       -0x1p-125,          0x0p+0, INEXACT)
T(RN,       -0x1p-124,       -0x1p-124,          0x0p+0, INEXACT)
T(RN,        -0x1p-28,        -0x1p-28, -0x1.555556p-35, INEXACT)
T(RN,        -0x1p-27,        -0x1p-27, -0x1.555556p-33, INEXACT)
T(RN,      -0x1.8p-27,      -0x1.8p-27,      -0x1.2p-31, INEXACT)
T(RN,        -0x1p-26,        -0x1p-26, -0x1.555556p-31, INEXACT)
T(RN,      -0x1.4p-26,      -0x1.4p-26, -0x1.4d5556p-30, INEXACT)
T(RN,      -0x1.8p-26,      -0x1.8p-26,      -0x1.2p-29, INEXACT)
T(RN,        -0x1p-12,        -0x1p-12,  -0x1.555554p-3, INEXACT)
T(RN,      -0x1.66p+6,         -0x1p+0,          0x0p+0, INEXACT)
T(RN,     -0x1.634p+9,         -0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p+126,         -0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p+127,         -0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.fffffcp+127,         -0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-148,        0x1p-148,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,        0x1p-128,        0x1p-128,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,        0x1p-127,        0x1p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RN, 0x1.fffff8p-127, 0x1.fffff8p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RN, 0x1.fffffcp-127, 0x1.fffffcp-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,       -0x1p-148,       -0x1p-148,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,       -0x1p-128,       -0x1p-128,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,       -0x1p-127,       -0x1p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,-0x1.fffff8p-127,-0x1.fffff8p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RN,-0x1.fffffcp-127,-0x1.fffffcp-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RU, 0x1.000002p-126, 0x1.000002p-126,          0x0p+0, INEXACT)
T(RU, 0x1.000004p-126, 0x1.000004p-126,          0x0p+0, INEXACT)
T(RU,        0x1p-125,        0x1p-125,          0x0p+0, INEXACT)
T(RU,        0x1p-124,        0x1p-124,          0x0p+0, INEXACT)
T(RU,         0x1p-28,         0x1p-28,  0x1.555556p-35, INEXACT)
T(RU,         0x1p-27,         0x1p-27,  0x1.555556p-33, INEXACT)
T(RU,       0x1.8p-27,       0x1.8p-27,       0x1.2p-31, INEXACT)
T(RU,         0x1p-26,         0x1p-26,  0x1.555556p-31, INEXACT)
T(RU,       0x1.4p-26,       0x1.4p-26,  0x1.4d5556p-30, INEXACT)
T(RU,       0x1.8p-26,       0x1.8p-26,       0x1.2p-29, INEXACT)
T(RU,         0x1p-12,         0x1p-12,   0x1.555556p-3, INEXACT)
T(RU,       0x1.66p+6,          0x1p+0,          0x0p+0, INEXACT)
T(RU,      0x1.634p+9,          0x1p+0,          0x0p+0, INEXACT)
T(RU,        0x1p+126,          0x1p+0,          0x0p+0, INEXACT)
T(RU,        0x1p+127,          0x1p+0,          0x0p+0, INEXACT)
T(RU, 0x1.fffffcp+127,          0x1p+0,          0x0p+0, INEXACT)
T(RU,-0x1.000002p-126,       -0x1p-126,          0x1p+0, INEXACT)
T(RU,-0x1.000004p-126,-0x1.000002p-126,          0x1p+0, INEXACT)
T(RU,       -0x1p-125,-0x1.fffffep-126,          0x1p+0, INEXACT)
T(RU,       -0x1p-124,-0x1.fffffep-125,          0x1p+0, INEXACT)
T(RU,        -0x1p-28, -0x1.fffffep-29,          0x1p+0, INEXACT)
T(RU,        -0x1p-27, -0x1.fffffep-28,          0x1p+0, INEXACT)
T(RU,      -0x1.8p-27, -0x1.7ffffep-27,          0x1p+0, INEXACT)
T(RU,        -0x1p-26, -0x1.fffffep-27,          0x1p+0, INEXACT)
T(RU,      -0x1.4p-26, -0x1.3ffffep-26,          0x1p+0, INEXACT)
T(RU,      -0x1.8p-26, -0x1.7ffffep-26,          0x1p+0, INEXACT)
T(RU,        -0x1p-12, -0x1.fffffep-13,   0x1.555556p-1, INEXACT)
T(RU,      -0x1.66p+6,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RU,     -0x1.634p+9,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RU,       -0x1p+126,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RU,       -0x1p+127,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RU,-0x1.fffffcp+127,  -0x1.fffffep-1,          0x1p+0, INEXACT)
T(RU,        0x1p-149,        0x1p-149,          0x0p+0, INEXACT|UNDERFLOW)
T(RU,        0x1p-148,        0x1p-148,          0x0p+0, INEXACT|UNDERFLOW)
T(RU,        0x1p-128,        0x1p-128,          0x0p+0, INEXACT|UNDERFLOW)
T(RU,        0x1p-127,        0x1p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RU, 0x1.fffff8p-127, 0x1.fffff8p-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RU, 0x1.fffffcp-127, 0x1.fffffcp-127,          0x0p+0, INEXACT|UNDERFLOW)
T(RU,        0x1p-126,        0x1p-126,          0x0p+0, INEXACT)
T(RU,       -0x1p-149,         -0x0p+0,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,       -0x1p-148,       -0x1p-149,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,       -0x1p-128, -0x1.fffffp-129,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,       -0x1p-127,-0x1.fffff8p-128,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,-0x1.fffff8p-127,-0x1.fffff4p-127,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,-0x1.fffffcp-127,-0x1.fffff8p-127,          0x1p+0, INEXACT|UNDERFLOW)
T(RU,       -0x1p-126,-0x1.fffffcp-127,          0x1p+0, INEXACT|UNDERFLOW)
T(RZ, 0x1.000002p-126,        0x1p-126,  -0x1.fffffep-1, INEXACT)
T(RZ, 0x1.000004p-126, 0x1.000002p-126,  -0x1.fffffep-1, INEXACT)
T(RZ,        0x1p-125, 0x1.fffffep-126,  -0x1.fffffep-1, INEXACT)
T(RZ,        0x1p-124, 0x1.fffffep-125,  -0x1.fffffep-1, INEXACT)
T(RZ,         0x1p-28,  0x1.fffffep-29,  -0x1.fffffep-1, INEXACT)
T(RZ,         0x1p-27,  0x1.fffffep-28,  -0x1.fffffep-1, INEXACT)
T(RZ,       0x1.8p-27,  0x1.7ffffep-27,  -0x1.fffffep-1, INEXACT)
T(RZ,         0x1p-26,  0x1.fffffep-27,  -0x1.fffffep-1, INEXACT)
T(RZ,       0x1.4p-26,  0x1.3ffffep-26,  -0x1.fffffep-1, INEXACT)
T(RZ,       0x1.8p-26,  0x1.7ffffep-26,  -0x1.fffffep-1, INEXACT)
T(RZ,         0x1p-12,  0x1.fffffep-13,  -0x1.555554p-1, INEXACT)
T(RZ,       0x1.66p+6,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ,      0x1.634p+9,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ,        0x1p+126,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ,        0x1p+127,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ, 0x1.fffffcp+127,   0x1.fffffep-1,  -0x1.fffffep-1, INEXACT)
T(RZ,-0x1.000002p-126,       -0x1p-126,   0x1.fffffep-1, INEXACT)
T(RZ,-0x1.000004p-126,-0x1.000002p-126,   0x1.fffffep-1, INEXACT)
T(RZ,       -0x1p-125,-0x1.fffffep-126,   0x1.fffffep-1, INEXACT)
T(RZ,       -0x1p-124,-0x1.fffffep-125,   0x1.fffffep-1, INEXACT)
T(RZ,        -0x1p-28, -0x1.fffffep-29,   0x1.fffffep-1, INEXACT)
T(RZ,        -0x1p-27, -0x1.fffffep-28,   0x1.fffffep-1, INEXACT)
T(RZ,      -0x1.8p-27, -0x1.7ffffep-27,   0x1.fffffep-1, INEXACT)
T(RZ,        -0x1p-26, -0x1.fffffep-27,   0x1.fffffep-1, INEXACT)
T(RZ,      -0x1.4p-26, -0x1.3ffffep-26,   0x1.fffffep-1, INEXACT)
T(RZ,      -0x1.8p-26, -0x1.7ffffep-26,   0x1.fffffep-1, INEXACT)
T(RZ,        -0x1p-12, -0x1.fffffep-13,   0x1.555554p-1, INEXACT)
T(RZ,      -0x1.66p+6,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RZ,     -0x1.634p+9,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RZ,       -0x1p+126,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RZ,       -0x1p+127,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RZ,-0x1.fffffcp+127,  -0x1.fffffep-1,   0x1.fffffep-1, INEXACT)
T(RZ,        0x1p-149,          0x0p+0,         -0x1p+0, INEXACT|UNDERFLOW)
T(RZ,        0x1p-148,        0x1p-149,         -0x1p+0, INEXACT|UNDERFLOW)
T(RZ,        0x1p-128,  0x1.fffffp-129,  -0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,        0x1p-127, 0x1.fffff8p-128,  -0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ, 0x1.fffff8p-127, 0x1.fffff4p-127,  -0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ, 0x1.fffffcp-127, 0x1.fffff8p-127,  -0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,        0x1p-126, 0x1.fffffcp-127,  -0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,       -0x1p-149,         -0x0p+0,          0x1p+0, INEXACT|UNDERFLOW)
T(RZ,       -0x1p-148,       -0x1p-149,          0x1p+0, INEXACT|UNDERFLOW)
T(RZ,       -0x1p-128, -0x1.fffffp-129,   0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,       -0x1p-127,-0x1.fffff8p-128,   0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,-0x1.fffff8p-127,-0x1.fffff4p-127,   0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,-0x1.fffffcp-127,-0x1.fffff8p-127,   0x1.fffffep-1, INEXACT|UNDERFLOW)
T(RZ,       -0x1p-126,-0x1.fffffcp-127,   0x1.fffffep-1, INEXACT|UNDERFLOW)
