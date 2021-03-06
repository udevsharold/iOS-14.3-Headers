/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAlarmServer.h>

@protocol MTAlarmServer <MTXPCServer>
@required
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)resetSleepAlarmSnoozeStateWithCompletion:(/*^block*/id)arg1;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)updateSleepAlarmsWithCompletion:(/*^block*/id)arg1;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)nextSleepAlarmWithCompletion:(/*^block*/id)arg1;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;

@end

#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol NAScheduler;
@class MTAlarmStorage, MTXPCConnectionListenerProvider, NSString;

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate> {

	BOOL _systemReady;
	MTAlarmStorage* _storage;
	MTXPCConnectionListenerProvider* _connectionListenerProvider;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTAlarmStorage * storage;                                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) MTXPCConnectionListenerProvider * connectionListenerProvider;              //@synthesize connectionListenerProvider=_connectionListenerProvider - In the implementation block
@property (getter=isSystemReady,nonatomic,readonly) BOOL systemReady;                                     //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                                  //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_notifyClientsForTriggerType:(unsigned long long)arg1 ;
-(MTXPCConnectionListenerProvider *)connectionListenerProvider;
-(void)printDiagnostics;
-(void)handleSystemReady;
-(void)stopListening;
-(id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2 ;
-(id)_systemNotReadyError;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)checkIn;
-(void)getAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isSystemReady;
-(void)startListening;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmStorage *)storage;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)resetSleepAlarmSnoozeStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSystemReady;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)addAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(id<NAScheduler>)serializer;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(id)initWithStorage:(id)arg1 ;
-(void)updateAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)updateSleepAlarmsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)nextSleepAlarmWithCompletion:(/*^block*/id)arg1 ;
-(void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

