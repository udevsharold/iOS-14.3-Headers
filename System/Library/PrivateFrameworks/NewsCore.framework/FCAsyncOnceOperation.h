/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, FCOperationCancelingFCOperationPrioritizing;
@class NSObject, NFMutexLock;

@interface FCAsyncOnceOperation : NSObject {

	BOOL _finished;
	BOOL _succeeded;
	/*^block*/id _workBlock;
	unsigned long long _interest;
	NSObject*<OS_dispatch_group> _activeGroup;
	id<FCOperationCanceling><FCOperationPrioritizing> _activeOperation;
	long long _relativePriority;
	NFMutexLock* _lock;

}

@property (nonatomic,copy) id workBlock;                                                                     //@synthesize workBlock=_workBlock - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                                  //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL succeeded;                                                                 //@synthesize succeeded=_succeeded - In the implementation block
@property (assign,nonatomic) unsigned long long interest;                                                    //@synthesize interest=_interest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeGroup;                                       //@synthesize activeGroup=_activeGroup - In the implementation block
@property (nonatomic,retain) id<FCOperationCanceling><FCOperationPrioritizing> activeOperation;              //@synthesize activeOperation=_activeOperation - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                                     //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;                                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL finishedExecuting; 
@property (nonatomic,readonly) BOOL finishedExecutingWithFailure; 
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(BOOL)succeeded;
-(BOOL)finishedExecutingWithFailure;
-(void)setInterest:(unsigned long long)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setWorkBlock:(id)arg1 ;
-(id)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSucceeded:(BOOL)arg1 ;
-(long long)relativePriority;
-(unsigned long long)interest;
-(id)workBlock;
-(void)setLock:(NFMutexLock *)arg1 ;
-(NSObject*<OS_dispatch_group>)activeGroup;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setActiveOperation:(id<FCOperationCanceling><FCOperationPrioritizing>)arg1 ;
-(void)setActiveGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NFMutexLock *)lock;
-(id)executeWithCallbackQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)finishedExecuting;
-(id<FCOperationCanceling><FCOperationPrioritizing>)activeOperation;
@end
