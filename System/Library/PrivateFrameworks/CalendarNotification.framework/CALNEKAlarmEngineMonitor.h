/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNAlarmEngineMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule> {

	BOOL _active;
	NSNotificationCenter* _notificationCenter;
	_EKAlarmEngine* _alarmEngine;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) _EKAlarmEngine * alarmEngine;                           //@synthesize alarmEngine=_alarmEngine - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_EKAlarmEngine *)alarmEngine;
-(void)didRegisterForAlarms;
-(NSNotificationCenter *)notificationCenter;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)activate;
-(void)setActive:(BOOL)arg1 ;
-(void)removeAlarmsFiredObserver:(id)arg1 ;
-(id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2 ;
-(void)deactivate;
-(void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isActive;
@end

