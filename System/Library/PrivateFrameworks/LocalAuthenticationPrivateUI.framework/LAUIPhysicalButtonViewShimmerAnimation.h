/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LAUIPhysicalButtonViewAnimation.h>

@class CAGradientLayer;

@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {

	CAGradientLayer* _shimmerGradient;

}
-(double)duration;
-(void)endImmediately;
-(void)beginWithDelay:(double)arg1 ;
-(BOOL)_isReducedMotionEnabled;
-(void)_beginReducedMotionAnimationWithDelay:(double)arg1 ;
-(void)_beginRegularMotionAnimationWithDelay:(double)arg1 ;
-(void)_endShimmerAnimation;
@end

