/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, TVPSecureKeyRequest;

@interface TVPSecureKeyResponse : NSObject {

	NSData* _keyData;
	NSDate* _renewalDate;
	TVPSecureKeyRequest* _request;

}

@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                       //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * request;              //@synthesize request=_request - In the implementation block
-(void)setKeyData:(NSData *)arg1 ;
-(TVPSecureKeyRequest *)request;
-(void)setRequest:(TVPSecureKeyRequest *)arg1 ;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSData *)keyData;
@end

