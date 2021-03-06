/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject {

	BOOL _attemptedVerificationStateReset;
	VSIdentityProviderRequest* _request;

}

@property (nonatomic,retain) VSIdentityProviderRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL attemptedVerificationStateReset;              //@synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset - In the implementation block
-(VSIdentityProviderRequest *)request;
-(void)setRequest:(VSIdentityProviderRequest *)arg1 ;
-(BOOL)attemptedVerificationStateReset;
-(void)setAttemptedVerificationStateReset:(BOOL)arg1 ;
@end

