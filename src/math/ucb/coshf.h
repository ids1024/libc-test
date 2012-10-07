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
// overflow boundary
T(RN,   0x1.65a9f8p+6, 0x1.ffffd8p+127,  -0x1.f47394p-4, INEXACT)
T(RZ,   0x1.65a9f8p+6, 0x1.ffffd8p+127,  -0x1.f47394p-4, INEXACT)
T(RU,   0x1.65a9f8p+6, 0x1.ffffdap+127,   0x1.c1718ep-1, INEXACT)
T(RD,   0x1.65a9f8p+6, 0x1.ffffd8p+127,  -0x1.f47396p-4, INEXACT)
T(RN,  -0x1.65a9f8p+6, 0x1.ffffd8p+127,  -0x1.f47394p-4, INEXACT)
T(RN,   0x1.65a9fap+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,  -0x1.65a9fap+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RZ,   0x1.65a9fap+6, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RU,   0x1.65a9fap+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RD,   0x1.65a9fap+6, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
// coshs(0 or tiny) :=: 1.0
T(RN,         0x1p-29,          0x1p+0,        -0x1p-36, INEXACT)
T(RN,        -0x1p-29,          0x1p+0,        -0x1p-36, INEXACT)
T(RN,        0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RN,          0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RN,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
// random arguments between -50,50
T(RN,  -0x1.adeefcp+3,  0x1.4de32ep+18,  -0x1.b42ea2p-2, INEXACT)
T(RN,    0x1.1ce3fp+5,  0x1.4c46e6p+50,  -0x1.eedd98p-2, INEXACT)
T(RN,    0x1.602e1p+5,  0x1.6cd136p+62,  -0x1.af2604p-2, INEXACT)
T(RN,   -0x1.0b246p+5,  0x1.21211ap+47,  -0x1.79d648p-5, INEXACT)
T(RN,  -0x1.b171eep+3,   0x1.749ccp+18,    0x1.b68d9p-2, INEXACT)
T(RN,  -0x1.f6eff2p+0,    0x1.d16ccp+1,  -0x1.268b0ap-5, INEXACT)
T(RN,   0x1.ceaa3ep+4,  0x1.a507e4p+40,  -0x1.bb6332p-2, INEXACT)
T(RN,   0x1.560914p+5,  0x1.9a9aecp+60,  -0x1.86baeep-2, INEXACT)
T(RN,  -0x1.0ce902p+3,   0x1.16e68p+11,   0x1.1fd9dcp-2, INEXACT)
T(RN,  -0x1.7f35b4p+5,  0x1.13ae52p+68,  -0x1.55ec92p-2, INEXACT)
// coshs(nan/inf)
T(RN,             nan,             nan,          0x0p+0, 0)
T(RN,             nan,             nan,          0x0p+0, 0)
T(RN,             inf,             inf,          0x0p+0, 0)
T(RN,            -inf,             inf,          0x0p+0, 0)
T(RD,             inf,             inf,          0x0p+0, 0)
T(RD,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RD,            -inf,             inf,          0x0p+0, 0)
T(RD,        0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD, 0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD, 0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD, 0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD, 0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RD,         0x1p-27,          0x1p+0, -0x1.000002p-32, INEXACT)
T(RD,         0x1p-12,          0x1p+0,  -0x1.000002p-2, INEXACT)
T(RD,         0x1p-11,   0x1.000002p+0, -0x1.555556p-26, INEXACT)
T(RD,       -0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD,-0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD,-0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD,-0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD,-0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RD,       -0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RD,        -0x1p-27,          0x1p+0, -0x1.000002p-32, INEXACT)
T(RD,        -0x1p-12,          0x1p+0,  -0x1.000002p-2, INEXACT)
T(RD,        -0x1p-11,   0x1.000002p+0, -0x1.555556p-26, INEXACT)
T(RD,       0x1.66p+6, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,      0x1.634p+9, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,        0x1p+126, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,        0x1p+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD, 0x1.fffffcp+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD, 0x1.fffffep+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,      -0x1.66p+6, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,     -0x1.634p+9, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,       -0x1p+126, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,       -0x1p+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,-0x1.fffffcp+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,-0x1.fffffep+127, 0x1.fffffep+127,         -0x1p+0, INEXACT|OVERFLOW)
T(RD,             nan,             nan,          0x0p+0, 0)
T(RD,             nan,             nan,          0x0p+0, 0)
T(RN,        0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN, 0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN, 0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN, 0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN, 0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RN,         0x1p-27,          0x1p+0,        -0x1p-32, INEXACT)
T(RN,         0x1p-12,          0x1p+0,         -0x1p-2, INEXACT)
T(RN,         0x1p-11,   0x1.000002p+0, -0x1.555556p-26, INEXACT)
T(RN,       -0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,-0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RN,       -0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RN,        -0x1p-27,          0x1p+0,        -0x1p-32, INEXACT)
T(RN,        -0x1p-12,          0x1p+0,         -0x1p-2, INEXACT)
T(RN,        -0x1p-11,   0x1.000002p+0, -0x1.555556p-26, INEXACT)
T(RN,       0x1.66p+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,      0x1.634p+9,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,        0x1p+126,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,        0x1p+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN, 0x1.fffffcp+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN, 0x1.fffffep+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,      -0x1.66p+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,     -0x1.634p+9,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,       -0x1p+126,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,       -0x1p+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,-0x1.fffffcp+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RN,-0x1.fffffep+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,          0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RU,             inf,             inf,          0x0p+0, 0)
T(RU,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RU,            -inf,             inf,          0x0p+0, 0)
T(RU,       0x1.66p+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,      0x1.634p+9,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,        0x1p+126,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,        0x1p+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU, 0x1.fffffcp+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU, 0x1.fffffep+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,      -0x1.66p+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,     -0x1.634p+9,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,       -0x1p+126,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,       -0x1p+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,-0x1.fffffcp+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,-0x1.fffffep+127,             inf,          0x0p+0, INEXACT|OVERFLOW)
T(RU,             nan,             nan,          0x0p+0, 0)
T(RU,             nan,             nan,          0x0p+0, 0)
T(RU,        0x1p-149,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-148,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-128,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU, 0x1.fffff8p-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU, 0x1.fffffcp-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU, 0x1.000002p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU, 0x1.000004p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-125,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        0x1p-124,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,         0x1p-27,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,         0x1p-12,   0x1.000002p+0,        0x1.8p-1, INEXACT)
T(RU,         0x1p-11,   0x1.000004p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-149,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-148,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-128,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,-0x1.fffff8p-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,-0x1.fffffcp-127,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,-0x1.000002p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,-0x1.000004p-126,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-125,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,       -0x1p-124,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        -0x1p-27,   0x1.000002p+0,          0x1p+0, INEXACT)
T(RU,        -0x1p-12,   0x1.000002p+0,        0x1.8p-1, INEXACT)
T(RU,        -0x1p-11,   0x1.000004p+0,          0x1p+0, INEXACT)
T(RZ,          0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RZ,             inf,             inf,          0x0p+0, 0)
T(RZ,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
T(RZ,            -inf,             inf,          0x0p+0, 0)
T(RZ,        0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ, 0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ, 0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ, 0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ, 0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,         0x1p-27,          0x1p+0,        -0x1p-32, INEXACT)
T(RZ,         0x1p-12,          0x1p+0,         -0x1p-2, INEXACT)
T(RZ,         0x1p-11,   0x1.000002p+0, -0x1.555554p-26, INEXACT)
T(RZ,       -0x1p-149,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-148,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-128,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,-0x1.fffff8p-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,-0x1.fffffcp-127,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,-0x1.000002p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,-0x1.000004p-126,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-125,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,       -0x1p-124,          0x1p+0,          0x0p+0, INEXACT)
T(RZ,        -0x1p-27,          0x1p+0,        -0x1p-32, INEXACT)
T(RZ,        -0x1p-12,          0x1p+0,         -0x1p-2, INEXACT)
T(RZ,        -0x1p-11,   0x1.000002p+0, -0x1.555554p-26, INEXACT)
T(RZ,       0x1.66p+6, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,      0x1.634p+9, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,        0x1p+126, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,        0x1p+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ, 0x1.fffffcp+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ, 0x1.fffffep+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,      -0x1.66p+6, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,     -0x1.634p+9, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,       -0x1p+126, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,       -0x1p+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,-0x1.fffffcp+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,-0x1.fffffep+127, 0x1.fffffep+127,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RZ,             nan,             nan,          0x0p+0, 0)
T(RZ,             nan,             nan,          0x0p+0, 0)
