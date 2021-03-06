/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSPUserDefaults;
#import <SleepDaemon/SleepDaemon-Structs.h>
@class HKSPObserverSet, NSDate;

@interface HDSPWatchOnWristMonitor : NSObject {

	os_unfair_lock_s _lock;
	id<HKSPUserDefaults> _userDefaults;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                          //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) BOOL isOnWrist; 
@property (nonatomic,readonly) NSDate * lastOnWristDate; 
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(id<HKSPUserDefaults>)userDefaults;
-(void)removeObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)addObserver:(id)arg1 ;
-(os_unfair_lock_s)lock;
-(id)initWithUserDefaults:(id)arg1 callbackScheduler:(id)arg2 ;
-(BOOL)_lock_isOnWrist;
-(id)_lock_lastOnWristDate;
-(BOOL)isOnWrist;
-(void)_lock_setIsOnWrist:(BOOL)arg1 ;
-(NSDate *)lastOnWristDate;
-(void)_lock_setLastOnWristDate:(id)arg1 ;
@end

