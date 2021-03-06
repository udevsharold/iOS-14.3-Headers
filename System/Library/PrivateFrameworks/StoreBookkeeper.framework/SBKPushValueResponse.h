/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPushValueResponse : SBKResponse {

	NSString* _domainVersion;
	NSData* _conflictItemValuePayload;
	NSString* _conflictItemKey;
	NSString* _conflictItemVersionAnchor;

}

@property (readonly) NSString * domainVersion;                          //@synthesize domainVersion=_domainVersion - In the implementation block
@property (readonly) NSData * conflictItemValuePayload;                 //@synthesize conflictItemValuePayload=_conflictItemValuePayload - In the implementation block
@property (readonly) NSString * conflictItemKey;                        //@synthesize conflictItemKey=_conflictItemKey - In the implementation block
@property (readonly) NSString * conflictItemVersionAnchor;              //@synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSString *)domainVersion;
-(NSData *)conflictItemValuePayload;
-(NSString *)conflictItemKey;
-(NSString *)conflictItemVersionAnchor;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

