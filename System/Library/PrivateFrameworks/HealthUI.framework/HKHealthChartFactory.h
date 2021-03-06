/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKSleepDataSourceProvider.h>
#import <libobjc.A.dylib/HKCardioFitnessDataSourceProvider.h>

@protocol HKSleepDataSourceProvider, HKCardioFitnessDataSourceProvider;
@class HKHealthStore, HKInteractiveChartDataFormatter, HKDisplayTypeController, HKUnitPreferenceController, HKDisplayCategoryController, HKChartDataCacheController, HKSampleTypeUpdateController, HKDateCache, HKSelectedTimeScopeController, _HKWheelchairUseCharacteristicCache, HKSampleTypeDateRangeController, NSDictionary;

@interface HKHealthChartFactory : NSObject <HKSleepDataSourceProvider, HKCardioFitnessDataSourceProvider> {

	HKHealthStore* _healthStore;
	id<HKSleepDataSourceProvider> _sleepDataSourceProvider;
	HKInteractiveChartDataFormatter* _sleepChartFormatter;
	id<HKCardioFitnessDataSourceProvider> _cardioFitnessDataSourceProvider;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitPreferenceController;
	HKDisplayCategoryController* _displayCategoryController;
	HKChartDataCacheController* _chartDataCacheController;
	HKSampleTypeUpdateController* _sampleTypeUpdateController;
	HKDateCache* _dateCache;
	HKSelectedTimeScopeController* _selectedTimeScopeController;
	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	HKSampleTypeDateRangeController* _sampleTypeDateRangeController;
	NSDictionary* _identifierToDisplayTypeMapping;

}

@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                                     //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;                               //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) HKDisplayCategoryController * displayCategoryController;                             //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,readonly) HKChartDataCacheController * chartDataCacheController;                               //@synthesize chartDataCacheController=_chartDataCacheController - In the implementation block
@property (nonatomic,readonly) HKSampleTypeUpdateController * sampleTypeUpdateController;                           //@synthesize sampleTypeUpdateController=_sampleTypeUpdateController - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                             //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKSelectedTimeScopeController * selectedTimeScopeController;                         //@synthesize selectedTimeScopeController=_selectedTimeScopeController - In the implementation block
@property (nonatomic,readonly) _HKWheelchairUseCharacteristicCache * wheelchairUseCharacteristicCache;              //@synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache - In the implementation block
@property (nonatomic,readonly) HKSampleTypeDateRangeController * sampleTypeDateRangeController;                     //@synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController - In the implementation block
@property (nonatomic,retain) NSDictionary * identifierToDisplayTypeMapping;                                         //@synthesize identifierToDisplayTypeMapping=_identifierToDisplayTypeMapping - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) id<HKSleepDataSourceProvider> sleepDataSourceProvider;                                 //@synthesize sleepDataSourceProvider=_sleepDataSourceProvider - In the implementation block
@property (nonatomic,retain) HKInteractiveChartDataFormatter * sleepChartFormatter;                                 //@synthesize sleepChartFormatter=_sleepChartFormatter - In the implementation block
@property (nonatomic,retain) id<HKCardioFitnessDataSourceProvider> cardioFitnessDataSourceProvider;                 //@synthesize cardioFitnessDataSourceProvider=_cardioFitnessDataSourceProvider - In the implementation block
+(id)_standardIdentifierMappings;
-(id)initWithHealthStore:(id)arg1 ;
-(id)supportedTypeIdentifiers;
-(id)init;
-(HKDateCache *)dateCache;
-(HKHealthStore *)healthStore;
-(id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(CGSize)arg3 disableXAxis:(BOOL)arg4 ;
-(id)_mapTypeIdentifierToDisplayType:(id)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(HKDisplayCategoryController *)displayCategoryController;
-(HKUnitPreferenceController *)unitPreferenceController;
-(HKChartDataCacheController *)chartDataCacheController;
-(long long)_resolvedTimeScopeForTypeIdentifier:(id)arg1 displayDateInterval:(id)arg2 ;
-(HKSelectedTimeScopeController *)selectedTimeScopeController;
-(id)_customTypeIdentifierController:(id)arg1 displayDate:(id)arg2 preferredOverlay:(long long)arg3 ;
-(HKSampleTypeDateRangeController *)sampleTypeDateRangeController;
-(_HKWheelchairUseCharacteristicCache *)wheelchairUseCharacteristicCache;
-(NSDictionary *)identifierToDisplayTypeMapping;
-(id)_displayTypeForTypeIdentifier:(id)arg1 ;
-(HKSampleTypeUpdateController *)sampleTypeUpdateController;
-(id<HKSleepDataSourceProvider>)sleepDataSourceProvider;
-(HKInteractiveChartDataFormatter *)sleepChartFormatter;
-(id)standardSleepChartFormatter;
-(id<HKCardioFitnessDataSourceProvider>)cardioFitnessDataSourceProvider;
-(id)makeCardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)arg1 applicationItems:(id)arg2 preferredOverlay:(long long)arg3 ;
-(id)makeSleepDataSourceFromHealthStore:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(CGSize)arg3 ;
-(id)interactiveChartForTypeIdentifier:(id)arg1 preferredOverlay:(long long)arg2 displayDateInterval:(id)arg3 ;
-(id)activityChartForDisplayDate:(id)arg1 ;
-(id)activityChartForActivityMoveMode:(long long)arg1 displayDate:(id)arg2 ;
-(id)CHRRoomApplicationItems;
-(void)setSleepDataSourceProvider:(id<HKSleepDataSourceProvider>)arg1 ;
-(void)setSleepChartFormatter:(HKInteractiveChartDataFormatter *)arg1 ;
-(void)setCardioFitnessDataSourceProvider:(id<HKCardioFitnessDataSourceProvider>)arg1 ;
-(void)setIdentifierToDisplayTypeMapping:(NSDictionary *)arg1 ;
@end

