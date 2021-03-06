/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol OS_dispatch_queue, EFCancelable;
@class NSObject, NSCountedSet, EFObservable, NSString;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerQueue;
	int _pluggedIn;
	int _powerToken;
	int _batteryNotificationToken;
	NSCountedSet* _identifiers;
	id<EFCancelable> _appStateCancelable;
	BOOL _isForeground;
	float _batteryLevel;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;

}

@property (nonatomic,readonly) EFObservable * pluggedInObservable; 
@property (nonatomic,readonly) EFObservable * lowPowerModeObservable; 
@property (nonatomic,readonly) EFObservable * batteryLevelObservable; 
@property (nonatomic,readonly) float batteryLevel;                                               //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled; 
@property (getter=isHoldingAssertion,readonly) BOOL holdingAssertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)powerlog:(id)arg1 eventData:(id)arg2 ;
+(id)sharedInstance;
-(float)batteryLevel;
-(BOOL)isPluggedIn;
-(id)init;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_registerForBatteryLevelChanges;
-(void)_applicationForegroundStateChanged:(BOOL)arg1 ;
-(void)_unregisterForBatteryLevelChanges;
-(void)_releasePowerAssertion_nts;
-(void)_retainPowerAssertion_nts;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(double)_assertionTimeout;
-(void)_setupAssertionTimer:(double)arg1 ;
-(void)_retainTaskAssertion_nts;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(void)_releaseTaskAssertion_nts;
-(void)_applicationForegroundStateChanged_nts:(BOOL)arg1 ;
-(id)powerObservable;
-(id)batteryLevelStateChangeNotificationObservable;
-(void)_batteryInformationChanged;
-(BOOL)isHoldingAssertion;
-(BOOL)_isHoldingTaskAssertion;
-(void)startListeningForBatterySaverNotifications;
-(void)dealloc;
-(void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2 ;
-(EFObservable *)lowPowerModeObservable;
-(EFObservable *)pluggedInObservable;
-(EFObservable *)batteryLevelObservable;
-(BOOL)isBatterySaverModeEnabled;
-(id)copyDiagnosticInformation;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
@end

