/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannelIDs;

}

@property (nonatomic,copy,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recommendedNotificationChannelIDs;                 //@synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs - In the implementation block
-(NSArray *)recommendedNotificationChannelIDs;
-(NSArray *)preSubscribedNotificationsChannelIDs;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2 ;
@end
