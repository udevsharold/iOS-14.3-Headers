/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class NSArray, NSString;

@interface HKNumericClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	NSArray* _chartBoundsRuleChoices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithChartBoundsRuleChoices:(id)arg1 ;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
@end

