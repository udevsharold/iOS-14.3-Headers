/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest {

	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedBlock;
	NSArray* _subscriptionIDs;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptionIDs;                                    //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                               //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedBlock;                                    //@synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock - In the implementation block
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(id)subscriptionFetchedBlock;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(void)setSubscriptionFetchedBlock:(id)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(id)requestOperationClasses;
-(id)initWithOperation:(id)arg1 subscriptionIDs:(id)arg2 ;
-(id)generateRequestOperations;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
@end
