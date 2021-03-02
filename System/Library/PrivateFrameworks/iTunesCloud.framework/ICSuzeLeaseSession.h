/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ICSuzeLeaseSessionDelegate;
@class NSObject, NSDate, ICFPLeaseSyncSession, NSOperationQueue, ICSuzeLeaseSessionConfiguration;

@interface ICSuzeLeaseSession : NSObject {

	long long _automaticRefreshCount;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _isRunning;
	NSDate* _leaseExpirationDate;
	NSObject*<OS_dispatch_source> _leaseRenewTimer;
	ICFPLeaseSyncSession* _leaseSyncSession;
	NSOperationQueue* _operationQueue;
	ICSuzeLeaseSessionConfiguration* _configuration;
	id<ICSuzeLeaseSessionDelegate> _delegate;

}

@property (nonatomic,copy,readonly) ICSuzeLeaseSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<ICSuzeLeaseSessionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(ICSuzeLeaseSessionConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_updateRenewalTimer;
-(id)_newSuzeLeaseRequestWithType:(long long)arg1 clientData:(id)arg2 ;
-(void)_updateRenewalTimerWithResponse:(id)arg1 ;
-(void)_renewLeaseTimerAction;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(void)startLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopLeaseSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ICSuzeLeaseSessionDelegate>)arg1 ;
-(id<ICSuzeLeaseSessionDelegate>)delegate;
@end
