/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBBarSwipeAffordanceView, SBHomeGestureParticipant;


@protocol SBBarSwipeAffordanceControlling <SBHomeGestureParticipantDelegate>
@property (assign,nonatomic,__weak) id<SBBarSwipeAffordanceControllingDelegate> delegate; 
@property (nonatomic,readonly) SBBarSwipeAffordanceView * barSwipeAffordanceView; 
@property (assign,nonatomic) BOOL wantsToBeActiveAffordance; 
@property (assign,nonatomic) BOOL suppressAffordance; 
@property (nonatomic,readonly) SBHomeGestureParticipant * homeGestureParticipant; 
@property (assign,nonatomic,__weak) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate; 
@required
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setPointerClickDelegate:(id)arg1;
-(id<SBHomeGrabberPointerClickDelegate>)pointerClickDelegate;
-(void)setDelegate:(id)arg1;
-(id<SBBarSwipeAffordanceControllingDelegate>)delegate;
-(void)setWantsToBeActiveAffordance:(BOOL)arg1;
-(BOOL)wantsToBeActiveAffordance;
-(BOOL)suppressAffordance;
-(void)setSuppressAffordance:(BOOL)arg1;
-(SBBarSwipeAffordanceView *)barSwipeAffordanceView;

@end
