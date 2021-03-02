/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/DNDSettingsUpdateListener.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDModeAssertionService, DNDStateService, DNDSettingsService, NSDate, DNDState, DNDBehaviorSettings, DNDBypassSettings, UNUserNotificationCenter, NSString;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDModeAssertionService* _notificationsAssertionService;
	DNDStateService* _notificationsStateService;
	DNDSettingsService* _notificationsSettingsService;
	BOOL _doNotDisturbActive;
	BOOL _basicActive;
	BOOL _sleepActive;
	BOOL _windDownActive;
	BOOL _clockBedtimeActive;
	BOOL _settingsBedtimeActive;
	BOOL _drivingActive;
	BOOL _workoutActive;
	NSDate* _transitionDate;
	unsigned long long _transitionLifetimeType;
	DNDState* _currentState;
	DNDBehaviorSettings* _currentBehaviorSettings;
	DNDBypassSettings* _currentPhoneCallBypassSettings;
	UNUserNotificationCenter* _notificationsCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2 ;
-(void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(BOOL)arg1 significantTimeChange:(BOOL)arg2 ;
@end
