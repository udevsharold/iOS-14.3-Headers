/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARSession, NSString;

@interface CARSessionScreenBorrowToken : NSObject {

	CARSession* _session;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) CARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * client;                   //@synthesize client=_client - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(CARSession *)session;
-(void)unborrowToken;
-(id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
@end

