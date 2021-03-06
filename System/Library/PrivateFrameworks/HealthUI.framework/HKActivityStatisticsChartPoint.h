/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, HKUnit, NSArray, HKActivityStatisticsChartPointSummary, NSNumber, NSString;

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	HKUnit* _unit;
	NSArray* _nodes;
	HKActivityStatisticsChartPointSummary* _summary;
	NSNumber* _totalActiveEnergyBurned;
	NSNumber* _moveGoalValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)yValue;
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4 ;
-(double)_nodesCaloriesPercentDifference;
@end

