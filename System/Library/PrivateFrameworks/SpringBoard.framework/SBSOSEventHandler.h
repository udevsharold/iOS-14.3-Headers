/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOSManagerClientObserver.h>

@protocol BSInvalidatable;
@class SBFUserAuthenticationController, SBBacklightController, SBLockScreenManager, SOSManager, NSString;

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver> {

	id _coversheetObserverToken;
	id<BSInvalidatable> _disableSTARAssertion;
	BOOL _running;
	SBFUserAuthenticationController* _override_authenticationController;
	SBBacklightController* _override_backlightController;
	SBLockScreenManager* _override_lockscreenManager;
	SOSManager* _override_sosManager;

}

@property (assign,setter=_setRunning:,getter=_isRunning,nonatomic) BOOL running;                                                         //@synthesize running=_running - In the implementation block
@property (getter=_authenticationController,nonatomic,readonly) SBFUserAuthenticationController * authenticationController;              //@synthesize override_authenticationController=_override_authenticationController - In the implementation block
@property (getter=_backlightController,nonatomic,readonly) SBBacklightController * backlightController;                                  //@synthesize override_backlightController=_override_backlightController - In the implementation block
@property (getter=_sosManager,nonatomic,readonly) SOSManager * sosManager;                                                               //@synthesize override_sosManager=_override_sosManager - In the implementation block
@property (getter=_lockScreenManager,nonatomic,readonly) SBLockScreenManager * lockScreenManager;                                        //@synthesize override_lockscreenManager=_override_lockscreenManager - In the implementation block
@property (getter=isSOSActive,nonatomic,readonly) BOOL SOSActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)didDismissSOSBeforeSOSCall:(long long)arg1 ;
-(void)run;
-(id)_sosManager;
-(id)init;
-(id)_backlightController;
-(void)dealloc;
-(BOOL)_isRunning;
-(void)_setRunning:(BOOL)arg1 ;
-(void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg1 showingPasscode:(BOOL)arg2 ;
-(void)didUpdateCurrentSOSInitiationState:(long long)arg1 ;
-(id)_authenticationController;
-(BOOL)isSOSActive;
-(id)_lockScreenManager;
@end
