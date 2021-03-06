/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTNotificationCenter.h>

@class NSDictionary, MTUserNotificationActionDispatcher, NSString;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter> {

	NSDictionary* _notificationCenters;
	MTUserNotificationActionDispatcher* _actionHandler;

}

@property (nonatomic,retain) NSDictionary * notificationCenters;                              //@synthesize notificationCenters=_notificationCenters - In the implementation block
@property (nonatomic,retain) MTUserNotificationActionDispatcher * actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timeFormatter;
+(void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(id)notificationPrefixes;
+(id)launchURLForScheme:(id)arg1 ;
+(id)userInfoForTimer:(id)arg1 ;
+(id)categoryForScheduledTimer:(id)arg1 ;
+(id)requestIdentifierForScheduledAlarm:(id)arg1 ;
+(id)contentForScheduledTimer:(id)arg1 ;
+(void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(id)categoryForScheduledAlarm:(id)arg1 ;
+(id)_snoozeCountdownIdentifier:(id)arg1 ;
+(id)_durationComponentsFormatter;
+(void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2 ;
+(id)_wakeUpAlarmStringForAlarm:(id)arg1 ;
+(id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1 ;
+(id)contentForScheduledAlarm:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
+(id)_allIdentifiersForAlarm:(id)arg1 ;
+(id)userInfoForAlarm:(id)arg1 ;
+(id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
+(id)_goToBedIdentifier:(id)arg1 ;
+(void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2 ;
+(void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2 ;
-(void)tearDownNotificationsForEventIdentifiers:(id)arg1 ;
-(id)_notificationCenterForScheduledTimer;
-(id)init;
-(NSDictionary *)notificationCenters;
-(void)removeAllDeliveredNotifications;
-(void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3 ;
-(void)dismissNotificationsWithIdentifiers:(id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)bedtimeCategories;
-(void)setActionHandler:(MTUserNotificationActionDispatcher *)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 ;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1 ;
-(MTUserNotificationActionDispatcher *)actionHandler;
-(id)timerCategories;
-(void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 ;
-(id)notificationCategories;
-(void)dismissNotificationsForTimer:(id)arg1 ;
-(void)interruptAudioAndLockDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)registerActionHandler:(id)arg1 ;
-(void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2 ;
-(id)alarmCategories;
-(void)dismissNotificationsForAlarm:(id)arg1 ;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_notificationCenterForScheduledAlarm:(id)arg1 ;
-(void)setupNotificationCenter;
-(void)setNotificationCenters:(NSDictionary *)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2 ;
@end

