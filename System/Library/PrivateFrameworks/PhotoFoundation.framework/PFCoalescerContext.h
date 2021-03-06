/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class PFCoalescer, NSObject, NSHashTable, NSArray;

@interface PFCoalescerContext : NSObject {

	unsigned long long _coalescedUpdatesCount;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _pendingActivityTokens;

}

@property (__weak) PFCoalescer * coalescer;                                  //@synthesize coalescer=_coalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSHashTable * pendingActivityTokens;                      //@synthesize pendingActivityTokens=_pendingActivityTokens - In the implementation block
@property (readonly) NSArray * pendingActivityTokensSnapshot; 
@property (assign) unsigned long long coalescedUpdatesCount;                 //@synthesize coalescedUpdatesCount=_coalescedUpdatesCount - In the implementation block
-(PFCoalescer *)coalescer;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)cancelPendingActivityTokens;
-(NSArray *)pendingActivityTokensSnapshot;
-(void)pushBack:(/*^block*/id)arg1 ;
-(unsigned long long)coalescedUpdatesCount;
-(id)activityTokenWithReason:(id)arg1 ;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)activityToken;
-(NSHashTable *)pendingActivityTokens;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(id)initWithCoalescer:(id)arg1 ;
-(void)setPendingActivityTokens:(NSHashTable *)arg1 ;
-(void)setCoalescer:(PFCoalescer *)arg1 ;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

