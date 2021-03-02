/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RTInvocationDispatcher : NSObject {

	BOOL _valid;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingInvocations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (assign,nonatomic) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
-(void)shutdown;
-(void)setValid:(BOOL)arg1 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(unsigned long long)countOfPendingInvocations;
-(id)init;
-(BOOL)invocationsPending;
-(NSMutableArray *)pendingInvocations;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)valid;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)enqueueBlock:(/*^block*/id)arg1 description:(id)arg2 ;
-(BOOL)dispatchPendingInvocations;
-(void)removeAllPendingInvocations;
@end
