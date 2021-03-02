/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSPSleepAlarmProvider.h>

@class NSArray, NAFuture, MTAlarmManager, NSString;

@interface HDSPMobileTimerBridge : NSObject <HDSPSleepAlarmProvider> {

	NAFuture* _alarmServerReady;
	MTAlarmManager* _alarmManager;

}

@property (nonatomic,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,readonly) NAFuture * alarmServerReady;                //@synthesize alarmServerReady=_alarmServerReady - In the implementation block
@property (nonatomic,readonly) NSArray * sleepAlarms; 
@property (nonatomic,readonly) NAFuture * sleepAlarmsFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)sleepAlarm:(id)arg1 matchesSleepScheduleModel:(id)arg2 ;
+(id)sleepScheduleModelFromSleepAlarm:(id)arg1 ;
-(NSArray *)sleepAlarms;
-(id)initWithAlarmManager:(id)arg1 ;
-(MTAlarmManager *)alarmManager;
-(void)resetSleepAlarmSnoozeState;
-(id)init;
-(id)sleepAlarmsIgnoringCache:(BOOL)arg1 ;
-(NAFuture *)alarmServerReady;
-(NAFuture *)sleepAlarmsFuture;
-(void)_checkAlarmServer;
-(void)_alarmServerReady;
-(void)updateSleepAlarms;
@end
