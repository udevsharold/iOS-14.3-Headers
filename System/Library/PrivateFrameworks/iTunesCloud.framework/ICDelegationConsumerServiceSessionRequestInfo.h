/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {

	unsigned long long _accountID;
	unsigned long long _fairPlaySessionID;

}

@property (nonatomic,readonly) unsigned long long accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) unsigned long long fairPlaySessionID;              //@synthesize fairPlaySessionID=_fairPlaySessionID - In the implementation block
-(unsigned long long)accountID;
-(unsigned long long)fairPlaySessionID;
-(id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end
