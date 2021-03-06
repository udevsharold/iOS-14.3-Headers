/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKChartAxisDimensionUsingTable.h>

@class HKTimeSinceStartOfDayNumberFormatter;

@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable {

	HKTimeSinceStartOfDayNumberFormatter* _numberFormatter;

}

@property (nonatomic,readonly) HKTimeSinceStartOfDayNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(HKTimeSinceStartOfDayNumberFormatter *)numberFormatter;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithStepSizeTable:(HKStepSizeTableEntryDefn*)arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4 ;
@end

