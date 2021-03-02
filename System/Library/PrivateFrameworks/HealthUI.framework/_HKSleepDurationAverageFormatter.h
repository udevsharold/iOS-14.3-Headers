/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSArray;

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter {

	NSArray* _rangeDataForAverage;

}

@property (nonatomic,retain) NSArray * rangeDataForAverage;              //@synthesize rangeDataForAverage=_rangeDataForAverage - In the implementation block
-(id)init;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(void)setCurrentVisibleAverageNumber:(id)arg1 averageForInBed:(BOOL)arg2 ;
-(void)setRangeDataForAverage:(NSArray *)arg1 ;
-(NSArray *)rangeDataForAverage;
@end
