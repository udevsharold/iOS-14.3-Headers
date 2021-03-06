/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HKHealthStore, NSHashTable, HKWheelchairUseObject, NSObject;

@interface _HKWheelchairUseCharacteristicCache : NSObject {

	HKHealthStore* _healthStore;
	NSHashTable* _observers;
	long long _state;
	HKWheelchairUseObject* _wheelchairUseObject;
	NSObject*<OS_dispatch_queue> _queue;
	int _characteristicUpdateToken;
	long long _queryRetries;

}
-(id)initWithHealthStore:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(BOOL)_needsFetch;
-(void)_handleFetchSuccess:(id)arg1 ;
-(void)_fetchWheelchairUse;
-(void)_fetchWheelchairUseIfNecessary;
-(void)_handleFetchError:(id)arg1 ;
-(BOOL)isWheelchairUser;
-(void)_alertObserversDidUpdateToWheelchairUser:(BOOL)arg1 ;
-(BOOL)hasFetchedWheelchairUse;
@end

