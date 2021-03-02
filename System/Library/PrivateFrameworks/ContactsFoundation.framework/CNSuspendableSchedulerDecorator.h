/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class CNQueue, NSConditionLock, NSString;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	CNQueue* _queue;
	NSConditionLock* _lock;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSConditionLock * lock;                 //@synthesize lock=_lock - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resumedSchedulerWithScheduler:(id)arg1 ;
+(id)suspendedSchedulerWithScheduler:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)initWithScheduler:(id)arg1 ;
-(id<CNScheduler>)scheduler;
-(id)_nts_enqueueCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(void)suspend;
-(NSConditionLock *)lock;
-(void)_performFirstQueuedTask;
-(CNQueue *)queue;
-(void)resume;
@end
