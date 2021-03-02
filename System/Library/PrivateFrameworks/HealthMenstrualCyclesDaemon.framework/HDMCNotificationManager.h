/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDMCAnalysisManagerObserver.h>
#import <libobjc.A.dylib/HKMCSettingsManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDMCAnalysisManager, HKMCSettingsManager, NSObject, HKMCAnalysis, HDRestorableAlarm, NSString;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {

	HDProfile* _profile;
	HDMCAnalysisManager* _analysisManager;
	HKMCSettingsManager* _settingsManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _observingAnalysisUpdates;
	HKMCAnalysis* _lastAnalysis;
	HDRestorableAlarm* _scheduler;

}

@property (nonatomic,readonly) HDRestorableAlarm * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_removeAllScheduledNotifications;
-(void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2 ;
-(id)scheduledNotificationsWithError:(id*)arg1 ;
-(HDRestorableAlarm *)scheduler;
-(void)start;
-(void)settingsManagerDidUpdateNotificationSettings:(id)arg1 ;
-(id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 ;
-(void)_queue_rescheduleNotificationsForAnalysis:(id)arg1 ;
-(void)invalidate;
-(void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2 ;
@end
