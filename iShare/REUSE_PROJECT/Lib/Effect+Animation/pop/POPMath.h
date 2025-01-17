/**
 Copyright (c) 2014-present, Facebook, Inc.
 All rights reserved.
 
 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#import "POPDefines.h"

#import "POPVector.h"

NS_INLINE CGFloat sqrtr(CGFloat f)
{
#if CGFLOAT_IS_DOUBLE
  return sqrt(f);
#else
  return sqrtf(f);
#endif
}

// round to nearest sub; pass 2.0 to round to every 0.5 (eg: retina pixels)
NS_INLINE CGFloat POPSubRound(CGFloat f, CGFloat sub)
{
  return round(f * sub) / sub;
}

#define MIX(a, b, f) ((a) + (f) * ((b) - (a)))

// the longer the duration, the higher the necessary precision
#define SOLVE_EPS(dur) (1. / (1000. * (dur)))

#define _EQLF_(x, y, epsilon) (fabsf ((x) - (y)) < epsilon)

extern void interpolate_vector(NSUInteger count, CGFloat *dst, const CGFloat *from, const CGFloat *to, double f);

extern double timing_function_solve(const double vec[4], double t, double eps);

// quadratic mapping of t [0, 1] to [start, end]
extern double quadratic_out_interpolation(double t, double start, double end);

// normalize value to [0, 1] based on its range [startValue, endValue]
extern double normalize(double value, double startValue, double endValue);

// project a normalized value [0, 1] to a given range [start, end]
extern double project_normal(double n, double start, double end);

// solve a quadratic equation of the form a * x^2 + b * x + c = 0
extern void quadratic_solve(CGFloat a, CGFloat b, CGFloat c, CGFloat &x1, CGFloat &x2);

// for a given tension return the bouncy 3 friction that produces no bounce
extern double b3_nobounce(double tension);
