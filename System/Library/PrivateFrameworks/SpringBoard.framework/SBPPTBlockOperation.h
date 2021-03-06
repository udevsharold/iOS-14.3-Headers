/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPPTOperation.h>

@interface SBPPTBlockOperation : SBPPTOperation {

	double _timeoutInterval;
	/*^block*/id _timeoutBlock;
	unsigned long long _state;
	/*^block*/id _block;

}

@property (assign,nonatomic,__weak) id timeoutBlock;                //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)finish;
-(double)timeoutInterval;
-(BOOL)isExecuting;
-(id)timeoutBlock;
-(id)init;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(BOOL)isFinished;
-(BOOL)isAsynchronous;
-(id)block;
-(void)cancel;
-(void)start;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)cancelAndFailTestWithReason:(id)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
@end

