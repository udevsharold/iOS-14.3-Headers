/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNSuggestedEventNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider;
@class NSString;

@interface CALNSuggestedEventNotificationEKDataSource : NSObject <CALNSuggestedEventNotificationDataSource> {

	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNInboxNotificationProvider> _inboxNotificationProvider;
	id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNInboxNotificationProvider> inboxNotificationProvider;                                //@synthesize inboxNotificationProvider=_inboxNotificationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;              //@synthesize notificationReferenceProvider=_notificationReferenceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clearSuggestedEventNotificationWithObjectID:(id)arg1 ;
-(void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)arg1 accept:(BOOL)arg2 ;
-(id)_eventForSourceClientIdentifier:(id)arg1 eventStore:(id)arg2 ;
-(id)fetchSuggestedEventNotifications;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1 ;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 ;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2 ;
@end
