/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>

@protocol OS_dispatch_source;
@class NSDate, NSObject;

@interface SFChargingUICoordinator : SFXPCClient {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _animationSPIAdopted;
	BOOL _runningAsCarry;
	NSDate* _uiUpdateMaxDate;
	NSDate* _uiUpdateRequestDate;
	/*^block*/id _uiUpdateHandler;
	BOOL _uiUpdateMinTimeElapsed;
	BOOL _uiUpdateShouldDismiss;
	NSObject*<OS_dispatch_source> _uiUpdateTimer;
	long long _defaultDuration;

}

@property (assign,nonatomic) long long defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
-(void)_activate;
-(long long)defaultDuration;
-(BOOL)shouldEscapeXpcTryCatch;
-(id)remoteObjectInterface;
-(void)activate;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInvalidated;
-(id)exportedInterface;
-(void)onqueue_connectionInterrupted;
-(id)machServiceName;
-(void)requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_requestToStartAnimationAtDate:(id)arg1 ;
-(void)_initialViewControllerDidAppear;
-(void)_invalidate;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)_timingInvalidateMinTimer;
-(void)_timingRestartMinTimer;
-(void)initialViewControllerDidAppear;
-(void)initialViewControllerDidDisappear;
-(void)setDefaultDuration:(long long)arg1 ;
-(void)_requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_dismissUI;
-(void)_sendDismissUIWithReason:(long long)arg1 ;
-(void)invalidate;
-(void)requestToShowUIWithHandler:(/*^block*/id)arg1 ;
-(void)requestToStartAnimationAtDate:(id)arg1 ;
-(void)_initialViewControllerDidDisappear;
@end

