/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSError, NSMutableArray;

@interface CPSPromise : NSObject {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}
+(id)promise;
-(void)finish;
-(id)init;
-(void)finishWithResult:(id)arg1 ;
-(BOOL)_isFinished;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)_finishWithResult:(id)arg1 error:(id)arg2 ;
@end

