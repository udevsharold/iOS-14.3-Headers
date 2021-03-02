/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBIdleTimer, SBFIdleTimerBehaviorProviding, BSInvalidatable, SBDashBoardIdleTimerProviderDelegate;
@class NSMutableSet, NSString;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding> {

	id<SBIdleTimer> _idleTimer;
	id<SBFIdleTimerBehaviorProviding> _idleTimerProvider;
	id<BSInvalidatable> _stateCaptureAssertion;
	NSMutableSet* _disabledIdleTimerAssertions;
	id<SBDashBoardIdleTimerProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDashBoardIdleTimerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBIdleTimer> idleTimer;                                             //@synthesize idleTimer=_idleTimer - In the implementation block
@property (getter=isIdleTimerEnabled,nonatomic,readonly) BOOL idleTimerEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBIdleTimer>)idleTimer;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(BOOL)isIdleTimerEnabled;
-(void)addDisabledIdleTimerAssertionReason:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1 ;
-(void)dealloc;
-(void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIdleTimer:(id<SBIdleTimer>)arg1 ;
-(void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)resetIdleTimer;
-(void)removeDisabledIdleTimerAssertionReason:(id)arg1 ;
-(void)setDelegate:(id<SBDashBoardIdleTimerProviderDelegate>)arg1 ;
-(BOOL)isDisabledAssertionActiveForReason:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(id)effectiveIdleTimerBehavior;
-(id<SBDashBoardIdleTimerProviderDelegate>)delegate;
@end
