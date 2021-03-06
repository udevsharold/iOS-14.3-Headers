/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log;
@class EKEventStore, NSObject, NSString;

@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor> {

	EKEventStore* _calendar;
	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) EKEventStore * calendar;                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                               //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(unsigned long long)signalID;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)upcomingEvents;
-(id)requiredFullChargeDate;
-(id)nextRelevantCalendarEventWithEvents:(id)arg1 ;
-(EKEventStore *)calendar;
-(void)setCalendar:(EKEventStore *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)startMonitoring;
-(id)nextFlightEventWithEvents:(id)arg1 ;
-(void)stopMonitoring;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id<PowerUISignalMonitorDelegate>)delegate;
@end

