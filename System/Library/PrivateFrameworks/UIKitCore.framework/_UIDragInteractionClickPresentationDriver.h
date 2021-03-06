/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDragInteractionDriver.h>

@class NSSet, UIDelayedAction;

@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver {

	NSSet* _touches;
	/*^block*/id _itemIterator;
	/*^block*/id _sessionHandler;
	/*^block*/id _liftCompletion;
	UIDelayedAction* _delayedLift;

}
-(void)didTransitionToBeginState;
-(void)didTransitionToInflightState;
-(void)beginDragWithTouches:(id)arg1 itemIterator:(/*^block*/id)arg2 beginningSessionHandler:(/*^block*/id)arg3 ;
-(BOOL)canBeginLiftAtLocation:(CGPoint)arg1 ;
-(void)didTransitionToInactiveState;
-(BOOL)isPreparingToDrag;
-(void)cancel;
-(void)beginLiftAtLocation:(CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performDelayedLift;
-(BOOL)isLifted;
@end

