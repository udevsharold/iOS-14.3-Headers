/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber, BPSPublisher;
@class BPSSubscription, NSString;

@interface _BPSBookmarkedInner : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	id<BPSPublisher> _upstream;
	BPSSubscription* _subscription;
	id _state;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id<BPSPublisher> upstream;                   //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)requestDemand:(long long)arg1 ;
-(id)state;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)cancel;
-(id)newBookmark;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(BPSSubscription *)subscription;
-(id<BPSPublisher>)upstream;
-(void)setState:(id)arg1 ;
-(id)initWithUpstream:(id)arg1 downstream:(id)arg2 state:(id)arg3 ;
-(void)setUpstream:(id<BPSPublisher>)arg1 ;
@end

