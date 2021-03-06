/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, CoreTelephonyClient, STTelephonySubscriptionContext, NSArray, RadiosPreferences, NSString;

@interface STTelephonyStateProvider : NSObject <BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, RadiosPreferencesDelegate, BSInvalidatable> {

	CTServerConnectionRef _serverConnection;
	BOOL _hasCellularTelephony;
	BOOL _cachedDualSIMEnabled;
	BOOL _cachedRadioModuleDead;
	BOOL _containsCellularRadio;
	BOOL _airplaneModeEnabled;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueryQueue;
	CoreTelephonyClient* _coreTelephonyClient;
	STTelephonySubscriptionContext* _slot1SubscriptionContext;
	STTelephonySubscriptionContext* _slot2SubscriptionContext;
	NSArray* _cachedCTContexts;
	long long _cachedSuppressesCellDataIndicator;
	long long _cachedSuppressesCellIndicators;
	long long _cachedNeedsUserIdentificationModule;
	RadiosPreferences* _radiosPreferences;
	BOOL* _telephonyDaemonRestartHandlerCanceled;

}

@property (nonatomic,readonly) NSHashTable * observers;                                                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                                               //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueryQueue;                                        //@synthesize backgroundQueryQueue=_backgroundQueryQueue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;                                              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) STTelephonySubscriptionContext * slot1SubscriptionContext;                                //@synthesize slot1SubscriptionContext=_slot1SubscriptionContext - In the implementation block
@property (nonatomic,retain) STTelephonySubscriptionContext * slot2SubscriptionContext;                                //@synthesize slot2SubscriptionContext=_slot2SubscriptionContext - In the implementation block
@property (assign,nonatomic) BOOL cachedDualSIMEnabled;                                                                //@synthesize cachedDualSIMEnabled=_cachedDualSIMEnabled - In the implementation block
@property (nonatomic,copy) NSArray * cachedCTContexts;                                                                 //@synthesize cachedCTContexts=_cachedCTContexts - In the implementation block
@property (assign,nonatomic) BOOL cachedRadioModuleDead;                                                               //@synthesize cachedRadioModuleDead=_cachedRadioModuleDead - In the implementation block
@property (nonatomic,readonly) BOOL containsCellularRadio;                                                             //@synthesize containsCellularRadio=_containsCellularRadio - In the implementation block
@property (assign,nonatomic) long long cachedSuppressesCellDataIndicator;                                              //@synthesize cachedSuppressesCellDataIndicator=_cachedSuppressesCellDataIndicator - In the implementation block
@property (nonatomic,readonly) BOOL suppressesCellDataIndicator; 
@property (assign,nonatomic) long long cachedSuppressesCellIndicators;                                                 //@synthesize cachedSuppressesCellIndicators=_cachedSuppressesCellIndicators - In the implementation block
@property (assign,nonatomic) long long cachedNeedsUserIdentificationModule;                                            //@synthesize cachedNeedsUserIdentificationModule=_cachedNeedsUserIdentificationModule - In the implementation block
@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                                                  //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,getter=isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;                                    //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL* telephonyDaemonRestartHandlerCanceled;                                              //@synthesize telephonyDaemonRestartHandlerCanceled=_telephonyDaemonRestartHandlerCanceled - In the implementation block
@property (getter=isDualSIMEnabled,nonatomic,readonly) BOOL dualSIMEnabled; 
@property (getter=isRadioModuleDead,nonatomic,readonly) BOOL radioModuleDead; 
@property (getter=isCellularRadioCapabilityActive,nonatomic,readonly) BOOL cellularRadioCapabilityActive; 
@property (nonatomic,readonly) BOOL hasCellularTelephony;                                                              //@synthesize hasCellularTelephony=_hasCellularTelephony - In the implementation block
@property (nonatomic,readonly) BOOL needsUserIdentificationModule; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDualSIMEnabled;
-(void)cellChanged:(id)arg1 cell:(id)arg2 ;
-(void)subscriptionInfoDidChange;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(BOOL)_isSIMPresentForSlot:(long long)arg1 ;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)networkReselectionNeeded:(id)arg1 ;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2 ;
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSlot2SubscriptionContext:(STTelephonySubscriptionContext *)arg1 ;
-(BOOL)hasCellularTelephony;
-(id)init;
-(BOOL)cachedRadioModuleDead;
-(void)setCachedSuppressesCellIndicators:(long long)arg1 ;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg1 forCTContext:(id)arg2 ;
-(void)_setOperatorName:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)_purgeSlot2SubscriptionState;
-(id)carrierBundleInfoForSlot:(long long)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(void)_setRegistrationStatus:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(void)airplaneModeChanged;
-(void)operatorBundleChange:(id)arg1 ;
-(BOOL)_internalQueue_isCellularRadioCapabilityActive;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isRadioModuleDead;
-(NSHashTable *)observers;
-(void)_purgeSlot1SubscriptionState;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_startFakeServiceIfNecessaryForContext:(id)arg1 ;
-(id)_backgroundQueryQueue_mobileEquipmentInfoForCTContext:(id)arg1 ;
-(void)_purgeSubscriptionState;
-(BOOL)_hasCTContextForSlot:(long long)arg1 ;
-(void)setCachedSuppressesCellDataIndicator:(long long)arg1 ;
-(void)dealloc;
-(void)_startFakeRegistrationIfNecessaryForContext:(id)arg1 ;
-(void)_updateLastKnownNetworkCountryCodeInContext:(id)arg1 withCTContext:(id)arg2 ;
-(void)setSlot1SubscriptionContext:(STTelephonySubscriptionContext *)arg1 ;
-(void)servingNetworkChanged:(id)arg1 ;
-(void)_internalQueue_notifyObserversOfMobileEquipmentInfoChangeForSlot:(long long)arg1 ;
-(long long)cachedNeedsUserIdentificationModule;
-(void)addObserver:(id)arg1 ;
-(void)_handleTelephonyDaemonRestart;
-(void)_queryRegistrationStatusForCTContext:(id)arg1 ;
-(void)_cancelFakeServiceForContext:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)needsUserIdentificationModule;
-(void)_startFakeCellularRegistrationIfNecessaryForContext:(id)arg1 ;
-(id)_backgroundQueryQueue_carrierBundleInfoForCTContext:(id)arg1 ;
-(id)_backgroundQueryQueue_SIMStatusForCTContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueryQueue;
-(void)_updateDualSIMCapabilitySendingNotification:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_stopFakeServiceForContext:(id)arg1 ;
-(void)_logSubscriptionEvent:(id)arg1 forCTContext:(id)arg2 ;
-(void)_updateState;
-(void)dualSimCapabilityDidChange;
-(void)setCachedRadioModuleDead:(BOOL)arg1 ;
-(BOOL)_internalQueue_needsUserIdentificationModule;
-(void)_updateDataConnectionType;
-(BOOL)isCellularRadioCapabilityActive;
-(void)_hideDataIndicatorChanged:(id)arg1 ;
-(void)_queryCallForwardingStateForCTContext:(id)arg1 ;
-(NSString *)description;
-(void)_setCallForwardingIndicator:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(id)_internalQueue_subscriptionContextForSlot:(long long)arg1 ;
-(void)_updateDataStatus:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)_logSubscriptionEvent:(id)arg1 forContext:(id)arg2 ;
-(void)_setCellRegistrationStatus:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(id)subscriptionInfoForSlot:(long long)arg1 ;
-(void)_updateRegistrationNowInSubscriptionContext:(id)arg1 ;
-(BOOL)containsCellularRadio;
-(id)_subscriptionContextForCTContext:(id)arg1 ;
-(void)_internalQueue_notifyObserversOfCarrierBundleInfoChangeForSlot:(long long)arg1 ;
-(long long)_subscriptionSlotForContext:(id)arg1 ;
-(id)_backgroundQueryQueue_shortSIMLabelForCTContext:(id)arg1 ;
-(BOOL)suppressesCellDataIndicator;
-(void)setCachedCTContexts:(NSArray *)arg1 ;
-(void)_setCachedCTRegistrationCellStatus:(id)arg1 displayStatus:(id)arg2 forcedHome:(BOOL)arg3 inSubscriptionContext:(id)arg4 ;
-(void)_reallySetOperatorName:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)_setSignalStrengthBars:(unsigned long long)arg1 maxBars:(unsigned long long)arg2 inSubscriptionContext:(id)arg3 ;
-(STTelephonySubscriptionContext *)slot1SubscriptionContext;
-(id)_newSubscriptionContext;
-(void)_updateCallForwardingIndicatorForContext:(id)arg1 ;
-(void)_updateDataConnectionTypeForContext:(id)arg1 ;
-(NSArray *)cachedCTContexts;
-(BOOL)cachedDualSIMEnabled;
-(void)_cancelFakeRegistrationForContext:(id)arg1 ;
-(void)_handleCellChangedForContext:(id)arg1 withCTContext:(id)arg2 ;
-(void)_setCellStatus:(id)arg1 displayStatus:(id)arg2 forcedHome:(BOOL)arg3 changeCausedBySIMRemoval:(BOOL)arg4 inSubscriptionContext:(id)arg5 withCTContext:(id)arg6 ;
-(id)_backgroundQueryQueue_subscriptionContextWithInfoNotRequiringSIMForCTContext:(id)arg1 ;
-(void)_setCarrierBundleInfo:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(id)_carrierNameForOperatorName:(id)arg1 withContext:(id)arg2 ;
-(void)setBackgroundQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setSuppressesCellDataIndicator:(long long)arg1 ;
-(BOOL)isSIMPresentForSlot:(long long)arg1 ;
-(void)setCachedNeedsUserIdentificationModule:(long long)arg1 ;
-(void)_internalQueue_notifyObserversOfSubscriptionInfoChangeForSlot:(long long)arg1 ;
-(NSString *)debugDescription;
-(void)_updateDataConnectedSubscriptionContextForCTContext:(id)arg1 ;
-(long long)cachedSuppressesCellIndicators;
-(void)_logSubscriptionEvent:(id)arg1 ;
-(void)setCachedDualSIMEnabled:(BOOL)arg1 ;
-(void)_setNetworkReselectionNeeded:(BOOL)arg1 inContext:(id)arg2 withCTContext:(id)arg3 ;
-(long long)cachedSuppressesCellDataIndicator;
-(STTelephonySubscriptionContext *)slot2SubscriptionContext;
-(void)setTelephonyDaemonRestartHandlerCanceled:(BOOL*)arg1 ;
-(id)mobileEquipmentInfoForSlot:(long long)arg1 ;
-(void)_cancelFakeCellularRegistrationForContext:(id)arg1 ;
-(void)_querySubscriptionStateForCTContext:(id)arg1 ;
-(void)_airplaneModeDidChange:(BOOL)arg1 ;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)_applyInfoNotRequiringSIMFromContext:(id)arg1 toContext:(id)arg2 ;
-(void)_serverConnectionDidError:(SCD_Struct_ST2)arg1 ;
-(void)_setSIMStatus:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)invalidate;
-(BOOL*)telephonyDaemonRestartHandlerCanceled;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(CTServerConnectionRef)_serverConnection;
-(void)_postponementStateChanged;
-(void)_setSuppressesCellIndicators:(long long)arg1 ;
-(void)_setRegistrationRejectionCauseCode:(long long)arg1 inContext:(id)arg2 ;
@end

