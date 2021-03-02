/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADataclassLockWatcher;
@interface DAWaiterWrapper : NSObject {

	id<DADataclassLockWatcher> _waiter;
	long long _dataclasses;
	/*^block*/id _completionHandler;
	int _waiterNum;

}

@property (nonatomic,retain) id<DADataclassLockWatcher> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long dataclasses;                          //@synthesize dataclasses=_dataclasses - In the implementation block
@property (nonatomic,readonly) int waiterNum;                                //@synthesize waiterNum=_waiterNum - In the implementation block
-(id<DADataclassLockWatcher>)waiter;
-(int)waiterNum;
-(id)init;
-(void)setWaiter:(id<DADataclassLockWatcher>)arg1 ;
-(void)setDataclasses:(long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(long long)dataclasses;
@end
