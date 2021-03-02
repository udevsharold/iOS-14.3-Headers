/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {

	BSCFBundle* _bundle;
	UNSNotificationCategoryRepository* _categoryRepository;

}
-(id)initWithBundle:(id)arg1 categoryRepository:(id)arg2 ;
-(id)_notificationIconForNotificationRecord:(id)arg1 ;
-(id)_notificationTriggerForNotificationRecord:(id)arg1 ;
-(id)_notificationContentForNotificationRecord:(id)arg1 ;
-(id)notificationRequestForNotificationRecord:(id)arg1 ;
-(id)_notificationSoundForNotificationRecord:(id)arg1 ;
-(id)notificationForNotificationRecord:(id)arg1 ;
@end
