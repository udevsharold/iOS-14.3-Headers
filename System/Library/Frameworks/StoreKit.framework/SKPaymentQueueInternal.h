/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SKPaymentQueueDelegate;
@class NSString, SKPaymentQueueClient, NSMutableDictionary, NSMutableArray, NSObject, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	BOOL _isRedemptionSheetShowing;
	BOOL _isRefreshing;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSString* _identifier;
	SKPaymentQueueClient* _client;
	NSMutableDictionary* _downloads;
	NSMutableArray* _localTransactions;
	NSMutableArray* _transactions;
	NSMutableArray* _weakObservers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	id<SKPaymentQueueDelegate> _delegate;

}
-(id)init;
-(void)dealloc;
@end

