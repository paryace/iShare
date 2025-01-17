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

#import "POPAnimationTracer.h"

@interface POPAnimationTracer (Internal)

/**
 @abstract Designated initalizer. Pass the animation being traced.
 */
- (instancetype)initWithAnimation:(POPAnimation *)anAnim;

/**
 @abstract Records read value.
 */
- (void)readPropertyValue:(id)aValue;

/**
 @abstract Records write value.
 */
- (void)writePropertyValue:(id)aValue;

/**
 Records to value update.
 */
- (void)updateToValue:(id)aValue;

/**
 @abstract Records from value update.
 */
- (void)updateFromValue:(id)aValue;

/**
 @abstract Records from value update.
 */
- (void)updateVelocity:(id)aValue;

/**
 @abstract Records bounciness update.
 */
- (void)updateBounciness:(float)aFloat;

/**
 @abstract Records speed update.
 */
- (void)updateSpeed:(float)aFloat;

/**
 @abstract Records friction update.
 */
- (void)updateFriction:(float)aFloat;

/**
 @abstract Records mass update.
 */
- (void)updateMass:(float)aFloat;

/**
 @abstract Records tension update.
 */
- (void)updateTension:(float)aFloat;

/**
 @abstract Records did add.
 */
- (void)didAdd;

/**
 @abstract Records did start.
 */
- (void)didStart;

/**
 @abstract Records did stop.
 */
- (void)didStop:(BOOL)finished;

/**
 @abstract Records did reach to value.
 */
- (void)didReachToValue:(id)aValue;

@end
