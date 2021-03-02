/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationMasterListDelegate <NCNotificationListComponentDelegate>
@required
-(void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(BOOL)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
-(void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;
-(void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(BOOL)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;
-(BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;
-(void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;

@end
