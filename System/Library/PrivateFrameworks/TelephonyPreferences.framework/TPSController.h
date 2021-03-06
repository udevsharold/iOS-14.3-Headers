/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
@class NSMapTable;

@interface TPSController : NSObject {

	os_unfair_lock_s _delegateLock;
	NSMapTable* _delegateToQueue;

}

@property (assign,nonatomic) os_unfair_lock_s delegateLock;               //@synthesize delegateLock=_delegateLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;              //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(NSMapTable *)delegateToQueue;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(void)performAtomicDelegateBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)delegateLock;
-(void)setDelegateLock:(os_unfair_lock_s)arg1 ;
@end

