/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler> {

	BOOL _workPending;
	os_unfair_lock_s _workPendingLock;
	id<RCOperationThrottlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;

}

@property (assign,nonatomic,__weak) id<RCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialWorkQueue;                  //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (assign,nonatomic) BOOL workPending;                                              //@synthesize workPending=_workPending - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s workPendingLock;                              //@synthesize workPendingLock=_workPendingLock - In the implementation block
@property (assign) BOOL suspended; 
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(id)init;
-(BOOL)workPending;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<RCOperationThrottlerDelegate>)arg1 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(void)setWorkPendingLock:(os_unfair_lock_s)arg1 ;
-(void)setWorkPending:(BOOL)arg1 ;
-(id<RCOperationThrottlerDelegate>)delegate;
-(void)tickleWithQualityOfService:(long long)arg1 ;
-(os_unfair_lock_s)workPendingLock;
-(void)tickleWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end
