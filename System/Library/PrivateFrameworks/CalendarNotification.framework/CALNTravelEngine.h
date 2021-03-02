/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNTravelEngine <NSObject>
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate; 
@required
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
-(void)setDelegate:(id)arg1;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
-(id<CALNTravelEngineDelegate>)delegate;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;

@end
