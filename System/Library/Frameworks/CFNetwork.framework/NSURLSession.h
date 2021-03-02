/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@protocol OS_dispatch_queue, NSURLSessionDelegate;
@class __CFN_ConnectionContextManager, NSDictionary, NSOperationQueue, NSObject, NSString, NSURLSessionConfiguration, NSUUID, NSMutableSet, NSMutableDictionary, __CFN_SessionMetrics;

@interface NSURLSession : NSObject <NSCopying, __NSURLSessionTaskGroupForConfiguration> {

	__CFN_ConnectionContextManager* _nwContextManager;
	shared_ptr<NSObject<OS_nw_context> >* _nwContext;
	NSDictionary* _atsState_ivar;
	os_unfair_lock_s _lock;
	BOOL _invalid_ivar;
	BOOL _isSharedSession_ivar;
	NSOperationQueue* _delegateQueue_ivar;
	NSObject*<OS_dispatch_queue> _delegateDispatchQueue;
	id<NSURLSessionDelegate> _delegate_ivar;
	NSString* _sessionDescription_ivar;
	NSURLSessionConfiguration* _local_immutable_configuration_ivar;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid_ivar;
	NSString* _tlsSessionCachePrefix;
	NSMutableSet* _h1FallbackHosts;
	NSMutableDictionary* _coalescing;
	__CFN_SessionMetrics* _metrics;

}

@property (nonatomic,copy) NSString * _tlsSessionCachePrefix;                             //@synthesize tlsSessionCachePrefix=_tlsSessionCachePrefix - In the implementation block
@property (readonly) unsigned long long nextSeed; 
@property (retain,readonly) NSOperationQueue * delegateQueue; 
@property (retain,readonly) id<NSURLSessionDelegate> delegate;                            //@synthesize delegate_ivar=_delegate_ivar - In the implementation block
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription;                                           //@synthesize sessionDescription_ivar=_sessionDescription_ivar - In the implementation block
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedSession;
+(void)_obliterateAllBackgroundSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateDispatchQueue:(id)arg3 ;
+(void)_disableATS;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg1 ;
+(void)_getActiveSessionIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg1 ;
+(void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_disableAppSSO;
+(BOOL)_backgroundServiceAvailable;
+(void)_setHTTPRewriter:(id)arg1 ;
+(void)_setEventDelegate:(id)arg1 queue:(id)arg2 ;
+(id)sessionWithConfiguration:(id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishTasksAndInvalidate;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)_dataTaskWithTaskForClass:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)_groupSession;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)set_tlsSessionCachePrefix:(NSString *)arg1 ;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)_tlsSessionCachePrefix;
-(NSOperationQueue *)delegateQueue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(id)defaultTaskGroup;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)taskGroupWithConfiguration:(id)arg1 ;
-(id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)webSocketTaskWithRequest:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSString *)sessionDescription;
-(NSURLSessionConfiguration *)configuration;
-(id)webSocketTaskWithURL:(id)arg1 ;
-(void)_setEventDelegate:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(id)_uploadTaskWithTaskForClass:(id)arg1 ;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4 ;
-(id)_downloadTaskWithTaskForClass:(id)arg1 ;
-(void)invalidateAndCancel;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id<NSURLSessionDelegate>)delegate;
@end
