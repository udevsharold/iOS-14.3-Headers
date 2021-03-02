/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, AMSURLSession, AMSMescalFairPlay;

@interface AMSMescalSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _certificateData;
	AMSURLSession* _urlSession;
	AMSMescalFairPlay* _fairPlayContext;
	long long _mescalType;
	BOOL _primed;

}

@property (assign,nonatomic) BOOL primed;              //@synthesize primed=_primed - In the implementation block
+(id)sessionWithType:(long long)arg1 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
-(BOOL)primed;
-(id)_cachedCertData;
-(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_cacheCertData:(id)arg1 expiration:(double)arg2 ;
-(void)setPrimed:(BOOL)arg1 ;
-(id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(BOOL)_verifyPrimeResponse:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(id)_establishContextWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldRetryFairPlayForError:(id)arg1 ;
-(void)_resetSession;
-(BOOL)_verifyEntitlements;
-(id)_cachedCertPath;
-(id)_loadCertificateDataWithBag:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
@end
