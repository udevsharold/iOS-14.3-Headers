/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject {

	long long _requestedSize;
	NSData* _sharedInfo;

}

@property (readonly) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (copy,readonly) NSData * sharedInfo;              //@synthesize sharedInfo=_sharedInfo - In the implementation block
-(id)initWithParameters:(id)arg1 ;
-(long long)requestedSize;
-(NSData *)sharedInfo;
@end

