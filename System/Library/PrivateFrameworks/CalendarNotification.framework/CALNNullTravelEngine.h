/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTravelEngine.h>

@protocol CALNTravelEngineDelegate;
@class NSString;

@interface CALNNullTravelEngine : NSObject <CALNTravelEngine> {

	id<CALNTravelEngineDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)setDelegate:(id<CALNTravelEngineDelegate>)arg1 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(id<CALNTravelEngineDelegate>)delegate;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
@end

