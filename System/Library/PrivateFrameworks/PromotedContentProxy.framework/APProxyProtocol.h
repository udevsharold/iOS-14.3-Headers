/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSThread, NSArray, NSURLSessionDataTask, APNSURLSessionDemultiplexer, NSString;

@interface APProxyProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSThread* _clientThread;
	NSArray* _modes;
	double _startTime;
	NSURLSessionDataTask* _task;
	APNSURLSessionDemultiplexer* _sessionDemux;
	long long _requestType;

}

@property (retain) NSThread * clientThread;                                 //@synthesize clientThread=_clientThread - In the implementation block
@property (retain) NSArray * modes;                                         //@synthesize modes=_modes - In the implementation block
@property (assign) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSURLSessionDataTask * task;                             //@synthesize task=_task - In the implementation block
@property (retain) APNSURLSessionDemultiplexer * sessionDemux;              //@synthesize sessionDemux=_sessionDemux - In the implementation block
@property (assign,nonatomic) long long requestType;                         //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)properties;
+(void)start;
+(void)stop;
+(void)invalidateProxyDemultiplexerSessionForId:(id)arg1 ;
+(void)setProxyURL:(id)arg1 ;
-(void)startLoading;
-(NSArray *)modes;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(long long)requestType;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setRequestType:(long long)arg1 ;
-(NSThread *)clientThread;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSURLSessionDataTask *)task;
-(void)stopLoading;
-(void)setModes:(NSArray *)arg1 ;
-(APNSURLSessionDemultiplexer *)sessionDemux;
-(void)setSessionDemux:(APNSURLSessionDemultiplexer *)arg1 ;
-(id)_currentRunLoopModes;
@end

