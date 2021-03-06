/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation {

	NSArray* _executionBlocks;

}

@property (copy,readonly) NSArray * executionBlocks;              //@synthesize executionBlocks=_executionBlocks - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(void)main;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
-(id)initWithTimeout:(double)arg1 ;
@end

