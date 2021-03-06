/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;
@class NSString;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule> {

	BOOL _active;
	BOOL _registeredForAlarms;
	id<CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
	id<CALNTimeToLeaveRefreshStorage> _storage;

}

@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshStorage> storage;                            //@synthesize storage=_storage - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (assign,getter=isRegisteredForAlarms,nonatomic) BOOL registeredForAlarms;                  //@synthesize registeredForAlarms=_registeredForAlarms - In the implementation block
@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_refreshTimerAlarmNameForEventExternalURL:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)activate;
-(void)setActive:(BOOL)arg1 ;
-(id<CALNTimeToLeaveRefreshStorage>)storage;
-(void)setRegisteredForAlarms:(BOOL)arg1 ;
-(void)deactivate;
-(void)_refreshTimerFiredForEventExternalURL:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(BOOL)isRegisteredForAlarms;
-(BOOL)isActive;
-(void)setDelegate:(id<CALNTimeToLeaveRefreshMonitorDelegate>)arg1 ;
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2 ;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1 ;
@end

