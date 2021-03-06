/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class BPSSubscription, NSString;

@interface BPSFilterProducer : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _state;
	BPSSubscription* _subscription;

}

@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)requestDemand:(long long)arg1 ;
-(long long)state;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(id)upstreamSubscriptions;
-(id)receiveNewValue:(id)arg1 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(BPSSubscription *)subscription;
-(void)setState:(long long)arg1 ;
-(id)initWithDownstream:(id)arg1 ;
@end

