/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <NewsCore/NewsCore-Structs.h>
@class NSObject;

@interface FCBalancedCounter : NSObject {

	os_unfair_lock_s _lock;
	long long _count;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (assign,nonatomic) long long count;                                         //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(void)setCount:(long long)arg1 ;
-(void)increment;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_bumpCounterPositively:(BOOL)arg1 ;
-(void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)decrement;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(long long)count;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(os_unfair_lock_s)lock;
@end
