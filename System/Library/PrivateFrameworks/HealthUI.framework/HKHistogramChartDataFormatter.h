/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKUnit;

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter {

	HKUnit* _unit;

}

@property (nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
-(HKUnit *)unit;
-(id)initWithUnit:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)formattedUnitStringForChartData:(id)arg1 ;
-(id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2 ;
-(id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3 ;
@end

