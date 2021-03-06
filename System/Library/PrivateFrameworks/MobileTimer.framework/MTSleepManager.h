/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol MTAlarmStorage, MTPersistence;
@class HKSPSleepStore, HKSPFeatureAvailabilityStore, HKHealthStore, NSString;

@interface MTSleepManager : NSObject <MTSource, HKSPSleepStoreObserver, MTAlarmObserver> {

	id<MTAlarmStorage> _alarmStorage;
	/*^block*/id _sleepStoreProvider;
	HKSPSleepStore* _sleepStore;
	HKSPFeatureAvailabilityStore* _featureStore;
	HKHealthStore* _healthStore;
	id<MTPersistence> _persistence;

}

@property (nonatomic,readonly) id<MTAlarmStorage> alarmStorage;                        //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,copy) id sleepStoreProvider;                                      //@synthesize sleepStoreProvider=_sleepStoreProvider - In the implementation block
@property (nonatomic,retain) HKSPSleepStore * sleepStore;                              //@synthesize sleepStore=_sleepStore - In the implementation block
@property (nonatomic,retain) HKSPFeatureAvailabilityStore * featureStore;              //@synthesize featureStore=_featureStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) id<MTPersistence> persistence;                            //@synthesize persistence=_persistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nextSleepAlarm;
-(id<MTPersistence>)persistence;
-(BOOL)watchSleepFeaturesEnabled;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)resetSleepAlarmSnoozeState;
-(HKSPFeatureAvailabilityStore *)featureStore;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(id)sourceIdentifier;
-(BOOL)_didCompleteSleepOnboarding;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(id)sleepStoreProvider;
-(id<MTAlarmStorage>)alarmStorage;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)setFeatureStore:(HKSPFeatureAvailabilityStore *)arg1 ;
-(void)setSleepStoreProvider:(id)arg1 ;
-(void)markSleepMigrationComplete;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(void)updateSleepAlarms;
-(HKHealthStore *)healthStore;
-(HKSPSleepStore *)sleepStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setSleepStore:(HKSPSleepStore *)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 sleepStoreProvider:(/*^block*/id)arg2 featureStoreProvider:(/*^block*/id)arg3 healthStore:(id)arg4 persistence:(id)arg5 ;
@end

