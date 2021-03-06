/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFuture.h>
#import <libobjc.A.dylib/CNPromise.h>

@class NSConditionLock, CNFutureResult, CNTask, CNFutureCompletionBlocks, NSString;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {

	NSConditionLock* _stateLock;
	CNFutureResult* _futureResult;
	CNTask* _task;
	CNFutureCompletionBlocks* _completionBlocks;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)run;
-(BOOL)nts_isFinished;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)initWithTask:(id)arg1 ;
-(id)init;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)didCancel;
-(id)recover:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isCancelled;
-(/*^block*/id)completionHandlerAdapter;
-(id)futureResult;
-(BOOL)cancel;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
@end

