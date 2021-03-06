/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;
@interface HAPRelayActivationClient : HMFObject {

	id<HAPRelayActivationClientDelegate> _delegate;

}

@property (__weak) id<HAPRelayActivationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<HAPRelayActivationClientDelegate>)arg1 ;
-(void)close;
-(void)open;
-(id<HAPRelayActivationClientDelegate>)delegate;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

