/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * afterNotificationId; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSString * sourceAppId; 
@property (nonatomic,copy) NSNumber * supportsSpokenNotifications; 
+(id)notificationsSearch;
+(id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)afterNotificationId;
-(void)setAfterNotificationId:(NSString *)arg1 ;
-(NSNumber *)supportsSpokenNotifications;
-(void)setSupportsSpokenNotifications:(NSNumber *)arg1 ;
-(void)setSourceAppId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)priority;
-(BOOL)requiresResponse;
-(NSString *)sourceAppId;
@end
