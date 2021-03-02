/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject {

	long long _version;
	NSArray* _engagementMessages;
	NSArray* _notifications;

}

@property (nonatomic,readonly) long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * engagementMessages;              //@synthesize engagementMessages=_engagementMessages - In the implementation block
@property (nonatomic,readonly) NSArray * notifications;                   //@synthesize notifications=_notifications - In the implementation block
-(long long)version;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)notifications;
-(NSArray *)engagementMessages;
@end
