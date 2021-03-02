/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPUAnimationGroup.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, NSString, CAAnimation;

@interface QLPULayerAnimation : QLPUAnimationGroup <CAAnimationDelegate> {

	float _speed;
	double _timeOffset;
	double _beginTime;
	BOOL _isAnimationRunning;
	CALayer* _layer;
	NSString* _key;
	CAAnimation* __animation;

}

@property (setter=_setAnimation:,nonatomic,retain) CAAnimation * _animation;              //@synthesize _animation=__animation - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                           //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishImmediately;
-(NSString *)key;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)init;
-(void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3 ;
-(CAAnimation *)_animation;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(void)_updateLayerAnimation;
-(CALayer *)layer;
-(NSString *)description;
-(BOOL)isReadyToComplete;
-(void)_setAnimation:(id)arg1 ;
@end
