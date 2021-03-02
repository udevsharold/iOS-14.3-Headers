/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary;

@interface HMDCameraClipsQuotaServerNotification : HMFObject {

	NSString* _containerIdentifier;
	long long _reason;
	NSString* _requestID;
	NSString* _userDSID;

}

@property (copy,readonly) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (readonly) long long reason;                                          //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSString * requestID;                                 //@synthesize requestID=_requestID - In the implementation block
@property (copy,readonly) NSString * userDSID;                                  //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)containerIdentifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)reason;
-(NSString *)requestID;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)userDSID;
-(id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4 ;
@end
