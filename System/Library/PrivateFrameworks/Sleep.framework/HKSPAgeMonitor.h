/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sleep/Sleep-Structs.h>
@class NSNumber, HKHealthStore, HKSPObserverSet;

@interface HKSPAgeMonitor : NSObject {

	BOOL _needUpdate;
	int _characteristicUpdateToken;
	os_unfair_lock_s _lock;
	NSNumber* _age;
	/*^block*/id _currentDateProvider;
	HKHealthStore* _healthStore;
	HKSPObserverSet* _observers;

}

@property (nonatomic,copy,readonly) id currentDateProvider;              //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL needUpdate;                          //@synthesize needUpdate=_needUpdate - In the implementation block
@property (assign,nonatomic) int characteristicUpdateToken;              //@synthesize characteristicUpdateToken=_characteristicUpdateToken - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSNumber * age;                           //@synthesize age=_age - In the implementation block
-(NSNumber *)age;
-(id)currentDateProvider;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)dealloc;
-(void)registerForNotifications;
-(void)addObserver:(id)arg1 ;
-(void)unregisterForNotifications;
-(id)_lock_age;
-(BOOL)needUpdate;
-(id)initWithCurrentDateProvider:(/*^block*/id)arg1 healthStore:(id)arg2 ;
-(void)checkForAgeChange;
-(int)characteristicUpdateToken;
-(void)setCharacteristicUpdateToken:(int)arg1 ;
-(HKHealthStore *)healthStore;
-(os_unfair_lock_s)lock;
@end
