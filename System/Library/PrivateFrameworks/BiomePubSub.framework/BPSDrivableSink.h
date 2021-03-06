/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <libobjc.A.dylib/BPSSubscriber.h>
#import <libobjc.A.dylib/BPSCancellable.h>

@class BPSSubscriptionStatus, NSString;

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable> {

	os_unfair_lock_s _lock;
	/*^block*/id _receivedCompletion;
	/*^block*/id _shouldContinue;
	BPSSubscriptionStatus* _status;

}

@property (nonatomic,copy) id receivedCompletion;                         //@synthesize receivedCompletion=_receivedCompletion - In the implementation block
@property (nonatomic,copy) id shouldContinue;                             //@synthesize shouldContinue=_shouldContinue - In the implementation block
@property (nonatomic,retain) BPSSubscriptionStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BPSSubscriptionStatus *)status;
-(long long)receiveInput:(id)arg1 ;
-(id)shouldContinue;
-(void)cancel;
-(void)receiveCompletion:(id)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(void)setStatus:(BPSSubscriptionStatus *)arg1 ;
-(id)initWithReceiveCompletion:(/*^block*/id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(id)receivedCompletion;
-(void)setReceivedCompletion:(id)arg1 ;
-(void)setShouldContinue:(id)arg1 ;
@end

