/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicItemBehavior.h>

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {

	BOOL _enabled;
	double _completionHandlerInvocationDelay;
	/*^block*/id _completionHandler;
	long long _frameCount;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long frameCount;                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) CGVector targetVelocity;                              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) double completionHandlerInvocationDelay;              //@synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setFrameCount:(long long)arg1 ;
-(long long)frameCount;
-(BOOL)enabled;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(double)completionHandlerInvocationDelay;
-(void)setCompletionHandlerInvocationDelay:(double)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(void)cancel;
-(CGVector)targetVelocity;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
@end

