/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchSubscriptionsOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKFetchSubscriptionsOperationInfo;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {

	BOOL _isFetchAllSubscriptionsOperation;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptionIDs;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,readonly) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchSubscriptionsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * subscriptions;                                                                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;                                    //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                                               //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                                                  //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDs;                                                                //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                                      //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
+(id)fetchAllSubscriptionsOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(id)fetchSubscriptionCompletionBlock;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(id)activityCreate;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(NSMutableDictionary *)subscriptionErrors;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(void)handleSubscriptionFetchForSubscriptionID:(id)arg1 subscription:(id)arg2 error:(id)arg3 ;
-(NSArray *)subscriptionIDs;
-(BOOL)isFetchAllSubscriptionsOperation;
-(void)performCKOperation;
@end
