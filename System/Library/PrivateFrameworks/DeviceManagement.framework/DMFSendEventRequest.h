/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFSendEventRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _inReplyTo;
	NSString* _eventType;
	NSDictionary* _details;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inReplyTo;                           //@synthesize inReplyTo=_inReplyTo - In the implementation block
@property (nonatomic,copy) NSString * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSDictionary * details;                         //@synthesize details=_details - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)organizationIdentifier;
-(NSString *)eventType;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSString *)inReplyTo;
-(NSDictionary *)details;
-(void)setInReplyTo:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

