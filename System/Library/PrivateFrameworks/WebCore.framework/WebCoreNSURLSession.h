/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class NSOperationQueue, NSURLSessionConfiguration, NSString;

@interface WebCoreNSURLSession : NSObject {

	RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> >* _loader;
	WeakObjCPtr<id<NSURLSessionDelegate> > _delegate;
	RetainPtr<NSOperationQueue>* _queue;
	RetainPtr<NSString>* _sessionDescription;
	HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > >* _dataTasks;
	HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > >* _origins;
	Lock _dataTasksLock;
	BOOL _invalidated;
	unsigned long long _nextTaskIdentifier;
	OSObjectPtr<NSObject<OS_dispatch_queue> *> _internalQueue;
	int _corsResults;

}

@property (readonly) PlatformMediaResourceLoader* loader; 
@property (retain) id<NSURLSessionTaskDelegate> delegate; 
@property (retain,readonly) NSOperationQueue * delegateQueue; 
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription; 
@property (readonly) BOOL didPassCORSAccessChecks; 
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishTasksAndInvalidate;
-(PlatformMediaResourceLoader*)loader;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSString *)sessionDescription;
-(NSURLSessionConfiguration *)configuration;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(void)addDelegateOperation:(Function<void ()>*)arg1 ;
-(void)sendH2Ping:(id)arg1 pongHandler:(/*^block*/id)arg2 ;
-(void)taskCompleted:(id)arg1 ;
-(void)task:(id)arg1 didReceiveCORSAccessCheckResult:(BOOL)arg2 ;
-(void)task:(id)arg1 didReceiveResponseFromOrigin:(Ref<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >*)arg2 ;
-(void)invalidateAndCancel;
-(id)initWithResourceLoader:(PlatformMediaResourceLoader*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(BOOL)didPassCORSAccessChecks;
-(BOOL)wouldTaintOrigin:(const SecurityOrigin*)arg1 ;
-(void)setDelegate:(id<NSURLSessionTaskDelegate>)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id<NSURLSessionTaskDelegate>)delegate;
@end
