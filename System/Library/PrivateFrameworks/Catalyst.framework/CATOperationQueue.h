/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;
@interface CATOperationQueue : NSOperationQueue {

	id<CATOperationQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATOperationQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)mainQueue;
+(id)currentQueue;
+(id)backgroundQueue;
-(void)addOperation:(id)arg1 ;
-(void)delegateOperationDidFinish:(id)arg1 ;
-(void)startObserving:(id)arg1 ;
-(void)delegateWillAddOperation:(id)arg1 ;
-(id)description;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)setDelegate:(id<CATOperationQueueDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving:(id)arg1 ;
-(id<CATOperationQueueDelegate>)delegate;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
@end

