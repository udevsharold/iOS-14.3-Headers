/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter;

@interface TPSUserNotification : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}
+(id)sharedInstance;
-(id)init;
-(void)removeAllDeliveredNotifications;
-(void)remove;
-(id)notificationSettings;
-(void)showNotificationForNotificationCache:(id)arg1 attachmentURL:(id)arg2 ;
@end

