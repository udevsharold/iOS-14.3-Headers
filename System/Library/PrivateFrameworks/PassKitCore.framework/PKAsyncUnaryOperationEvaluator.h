/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>

@class NSMutableArray, PKAsyncOperationState, NSString;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;
	AB _crashed;
	id _value;
	/*^block*/id _completion;
	BOOL _started;
	BOOL _escaped;
	BOOL _canceled;
	PKAsyncOperationState* _runningOperationState;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCanceled;
-(id)init;
-(void)dealloc;
-(id)evaluateWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)_initWithOperations:(id)arg1 input:(id)arg2 ;
-(BOOL)_performOperation;
@end
