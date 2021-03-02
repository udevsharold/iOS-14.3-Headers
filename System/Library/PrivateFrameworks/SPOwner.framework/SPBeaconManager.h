/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPMonitorsWrapperDelegate.h>
#import <SPOwner/SPBLEStateMonitorDelegate.h>

@protocol SPBeaconManagerXPCProtocol, OS_dispatch_queue, OS_dispatch_source;
@class FMXPCServiceDescription, FMXPCSession, NSObject, FMXPCTimer, SPMonitorsWrapper, SPBLEStateMonitor, NSString;

@interface SPBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate> {

	BOOL _currentBeaconingState;
	BOOL _forceBeaconingOff;
	unsigned char _currentStatus;
	BOOL _initialStateChangeSent;
	/*^block*/id _stateChangedBlock;
	/*^block*/id _stateChangedBlockWithCompletion;
	/*^block*/id _statusChangedBlock;
	/*^block*/id _statusChangedBlockWithCompletion;
	/*^block*/id _beaconingKeyChangedBlock;
	/*^block*/id _beaconingKeyChangedBlockWithCompletion;
	/*^block*/id _nearbyTokensChangedBlock;
	/*^block*/id _nearbyTokensChangedBlockWithCompletion;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;
	NSObject*<OS_dispatch_queue> _queue;
	FMXPCTimer* _periodicActionXpcTimer;
	NSObject*<OS_dispatch_source> _periodicActionDispatchTimer;
	SPMonitorsWrapper* _monitorWrapper;
	SPBLEStateMonitor* _bleMonitor;
	long long _cachedLocalBeaconManagerState;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                           //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                                   //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;                          //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FMXPCTimer * periodicActionXpcTimer;                                    //@synthesize periodicActionXpcTimer=_periodicActionXpcTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicActionDispatchTimer;              //@synthesize periodicActionDispatchTimer=_periodicActionDispatchTimer - In the implementation block
@property (nonatomic,retain) SPMonitorsWrapper * monitorWrapper;                                     //@synthesize monitorWrapper=_monitorWrapper - In the implementation block
@property (nonatomic,retain) SPBLEStateMonitor * bleMonitor;                                         //@synthesize bleMonitor=_bleMonitor - In the implementation block
@property (assign,nonatomic) BOOL currentBeaconingState;                                             //@synthesize currentBeaconingState=_currentBeaconingState - In the implementation block
@property (assign,nonatomic) BOOL forceBeaconingOff;                                                 //@synthesize forceBeaconingOff=_forceBeaconingOff - In the implementation block
@property (assign,nonatomic) unsigned char currentStatus;                                            //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) long long cachedLocalBeaconManagerState;                                //@synthesize cachedLocalBeaconManagerState=_cachedLocalBeaconManagerState - In the implementation block
@property (assign,nonatomic) BOOL initialStateChangeSent;                                            //@synthesize initialStateChangeSent=_initialStateChangeSent - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                                     //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,copy) id stateChangedBlockWithCompletion;                                       //@synthesize stateChangedBlockWithCompletion=_stateChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id statusChangedBlock;                                                    //@synthesize statusChangedBlock=_statusChangedBlock - In the implementation block
@property (nonatomic,copy) id statusChangedBlockWithCompletion;                                      //@synthesize statusChangedBlockWithCompletion=_statusChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id beaconingKeyChangedBlock;                                              //@synthesize beaconingKeyChangedBlock=_beaconingKeyChangedBlock - In the implementation block
@property (nonatomic,copy) id beaconingKeyChangedBlockWithCompletion;                                //@synthesize beaconingKeyChangedBlockWithCompletion=_beaconingKeyChangedBlockWithCompletion - In the implementation block
@property (nonatomic,copy) id nearbyTokensChangedBlock;                                              //@synthesize nearbyTokensChangedBlock=_nearbyTokensChangedBlock - In the implementation block
@property (nonatomic,copy) id nearbyTokensChangedBlockWithCompletion;                                //@synthesize nearbyTokensChangedBlockWithCompletion=_nearbyTokensChangedBlockWithCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduleDateInterval:(id)arg1 ;
+(void)afterFirstUnlock:(/*^block*/id)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)beaconingStateChanged:(long long)arg1 ;
-(void)checkInPeriodicActionXpcTimer;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(id)statusChangedBlockWithCompletion;
-(void)connectionTokensForBeaconUUID:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unacceptedBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setRole:(long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)timerFired;
-(void)setPeriodicActionXpcTimerWithDateInterval:(id)arg1 ;
-(void)setNearbyTokensChangedBlockWithCompletion:(id)arg1 ;
-(void)setCachedLocalBeaconManagerState:(long long)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(void)allBeaconsOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)postedLocalNotifyWhenFoundNotificationForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)allBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(id)nearbyTokensChangedBlock;
-(void)connectionTokensForBeaconUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)initialStateChangeSent;
-(id)nearbyTokensChangedBlockWithCompletion;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id)stateChangedBlock;
-(void)updateBeacon:(id)arg1 updates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stateDidChange:(BOOL)arg1 powerState:(unsigned long long)arg2 ;
-(void)createKeyReconcilerWithCompletion:(/*^block*/id)arg1 ;
-(void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)setCurrentBeaconingState:(BOOL)arg1 ;
-(FMXPCTimer *)periodicActionXpcTimer;
-(BOOL)isBeaconing;
-(void)setStatusChangedBlockWithCompletion:(id)arg1 ;
-(void)_invalidate;
-(void)connectedToBeacon:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)statusChangedBlock;
-(void)notifyStateChange:(BOOL)arg1 ;
-(void)connectedToBeacon:(id)arg1 withIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setKeyRollInterval:(unsigned long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)bleMonitor:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(SPMonitorsWrapper *)monitorWrapper;
-(void)setBeaconingKeyChangedBlockWithCompletion:(id)arg1 ;
-(id)remoteInterface;
-(void)allDuriansWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentStatus:(unsigned char)arg1 ;
-(void)setStateChangedBlockWithCompletion:(id)arg1 ;
-(void)setStatusChangedBlock:(id)arg1 ;
-(void)notifyStatusChange:(unsigned char)arg1 ;
-(BOOL)forceBeaconingOff;
-(void)fetchFirmwareVersionForBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlignmentUncertainty:(double)arg1 atIndex:(unsigned long long)arg2 date:(id)arg3 forBeacon:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPeriodicActionXpcTimer:(FMXPCTimer *)arg1 ;
-(BOOL)currentBeaconingState;
-(void)roleCategoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)setPeriodicActionDispatchTimerWithInterval:(double)arg1 ;
-(long long)cachedLocalBeaconManagerState;
-(void)beaconsChanged:(id)arg1 ;
-(void)setBleMonitor:(SPBLEStateMonitor *)arg1 ;
-(void)setInitialStateChangeSent:(BOOL)arg1 ;
-(void)start;
-(id)stateChangedBlockWithCompletion;
-(void)fetchKeyMapFileDescriptorForBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beaconingKeyChangedBlock;
-(void)setNearbyTokensChangedBlock:(id)arg1 ;
-(void)setCurrentWildKeyIndex:(long long)arg1 forBeacon:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicActionDispatchTimer;
-(void)notifyBeaconingKeysChangedBlockWithCompletion:(/*^block*/id)arg1 ;
-(unsigned char)currentStatus;
-(id)beaconingKeyChangedBlockWithCompletion;
-(SPBLEStateMonitor *)bleMonitor;
-(void)setForceBeaconingOff:(BOOL)arg1 ;
-(void)setWildKeyBase:(unsigned long long)arg1 interval:(unsigned long long)arg2 fallback:(unsigned long long)arg3 forBeacon:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPeriodicActionDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)allBeaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 forceGenerate:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)connectionTokensForBeaconUUID:(id)arg1 criteria:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)setBeaconingKeyChangedBlock:(id)arg1 ;
-(void)beaconingStateChangedNotification:(id)arg1 ;
-(void)periodicActionWithCompletion:(/*^block*/id)arg1 ;
-(void)repairDataStore:(/*^block*/id)arg1 ;
-(void)setMonitorWrapper:(SPMonitorsWrapper *)arg1 ;
-(void)notificationBeaconForSubscriptionId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyNearbyTokensChangedBlockWithCompletion:(/*^block*/id)arg1 ;
@end
