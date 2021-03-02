/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNEventInvitationNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CalDateProvider;
@class NSString, NSArray;

@interface CALNEventInvitationNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNEventInvitationNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNEventInvitationNotificationDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                     //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;              //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                           //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCategoryIdentifier;
+(id)couldBeJunkCategoryIdentifier;
+(id)acceptActionIdentifier;
+(id)maybeActionIdentifier;
+(id)declineActionIdentifier;
+(id)reportJunkActionIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 dateProvider:(id)arg4 ;
-(void)didReceiveResponse:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(NSString *)sourceIdentifier;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id*)arg2 summaryArgument:(id*)arg3 ;
-(id<CalDateProvider>)dateProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id<CALNEventInvitationNotificationDataSource>)dataSource;
-(NSArray *)categories;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
@end
