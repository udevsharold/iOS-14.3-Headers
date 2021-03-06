/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate> {

	NSString* _animationKey;
	OFPropertyAnimationLayer* _layer;
	CAPropertyAnimation* _propertyAnimation;
	NSTimer* _timer;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)interpolateValueForKey:(id)arg1 animation:(/*^block*/id)arg2 progress:(double)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)init;
-(void)_cleanup;
-(void)handleTimer:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(CGPoint)animatedPoint;
-(void)setDestinationAnimatedPoint:(CGPoint)arg1 ;
-(double)animatedFloat;
-(void)setDestinationAnimatedFloat:(double)arg1 ;
@end

