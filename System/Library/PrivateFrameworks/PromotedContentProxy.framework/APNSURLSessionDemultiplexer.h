/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSMutableDictionary, NSURLSessionConfiguration, NSURLSession, APUnfairLock;

@interface APNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate> {

	Aq _requestCount;
	BOOL _sessionMarkedInvalid;
	NSString* _identifier;
	NSMutableDictionary* _taskInfoByTaskIdentifier;
	NSURLSessionConfiguration* _configuration;
	NSURLSession* _session;
	long long _maximumRequestCount;
	/*^block*/id _sessionInvalidated;
	APUnfairLock* _lock;

}

@property (retain) NSMutableDictionary * taskInfoByTaskIdentifier;              //@synthesize taskInfoByTaskIdentifier=_taskInfoByTaskIdentifier - In the implementation block
@property (retain) NSURLSessionConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSURLSession * session;                                      //@synthesize session=_session - In the implementation block
@property (copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long maximumRequestCount;                     //@synthesize maximumRequestCount=_maximumRequestCount - In the implementation block
@property (nonatomic,copy) id sessionInvalidated;                               //@synthesize sessionInvalidated=_sessionInvalidated - In the implementation block
@property (assign,nonatomic) BOOL sessionMarkedInvalid;                         //@synthesize sessionMarkedInvalid=_sessionMarkedInvalid - In the implementation block
@property (nonatomic,readonly) APUnfairLock * lock;                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) long long requestCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(long long)requestCount;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSURLSessionConfiguration *)configuration;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)taskInfoForTask:(id)arg1 ;
-(NSString *)identifier;
-(id)sessionInvalidated;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)invalidateSession;
-(void)removeTask:(id)arg1 ;
-(APUnfairLock *)lock;
-(void)setMaximumRequestCount:(long long)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3 ;
-(BOOL)sessionMarkedInvalid;
-(long long)maximumRequestCount;
-(NSMutableDictionary *)taskInfoByTaskIdentifier;
-(void)setSessionMarkedInvalid:(BOOL)arg1 ;
-(void)setSessionInvalidated:(id)arg1 ;
-(void)setTaskInfoByTaskIdentifier:(NSMutableDictionary *)arg1 ;
-(id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3 delegateQueue:(id)arg4 ;
-(void)invalidateAndCancelSessionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

