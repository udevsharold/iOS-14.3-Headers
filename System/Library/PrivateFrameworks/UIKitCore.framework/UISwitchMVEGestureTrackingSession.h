/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISwitchMVEGestureTrackingSessionElement;
@class UIView, UIGestureRecognizer;

@interface UISwitchMVEGestureTrackingSession : NSObject {

	BOOL _displayedOnValue;
	BOOL _pendingDisplayedOnValue;
	BOOL _lastCommitedOnValue;
	UIView*<UISwitchMVEGestureTrackingSessionElement> _visualElement;
	double _naturalLayoutDirection;
	double _movementVectorForPanInitiatedChangeY;
	double _movementVectorForPanInitiatedChangeTargetOnValue;
	UIGestureRecognizer* _pendingDisplayedOnValueInitiatingGesture;

}

@property (nonatomic,readonly) double naturalLayoutDirection;                                                     //@synthesize naturalLayoutDirection=_naturalLayoutDirection - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeY;                                       //@synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeTargetOnValue;                           //@synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * pendingDisplayedOnValueInitiatingGesture;                    //@synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture - In the implementation block
@property (nonatomic,readonly) BOOL pendingDisplayedOnValue;                                                      //@synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue - In the implementation block
@property (nonatomic,readonly) BOOL lastCommitedOnValue;                                                          //@synthesize lastCommitedOnValue=_lastCommitedOnValue - In the implementation block
@property (assign,nonatomic,__weak) UIView*<UISwitchMVEGestureTrackingSessionElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,nonatomic) BOOL displayedOnValue;                                                               //@synthesize displayedOnValue=_displayedOnValue - In the implementation block
+(BOOL)gestureIsInEndState:(long long)arg1 ;
-(BOOL)pendingDisplayedOnValueIsValid;
-(void)_applyPendingChangesIfNecessary;
-(void)applyPendingDisplayedOnValueWithoutSendingActions;
-(BOOL)pendingDisplayedOnValue;
-(BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2 ;
-(UIView*<UISwitchMVEGestureTrackingSessionElement>)visualElement;
-(void)invalidatePendingOnValue;
-(void)reset;
-(id)initWithVisualElement:(id)arg1 ;
-(UIGestureRecognizer *)pendingDisplayedOnValueInitiatingGesture;
-(double)movementVectorForPanInitiatedChangeTargetOnValue;
-(BOOL)lastCommitedOnValue;
-(double)naturalLayoutDirection;
-(BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1 ;
-(BOOL)displayedOnValue;
-(BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1 ;
-(void)setDisplayedOnValue:(BOOL)arg1 ;
-(void)_sendStateChangeActionsIfNecessary;
-(void)_updateMovementVectorForPanInitiatedChanges;
-(void)setPendingDisplayedOnValue:(BOOL)arg1 forGesture:(id)arg2 ;
-(void)setVisualElement:(UIView*<UISwitchMVEGestureTrackingSessionElement>)arg1 ;
-(BOOL)canApplyPendingOnValueForGesture:(id)arg1 ;
-(void)applyPendingDisplayedOnValueAndSendActions;
-(double)movementVectorForPanInitiatedChangeY;
@end

