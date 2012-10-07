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
// 0.7max,0.6max
T(RN, 0x1.6666666666666p+1023, 0x1.3333333333333p+1023, 0x1.d80a69c19e429p+1023,  -0x1.83b0f8p-2, INEXACT)
T(RZ, 0x1.6666666666666p+1023, 0x1.3333333333333p+1023, 0x1.d80a69c19e429p+1023,  -0x1.83b0f8p-2, INEXACT)
T(RU, 0x1.6666666666666p+1023, 0x1.3333333333333p+1023, 0x1.d80a69c19e42ap+1023,   0x1.3e2784p-1, INEXACT)
T(RD, 0x1.6666666666666p+1023, 0x1.3333333333333p+1023, 0x1.d80a69c19e429p+1023,  -0x1.83b0fap-2, INEXACT)
// tiny,huge = huge,tiny = huge
T(RN,                  0x0p+0, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RN,               0x1p-1074, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
T(RN,               0x1p-1022, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
T(RN,                  0x1p+0, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
T(RN, 0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RN, 0x1.fffffffffffffp+1023,               0x1p-1074, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
T(RN, 0x1.fffffffffffffp+1023,               0x1p-1022, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
T(RN, 0x1.fffffffffffffp+1023,                  0x1p+0, 0x1.fffffffffffffp+1023,          0x0p+0, INEXACT)
// pythagoras integers test
T(RN,   0x1.6643e942791bdp+52,   0x1.6643e6c0391b8p+51,   0x1.908d80f976845p+52,          0x0p+0, 0)
T(RN,   0x1.6643e8af5463dp+52,   0x1.6643eb9ed79c8p+51,   0x1.908d818c9b3c5p+52,          0x0p+0, 0)
T(RN,   0x1.6643e81c2fa9dp+52,   0x1.6643f07d761d8p+51,   0x1.908d821fbff65p+52,          0x0p+0, 0)
T(RN,   0x1.6643e7890aeddp+52,   0x1.6643f55c149e8p+51,   0x1.908d82b2e4b25p+52,          0x0p+0, 0)
T(RN,   0x1.6643e6f5e62fdp+52,   0x1.6643fa3ab31f8p+51,   0x1.908d834609705p+52,          0x0p+0, 0)
T(RN,   0x1.6643e9b983be3p+52,   0x1.6643e84173178p+51,   0x1.908d81ba13825p+52,          0x0p+0, 0)
T(RN,   0x1.6643e9265f05bp+52,   0x1.6643ed2011998p+51,   0x1.908d824d383adp+52,          0x0p+0, 0)
T(RN,   0x1.6643e8933a4b3p+52,   0x1.6643f1feb01b8p+51,   0x1.908d82e05cf55p+52,          0x0p+0, 0)
T(RN,   0x1.6643e800158ebp+52,   0x1.6643f6dd4e9d8p+51,   0x1.908d837381b1dp+52,          0x0p+0, 0)
T(RN,   0x1.6643e76cf0d03p+52,   0x1.6643fbbbed1f8p+51,   0x1.908d8406a6705p+52,          0x0p+0, 0)
T(RN,   0x1.6643ea7a20bc5p+52,   0x1.6643e7535dd28p+51,   0x1.908d82311e24dp+52,          0x0p+0, 0)
T(RN,   0x1.6643e9e6fc045p+52,   0x1.6643ec31fc558p+51,   0x1.908d82c442dcdp+52,          0x0p+0, 0)
T(RN,   0x1.6643e953d74a5p+52,   0x1.6643f1109ad88p+51,   0x1.908d83576796dp+52,          0x0p+0, 0)
T(RN,   0x1.6643e8c0b28e5p+52,   0x1.6643f5ef395b8p+51,   0x1.908d83ea8c52dp+52,          0x0p+0, 0)
T(RN,   0x1.6643e82d8dd05p+52,   0x1.6643facdd7de8p+51,   0x1.908d847db110dp+52,          0x0p+0, 0)
T(RN,   0x1.6643eaf12b5efp+52,    0x1.6643e8d497cfp+51,   0x1.908d82f1bb231p+52,          0x0p+0, 0)
T(RN,   0x1.6643ea5e06a67p+52,    0x1.6643edb33653p+51,   0x1.908d8384dfdb9p+52,          0x0p+0, 0)
T(RN,   0x1.6643e9cae1ebfp+52,    0x1.6643f291d4d7p+51,   0x1.908d841804961p+52,          0x0p+0, 0)
T(RN,   0x1.6643e937bd2f7p+52,    0x1.6643f770735bp+51,   0x1.908d84ab29529p+52,          0x0p+0, 0)
T(RN,   0x1.6643e8a49870fp+52,    0x1.6643fc4f11dfp+51,   0x1.908d853e4e111p+52,          0x0p+0, 0)
// radom argument in (-10,10)
T(RN,   -0x1.57f25b2b5006dp+1,    0x1.c7d30fb825911p+2,    0x1.e72fc42ea849dp+2,   0x1.6cb306p-2, INEXACT)
T(RN,    0x1.19be709de7505p+3,   -0x1.ab6d6fba96889p+2,    0x1.61a0ec76207f1p+3,   0x1.5a1818p-2, INEXACT)
T(RN,   -0x1.5ac18e27084ddp+1,   -0x1.925981b093c41p-2,    0x1.5e62687aa9911p+1,  -0x1.4ce2c8p-3, INEXACT)
T(RN,    0x1.7221cd18455f5p+2,    0x1.11a0d4a51b239p+3,    0x1.4a56018ddef82p+3,   -0x1.16dc3p-2, INEXACT)
T(RN,   -0x1.ae41a1079de4dp+0,   -0x1.329153103b871p+3,    0x1.373fdec7eac3ap+3,   0x1.8890f2p-4, INEXACT)
T(RN,   -0x1.0accef24163e5p+2,    0x1.d94511468cce9p-2,    0x1.0c6f6978c1e67p+2,   0x1.40c428p-2, INEXACT)
T(RN,   -0x1.e563ff258fcbdp+2,    0x1.c7cbf1ace7da1p+2,    0x1.4ceca5d10c789p+3,   0x1.431392p-2, INEXACT)
T(RN,   -0x1.3ec60efde0ed5p+3,   -0x1.3fa3ce8e5e899p+3,    0x1.c36d4d070556ap+3,   0x1.5ebb7cp-2, INEXACT)
T(RN,   -0x1.236fd1412d02dp+2,    0x1.7424328273bd1p+2,    0x1.d8ad9a3cf9eb2p+2,   0x1.5ea23cp-2, INEXACT)
T(RN,    0x1.6f651e8b7c6c5p+1,    0x1.3bfd78e193549p+2,    0x1.6d817fc32ad81p+2,   0x1.18ecbcp-3, INEXACT)
// nan's resutls
T(RN,                     nan,                  0x1p+0,                     nan,          0x0p+0, 0)
T(RN,                     nan,                  0x1p+0,                     nan,          0x0p+0, 0)
T(RN,                     nan,                     nan,                     nan,          0x0p+0, 0)
T(RN,              -0x1p+1023,                     nan,                     nan,          0x0p+0, 0)
// inf result
T(RN,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RZ,                     nan,                    -inf,                     inf,          0x0p+0, 0)
// inf result with snan argument
T(RN,                     nan,                     inf,                     inf,          0x0p+0, 0)
// overflow
T(RN,        -0x1.fffffp+1023,         0x1.eeeeep+1023,                     inf,          0x0p+0, INEXACT|OVERFLOW)
T(RZ,        -0x1.fffffp+1023,         0x1.eeeeep+1023, 0x1.fffffffffffffp+1023,  -0x1.fffffep-1, INEXACT|OVERFLOW)
T(RU,        -0x1.fffffp+1023,         0x1.eeeeep+1023,                     inf,          0x0p+0, INEXACT|OVERFLOW)
T(RD,        -0x1.fffffp+1023,         0x1.eeeeep+1023, 0x1.fffffffffffffp+1023,         -0x1p+0, INEXACT|OVERFLOW)
// subnormal number
T(RN,                  0x0p+0,               0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RN,               0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RN,               0x1p-1022,                  0x0p+0,               0x1p-1022,          0x0p+0, 0)
T(RN,                  0x0p+0,              -0x1p-1022,               0x1p-1022,          0x0p+0, 0)
T(RN,               0x1p-1074,               0x1p-1074,               0x1p-1074,  -0x1.a8279ap-2, INEXACT|UNDERFLOW)
T(RN,              -0x1p-1073,              -0x1p-1073,             0x1.8p-1073,   0x1.5f619ap-3, INEXACT|UNDERFLOW)
T(RD,                  0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RD,                  0x0p+0,               0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RD,                  0x0p+0, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RD,                  0x0p+0,                  0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RD,                  0x0p+0,               0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RD,                  0x0p+0, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RD,                  0x0p+0,                     inf,                     inf,          0x0p+0, 0)
T(RD,                  0x0p+0,                 -0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RD,                  0x0p+0,              -0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RD,                  0x0p+0,-0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RD,                  0x0p+0,                 -0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RD,                  0x0p+0,              -0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RD,                  0x0p+0,-0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RD,                  0x0p+0,                    -inf,                     inf,          0x0p+0, 0)
T(RD,               0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RD, 0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RD,                  0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RD,                0x1.8p+3,               -0x1.4p+2,                0x1.ap+3,          0x0p+0, 0)
T(RD,               0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RD, 0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RD,                     inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RD,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RD,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RD,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RD,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RD,                 -0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RD,              -0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RD,-0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RD,                 -0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RD,               -0x1.8p+1,                 -0x1p+2,                0x1.4p+2,          0x0p+0, 0)
T(RD,               -0x1.8p+4,                0x1.cp+2,                0x1.9p+4,          0x0p+0, 0)
T(RD,              -0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RD,-0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RD,                    -inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RD,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RD,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RD,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RD,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RD,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RD,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RD,               0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RD,             0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RD,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RD,                     nan,              -0x1p-1074,                     nan,          0x0p+0, 0)
T(RD,                     nan,            -0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RD,              -0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RD,            -0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RD,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RD,                     nan,               0x1p-1074,                     nan,          0x0p+0, 0)
T(RD,                     nan,             0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RN,                  0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RN,                  0x0p+0, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RN,                  0x0p+0,                  0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RN,                  0x0p+0,               0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RN,                  0x0p+0,                     inf,                     inf,          0x0p+0, 0)
T(RN,                  0x0p+0,                 -0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RN,                  0x0p+0,              -0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RN,                  0x0p+0,-0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RN,                  0x0p+0,                 -0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RN,                  0x0p+0,              -0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RN,                  0x0p+0,-0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RN,                  0x0p+0,                    -inf,                     inf,          0x0p+0, 0)
T(RN, 0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RN,                  0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RN,                0x1.8p+3,               -0x1.4p+2,                0x1.ap+3,          0x0p+0, 0)
T(RN,               0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RN,                     inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RN,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RN,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RN,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RN,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RN,                 -0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RN,              -0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RN,-0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RN,                 -0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RN,               -0x1.8p+1,                 -0x1p+2,                0x1.4p+2,          0x0p+0, 0)
T(RN,               -0x1.8p+4,                0x1.cp+2,                0x1.9p+4,          0x0p+0, 0)
T(RN,              -0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RN,-0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RN,                    -inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RN,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RN,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RN,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RN,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RN,               0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RN,             0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RN,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RN,                     nan,              -0x1p-1074,                     nan,          0x0p+0, 0)
T(RN,                     nan,            -0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RN,              -0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RN,            -0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RN,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RN,                     nan,               0x1p-1074,                     nan,          0x0p+0, 0)
T(RN,                     nan,             0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RU,                  0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RU,                  0x0p+0,               0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RU,                  0x0p+0, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RU,                  0x0p+0,                  0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RU,                  0x0p+0,               0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RU,                  0x0p+0, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RU,                  0x0p+0,                     inf,                     inf,          0x0p+0, 0)
T(RU,                  0x0p+0,                 -0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RU,                  0x0p+0,              -0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RU,                  0x0p+0,-0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RU,                  0x0p+0,                 -0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RU,                  0x0p+0,              -0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RU,                  0x0p+0,-0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RU,                  0x0p+0,                    -inf,                     inf,          0x0p+0, 0)
T(RU,               0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RU, 0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RU,                  0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RU,                0x1.8p+3,               -0x1.4p+2,                0x1.ap+3,          0x0p+0, 0)
T(RU,               0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RU, 0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RU,                     inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RU,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RU,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RU,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RU,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RU,                 -0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RU,              -0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RU,-0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RU,                 -0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RU,               -0x1.8p+1,                 -0x1p+2,                0x1.4p+2,          0x0p+0, 0)
T(RU,               -0x1.8p+4,                0x1.cp+2,                0x1.9p+4,          0x0p+0, 0)
T(RU,              -0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RU,-0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RU,                    -inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RU,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RU,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RU,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RU,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RU,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RU,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RU,               0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RU,             0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RU,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RU,                     nan,              -0x1p-1074,                     nan,          0x0p+0, 0)
T(RU,                     nan,            -0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RU,              -0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RU,            -0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RU,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RU,                     nan,               0x1p-1074,                     nan,          0x0p+0, 0)
T(RU,                     nan,             0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RZ,                  0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RZ,                  0x0p+0,               0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RZ,                  0x0p+0, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RZ,                  0x0p+0,                  0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RZ,                  0x0p+0,               0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RZ,                  0x0p+0, 0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RZ,                  0x0p+0,                     inf,                     inf,          0x0p+0, 0)
T(RZ,                  0x0p+0,                 -0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RZ,                  0x0p+0,              -0x1p-1074,               0x1p-1074,          0x0p+0, 0)
T(RZ,                  0x0p+0,-0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RZ,                  0x0p+0,                 -0x1p+0,                  0x1p+0,          0x0p+0, 0)
T(RZ,                  0x0p+0,              -0x1p+1023,               0x1p+1023,          0x0p+0, 0)
T(RZ,                  0x0p+0,-0x1.fffffffffffffp+1023, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RZ,                  0x0p+0,                    -inf,                     inf,          0x0p+0, 0)
T(RZ,               0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RZ, 0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RZ,                  0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RZ,                0x1.8p+3,               -0x1.4p+2,                0x1.ap+3,          0x0p+0, 0)
T(RZ,               0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RZ, 0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RZ,                     inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RZ,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RZ,                     inf,                     nan,                     inf,          0x0p+0, 0)
T(RZ,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RZ,                     nan,                    -inf,                     inf,          0x0p+0, 0)
T(RZ,                 -0x0p+0,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
T(RZ,              -0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
T(RZ,-0x1.ffffffffffffep-1023,                  0x0p+0, 0x1.ffffffffffffep-1023,          0x0p+0, 0)
T(RZ,                 -0x1p+0,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
T(RZ,               -0x1.8p+1,                 -0x1p+2,                0x1.4p+2,          0x0p+0, 0)
T(RZ,               -0x1.8p+4,                0x1.cp+2,                0x1.9p+4,          0x0p+0, 0)
T(RZ,              -0x1p+1023,                  0x0p+0,               0x1p+1023,          0x0p+0, 0)
T(RZ,-0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
T(RZ,                    -inf,                  0x0p+0,                     inf,          0x0p+0, 0)
T(RZ,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RZ,                    -inf,                     nan,                     inf,          0x0p+0, 0)
T(RZ,                     nan,                     inf,                     inf,          0x0p+0, 0)
T(RZ,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RZ,                  0x0p+0,                     nan,                     nan,          0x0p+0, 0)
T(RZ,               0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RZ,             0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RZ,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RZ,                     nan,              -0x1p-1074,                     nan,          0x0p+0, 0)
T(RZ,                     nan,            -0x1.8p-1073,                     nan,          0x0p+0, 0)
T(RZ,              -0x1p-1074,                     nan,                     nan,          0x0p+0, 0)
T(RZ,            -0x1.8p-1073,                     nan,                     nan,          0x0p+0, 0)
T(RZ,                     nan,                  0x0p+0,                     nan,          0x0p+0, 0)
T(RZ,                     nan,               0x1p-1074,                     nan,          0x0p+0, 0)
T(RZ,                     nan,             0x1.8p-1073,                     nan,          0x0p+0, 0)
