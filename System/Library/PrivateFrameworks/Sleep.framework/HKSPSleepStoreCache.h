/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sleep/Sleep-Structs.h>
@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord;

@interface HKSPSleepStoreCache : NSObject {

	BOOL _sleepScheduleNeedsUpdate;
	BOOL _sleepSettingsNeedsUpdate;
	BOOL _sleepEventRecordNeedsUpdate;
	BOOL _sleepScheduleStateNeedsUpdate;
	BOOL _sleepModeNeedsUpdate;
	os_unfair_lock_s _cacheLock;
	HKSPSleepSchedule* _sleepSchedule;
	HKSPSleepSettings* _sleepSettings;
	HKSPSleepEventRecord* _sleepEventRecord;
	unsigned long long _sleepScheduleState;
	long long _sleepMode;

}

@property (nonatomic,readonly) os_unfair_lock_s cacheLock;                                //@synthesize cacheLock=_cacheLock - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepSchedule * sleepSchedule;                    //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (nonatomic,readonly) BOOL sleepScheduleNeedsUpdate;                             //@synthesize sleepScheduleNeedsUpdate=_sleepScheduleNeedsUpdate - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepSettings * sleepSettings;                    //@synthesize sleepSettings=_sleepSettings - In the implementation block
@property (nonatomic,readonly) BOOL sleepSettingsNeedsUpdate;                             //@synthesize sleepSettingsNeedsUpdate=_sleepSettingsNeedsUpdate - In the implementation block
@property (nonatomic,copy,readonly) HKSPSleepEventRecord * sleepEventRecord;              //@synthesize sleepEventRecord=_sleepEventRecord - In the implementation block
@property (nonatomic,readonly) BOOL sleepEventRecordNeedsUpdate;                          //@synthesize sleepEventRecordNeedsUpdate=_sleepEventRecordNeedsUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepScheduleState;                     //@synthesize sleepScheduleState=_sleepScheduleState - In the implementation block
@property (nonatomic,readonly) BOOL sleepScheduleStateNeedsUpdate;                        //@synthesize sleepScheduleStateNeedsUpdate=_sleepScheduleStateNeedsUpdate - In the implementation block
@property (nonatomic,readonly) long long sleepMode;                                       //@synthesize sleepMode=_sleepMode - In the implementation block
@property (nonatomic,readonly) BOOL sleepModeNeedsUpdate;                                 //@synthesize sleepModeNeedsUpdate=_sleepModeNeedsUpdate - In the implementation block
-(HKSPSleepSchedule *)sleepSchedule;
-(unsigned long long)sleepScheduleState;
-(void)updateCachedSleepEventRecord:(id)arg1 ;
-(id)cachedSleepScheduleStateWithMissHandler:(/*^block*/id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(BOOL)sleepScheduleNeedsUpdate;
-(id)init;
-(long long)sleepMode;
-(void)_locked_purgeCachedSleepScheduleState;
-(void)updateCachedSleepMode:(long long)arg1 ;
-(void)_locked_purgeCachedSleepMode;
-(BOOL)sleepModeNeedsUpdate;
-(void)updateCachedSleepScheduleState:(unsigned long long)arg1 ;
-(void)purgeCachedSleepEventRecord;
-(BOOL)sleepSettingsNeedsUpdate;
-(id)cachedSleepScheduleWithMissHandler:(/*^block*/id)arg1 ;
-(HKSPSleepEventRecord *)sleepEventRecord;
-(void)purgeCachedSleepSchedule;
-(void)_locked_purgeCachedSleepEventRecord;
-(void)purgeCachedSleepMode;
-(id)cachedSleepSettingsWithMissHandler:(/*^block*/id)arg1 ;
-(BOOL)sleepScheduleStateNeedsUpdate;
-(void)updateCachedSleepSettings:(id)arg1 ;
-(void)updateCachedSleepSchedule:(id)arg1 ;
-(BOOL)sleepEventRecordNeedsUpdate;
-(void)_locked_purgeCachedSleepSchedule;
-(void)purgeCachedSleepSettings;
-(void)_locked_purgeCachedSleepSettings;
-(id)cachedSleepEventRecordWithMissHandler:(/*^block*/id)arg1 ;
-(void)purgeCache;
-(os_unfair_lock_s)cacheLock;
-(id)cachedSleepModeWithMissHandler:(/*^block*/id)arg1 ;
-(void)purgeCachedSleepScheduleState;
-(HKSPSleepSettings *)sleepSettings;
@end
