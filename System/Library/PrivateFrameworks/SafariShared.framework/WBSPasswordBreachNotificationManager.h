/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter;

@interface WBSPasswordBreachNotificationManager : NSObject {

	UNUserNotificationCenter* _notificationCenter;

}
-(id)init;
-(void)addBreachNotificationForSavedPasswords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_contentWithSavedPasswords:(id)arg1 ;
-(id)_titleForSavedPasswords:(id)arg1 ;
-(id)_bodyForSavedPasswords:(id)arg1 ;
@end

