/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTSyncDataModel.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol OS_dispatch_queue, NAScheduler;
@class MTSyncServiceManager, MTAlarmStorage, NSObject, MTMetrics, NSString;

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate> {

	MTSyncServiceManager* _syncServiceManager;
	MTAlarmStorage* _alarmStorage;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<NAScheduler> _serializer;
	MTMetrics* _syncMetrics;

}

@property (nonatomic,retain) MTSyncServiceManager * syncServiceManager;              //@synthesize syncServiceManager=_syncServiceManager - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                          //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                             //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTMetrics * syncMetrics;                                //@synthesize syncMetrics=_syncMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultBlock;
-(MTMetrics *)syncMetrics;
-(void)setSyncMetrics:(MTMetrics *)arg1 ;
-(void)resetDataStore;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)printDiagnostics;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(id)gatherDiagnostics;
-(void)_performAction:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 syncServiceManagerBlock:(/*^block*/id)arg3 serializer:(id)arg4 serialQueue:(id)arg5 ;
-(id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(id)sourceIdentifier;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)stopSyncServices;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(id<NAScheduler>)serializer;
-(MTAlarmStorage *)alarmStorage;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(BOOL)isFromOtherDevice;
-(void)_performSnooze:(id)arg1 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)applyChange:(id)arg1 ;
-(void)_performDismiss:(id)arg1 ;
-(void)_setupSyncManagerWithBlock:(/*^block*/id)arg1 ;
-(MTSyncServiceManager *)syncServiceManager;
-(id)dataFileName;
-(void)setSyncServiceManager:(MTSyncServiceManager *)arg1 ;
-(void)startSyncServices;
@end

