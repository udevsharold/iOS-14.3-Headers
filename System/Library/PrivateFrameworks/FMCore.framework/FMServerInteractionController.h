/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSOperationQueue, NSURLSession, NSURLSessionConfiguration, NSString;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> dq_inFlightCommands;
	NSMutableSet* inFlightCommands;
	NSOperationQueue* _queue;
	NSURLSession* _session;
	NSURLSessionConfiguration* _sessionConfiguration;

}

@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSession *)session;
-(void)processResponseForCommand:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)init;
-(void)cancelAllCommands;
-(void)dealloc;
-(void)networkActivityStatus:(BOOL)arg1 ;
-(void)cancelCommand:(id)arg1 ;
-(void)sendCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(void)invalidate;
-(double)_simulatedLatency;
@end
