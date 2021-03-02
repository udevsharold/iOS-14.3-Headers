/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNUserNotificationSettingsServerProtocol <NSObject>
@required
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
-(void)setNotificationSystemSettings:(id)arg1;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end
