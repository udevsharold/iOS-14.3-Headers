/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFMessageTransportDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, HMFTimer, NSBackgroundActivityScheduler, NSDictionary, NSSet, HMFMessageTransport, NSObject, NSString;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate> {

	hmf_unfair_data_lock_s _lock;
	NSMutableOrderedSet* _handlers;
	HMFTimer* _indexWatchdog;
	NSBackgroundActivityScheduler* _indexScheduler;
	NSDictionary* _destinationHandlerIndexes;
	NSDictionary* _nameHandlerIndexes;
	BOOL _indexed;
	BOOL _shouldAutomaticallyIndex;
	NSSet* _filterClasses;
	HMFMessageTransport* _transport;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (getter=isIndexed,readonly) BOOL indexed;                          //@synthesize indexed=_indexed - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyIndex;                  //@synthesize shouldAutomaticallyIndex=_shouldAutomaticallyIndex - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (copy) NSSet * filterClasses;                                      //@synthesize filterClasses=_filterClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isIndexed;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)sendMessage:(id)arg1 ;
-(HMFMessageTransport *)transport;
-(id)init;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)index;
-(id)handlersForMessage:(id)arg1 ;
-(void)dealloc;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3 ;
-(void)dispatchMessage:(id)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
-(void)setShouldAutomaticallyIndex:(BOOL)arg1 ;
-(NSSet *)filterClasses;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)setFilterClasses:(NSSet *)arg1 ;
-(BOOL)shouldAutomaticallyIndex;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
@end
