/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableDictionary, HKHealthStore;

@interface HKUnitPreferenceController : NSObject {

	NSMutableDictionary* _unitStrings;
	NSMutableDictionary* _unitPreferencesByObjectType;
	os_unfair_lock_s _lock;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)dealloc;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)unitForDisplayType:(id)arg1 ;
-(id)displayRangeForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_initHKUnitPreferences;
-(id)_lock_unitForDisplayType:(id)arg1 ;
-(void)_lock_updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(void)_postNotificationWithChangedKeys:(id)arg1 ;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 nameContext:(long long)arg3 ;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 nameContext:(long long)arg3 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 nameContext:(long long)arg3 ;
-(id)_displayNameKeyForUnit:(id)arg1 nameContext:(long long)arg2 ;
-(id)_displayNameKey:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)_longDisplayNameOverrideForDisplayType:(id)arg1 ;
-(id)_longDisplayNameForUnit:(id)arg1 ;
-(id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2 ;
-(void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1 ;
-(id)_generateDefaultHKUnitPreferences;
-(void)_refreshHKUnitPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(id)_lock_updatePreferredUnits:(id)arg1 ;
-(id)_unitDisplayNameKeyForDisplayType:(id)arg1 nameContext:(long long)arg2 ;
-(void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(id)localizedLongDisplayNameForDisplayType:(id)arg1 ;
-(double)scaleFactorForYAxisLabeling:(id)arg1 ;
@end
