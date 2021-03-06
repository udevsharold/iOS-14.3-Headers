/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ICMPPingProbeDelegate.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NoBackhaulHandlerState, NSArray, NetworkAnalyticsStateRelay, CellFallbackHandler, PowerStateRelay, NSString, NSMutableDictionary, AnalyticsWorkspace, ImpoExpoService, NSObject, AWDAgent, CARAutomaticDNDStatus;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ICMPPingProbeDelegate, ManagedEventInfoProtocol> {

	unsigned _administrativeState;
	NSMutableArray* _pendingEventDescriptions;
	NoBackhaulHandlerState* _currentState;
	NSArray* _states;
	NetworkAnalyticsStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	CellFallbackHandler* _rnfRelay;
	PowerStateRelay* _powerRelay;
	NSMutableArray* _tcpProgressProbes;
	NSString* _clearSSID;
	NSString* _obscuredSSID;
	NSMutableDictionary* _history;
	NSMutableDictionary* _multiplier;
	AnalyticsWorkspace* _workspace;
	ImpoExpoService* _ieService;
	NSObject*<OS_dispatch_source> maintenanceTimer;
	AWDAgent* _awdAgent;
	BOOL _observingSystemSettingsRelay;
	id _foregroundObserver;
	id _wifiEpochObserver;
	id _relayReadyObserver;
	unsigned long long networkBlacklistTime;
	unsigned long long defRoutePacketsIn;
	id _foregroundAppObserver;
	BOOL _verifyDefaultGateway;
	NSMutableDictionary* _activeICMPProbes;
	NSMutableDictionary* _icmpProbeStates;
	long long _pingCount;
	long long _pingSuccessCount;
	double _interPingInterval;
	long long _pingBurstCount;
	double _interBurstInterval;
	double _pingTimeout;
	CARAutomaticDNDStatus* _automaticDNDStatus;
	unsigned long long _cellUsageAtBrokenEntry;
	unsigned long long _totalCellUsageInBroken;
	BOOL _systemForeground;
	BOOL _callInForeground;
	BOOL _dndWhileDriving;
	unsigned _activationIdentifier;
	unsigned long long _stepper;

}

@property (assign,nonatomic) BOOL systemForeground;                      //@synthesize systemForeground=_systemForeground - In the implementation block
@property (assign,nonatomic) BOOL callInForeground;                      //@synthesize callInForeground=_callInForeground - In the implementation block
@property (assign,nonatomic) BOOL dndWhileDriving;                       //@synthesize dndWhileDriving=_dndWhileDriving - In the implementation block
@property (assign,nonatomic) unsigned activationIdentifier;              //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long stepper;                 //@synthesize stepper=_stepper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)internalStateDictionary;
+(id)sharedInstance;
+(long long)_nwInterfaceTypeFromAPSDQualifier:(unsigned long long)arg1 ;
+(id)configureClass:(id)arg1 ;
-(BOOL)idleEntryAction:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)internalStateDictionary;
-(BOOL)idleExitAction:(id)arg1 ;
-(BOOL)positiveExitAction:(id)arg1 ;
-(unsigned)activationIdentifier;
-(void)_administrativeDisable;
-(BOOL)dndWhileDriving;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setStepper:(unsigned long long)arg1 ;
-(void)changedSSIDto:(id)arg1 ;
-(id)init;
-(void)setDndWhileDriving:(BOOL)arg1 ;
-(void)_updateSSID:(id)arg1 ;
-(void)clientFeedback:(BOOL)arg1 ;
-(void)_postUpwards:(unsigned long long)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(unsigned long long)stepper;
-(void)setActivationIdentifier:(unsigned)arg1 ;
-(id)_states;
-(void)_dumpState;
-(void)dealloc;
-(id)_currentState;
-(void)_bringStateToIdle;
-(void)_idempotentInitializationFromIdle;
-(void)_fetchDampeningHistory;
-(void)_completeInitialization;
-(BOOL)brokenExitAction:(id)arg1 ;
-(void)_setObscuredSSID:(id)arg1 ;
-(void)apsdFailing:(BOOL)arg1 onInterface:(long long)arg2 ;
-(void)_stopMaintenanceTimer;
-(BOOL)processSymptom:(id)arg1 ;
-(void)_idempotentInitializationFromIdleWithCellRelay:(id)arg1 wifiRelay:(id)arg2 rnfRelay:(id)arg3 powerRelay:(id)arg4 ;
-(void)_administrativeEnable;
-(BOOL)callInForeground;
-(void)_setClearSSID:(id)arg1 ;
-(void)resumedDefRouteProgress;
-(BOOL)_nudgeState;
-(id)initTestInstanceWithCellRelay:(id)arg1 wifiRelay:(id)arg2 rnfRelay:(id)arg3 powerRelay:(id)arg4 ;
-(BOOL)brokenEntryAction:(id)arg1 ;
-(void)_captureProgressFor:(id)arg1 since:(id)arg2 interval:(unsigned long long)arg3 capWindowTo:(unsigned long long)arg4 iteration:(unsigned long long)arg5 renewTest:(/*^block*/id)arg6 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addPendingEventDescription:(id)arg1 ;
-(BOOL)positiveEntryAction:(id)arg1 ;
-(void)dampeningReset;
-(void)reportAutoBugCaptureCaseWithDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 subtypeContext:(id)arg4 events:(id)arg5 ;
-(void)drainPendingEventDescriptions;
-(BOOL)activeExitAction:(id)arg1 ;
-(void)setCallInForeground:(BOOL)arg1 ;
-(void)_assessProgressFromBaseline:(xtcpprogress_indicators*)arg1 toMetrics:(xtcpprogress_indicators*)arg2 ;
-(void)dampeningSetPrecedent;
-(void)setSystemForeground:(BOOL)arg1 ;
-(BOOL)subscribeCarKitNotifications;
-(BOOL)dampeningCheck;
-(void)_performConnectivityTestToDefaultGateways:(id)arg1 ;
-(void)_startMaintenanceTimerFor:(id)arg1 delay:(unsigned long long)arg2 interval:(unsigned long long)arg3 capWindowTo:(unsigned long long)arg4 ;
-(BOOL)activeEntryAction:(id)arg1 ;
-(BOOL)systemForeground;
@end

