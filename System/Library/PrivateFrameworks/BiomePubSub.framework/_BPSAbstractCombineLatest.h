/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSMutableArray;

@interface _BPSAbstractCombineLatest : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _downstreamLock;
	BOOL _recursion;
	BOOL _finished;
	BOOL _errored;
	BOOL _cancelled;
	unsigned long long _upstreamCount;
	id<BPSSubscriber> _downstream;
	NSMutableArray* _subscriptions;
	NSMutableArray* _buffers;
	long long _demand;
	unsigned long long _finishCount;

}

@property (assign,nonatomic) unsigned long long upstreamCount;              //@synthesize upstreamCount=_upstreamCount - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                  //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                      //@synthesize buffers=_buffers - In the implementation block
@property (assign,nonatomic) BOOL recursion;                                //@synthesize recursion=_recursion - In the implementation block
@property (assign,nonatomic) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL errored;                                  //@synthesize errored=_errored - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) long long demand;                              //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) unsigned long long finishCount;                //@synthesize finishCount=_finishCount - In the implementation block
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(BOOL)cancelled;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(long long)demand;
-(void)cancel;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buffers;
-(BOOL)errored;
-(BOOL)recursion;
-(void)setRecursion:(BOOL)arg1 ;
-(void)setDemand:(long long)arg1 ;
-(void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)upstreamCount;
-(unsigned long long)finishCount;
-(void)setFinishCount:(unsigned long long)arg1 ;
-(void)setErrored:(BOOL)arg1 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 ;
-(void)setUpstreamCount:(unsigned long long)arg1 ;
-(id)convertValues:(id)arg1 ;
@end
