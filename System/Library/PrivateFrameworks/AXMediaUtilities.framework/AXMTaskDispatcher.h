/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, AXMTaskDispatcherDelegate;
@class NSObject, NSMutableArray;

@interface AXMTaskDispatcher : NSObject {

	NSObject*<OS_dispatch_source> _processQueueSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_taskList;
	BOOL _queue_taskIsBeingProcessed;
	id<AXMTaskDispatcherDelegate> _delegate;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<AXMTaskDispatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isEmpty;
-(void)_queue_processNextTask;
-(long long)_queue_count;
-(id)_queue_dequeueTask;
-(void)_queue_scheduleTask:(id)arg1 ;
-(id)_queue_unscheduleAllTasks;
-(void)scheduleTask:(id)arg1 ;
-(long long)count;
-(void)setDelegate:(id<AXMTaskDispatcherDelegate>)arg1 ;
-(id)unscheduleAllTasks;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id<AXMTaskDispatcherDelegate>)delegate;
@end

