/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol C2NetworkingDelegate, NSURLSessionDelegateC2RequestDelegate;
@class NSObject, NSString, NSOperationQueue, NSURLSessionConfiguration;

@interface C2NetworkingDelegateURLSession : NSObject {

	NSObject*<C2NetworkingDelegate> _networkingDelegate;
	NSString* _sessionDescription;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	id<NSURLSessionDelegate><C2RequestDelegate> _sessionDelegate;

}

@property (assign,nonatomic,__weak) id<NSURLSessionDelegate><C2RequestDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (retain) NSOperationQueue * delegateQueue;                                                          //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (copy) NSURLSessionConfiguration * configuration;                                                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<C2NetworkingDelegate> networkingDelegate;                       //@synthesize networkingDelegate=_networkingDelegate - In the implementation block
@property (copy) NSString * sessionDescription;                                                               //@synthesize sessionDescription=_sessionDescription - In the implementation block
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id<NSURLSessionDelegate><C2RequestDelegate>)sessionDelegate;
-(NSOperationQueue *)delegateQueue;
-(void)setSessionDescription:(NSString *)arg1 ;
-(NSString *)sessionDescription;
-(NSURLSessionConfiguration *)configuration;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(void)setSessionDelegate:(id<NSURLSessionDelegate><C2RequestDelegate>)arg1 ;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)invalidateAndCancel;
-(id)dataTaskWithRequest:(id)arg1 ;
-(NSObject*<C2NetworkingDelegate>)networkingDelegate;
-(void)setNetworkingDelegate:(NSObject*<C2NetworkingDelegate>)arg1 ;
@end
