/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIDragInteractionDriverDelegate <NSObject>
@required
-(BOOL)dragDriver:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)dragDriver:(id)arg1 prepareToLiftWithCompletion:(/*^block*/id)arg2;
-(void)dragDriver:(id)arg1 beginDragWithTouches:(id)arg2 itemUpdater:(/*^block*/id)arg3 beginningSessionHandler:(/*^block*/id)arg4;
-(void)dragDriverCancelAddItemsGesture:(id)arg1;
-(BOOL)dragDriverWantsExclusionOverride:(id)arg1;
-(BOOL)dragDriverBeginLift:(id)arg1;
-(void)dragDriverCancelLift:(id)arg1;
-(BOOL)dragDriver:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)dragDriver:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2;
-(BOOL)dragDriver:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;

@end
