/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSRecursiveLock, ASDPromiseResult;

@interface ASDPromise : NSObject {

	NSMutableArray* _observers;
	long long _state;
	NSRecursiveLock* _stateLock;
	ASDPromiseResult* _result;

}

@property (getter=isResolved,readonly) BOOL resolved; 
@property (readonly) ASDPromiseResult * result;                    //@synthesize result=_result - In the implementation block
+(id)onScheduler:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithValue:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(ASDPromiseResult *)result;
-(id)init;
-(void)alwaysPerform:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(void)thenPerform:(/*^block*/id)arg1 orCatchError:(/*^block*/id)arg2 onScheduler:(id)arg3 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)initOnScheduler:(id)arg1 withExecutor:(/*^block*/id)arg2 ;
-(id)initWithState:(long long)arg1 result:(id)arg2 ;
-(void)_invokeExecutor:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(void)resolveWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)rejectWithError:(id)arg1 ;
-(void)catchError:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)mapUsingTransformer:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)flatMapUsingTransformer:(/*^block*/id)arg1 onScheduler:(id)arg2 ;
-(id)joinWithPromise:(id)arg1 ;
-(BOOL)isResolved;
@end

