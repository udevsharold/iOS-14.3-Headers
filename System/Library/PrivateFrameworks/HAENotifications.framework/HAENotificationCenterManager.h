/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NotificationCenter, NSObject;

@interface HAENotificationCenterManager : NSObject {

	NotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _eventQueue;
	double _liveThresholdInDBA;
	NSObject*<OS_dispatch_semaphore> _sem;

}
+(id)sharedInstance;
-(id)init;
-(id)addHAENotificationEvent:(id)arg1 ;
-(id)sendBannerNotificationWithEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
-(void)donateSignalToTipsKit:(id)arg1 ;
-(id)sendLiveExposureEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
-(id)sendWeeklyExposureEvent:(id)arg1 volumeLoweringAction:(unsigned)arg2 ;
@end
