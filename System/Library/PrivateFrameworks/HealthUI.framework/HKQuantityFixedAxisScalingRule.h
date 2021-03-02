/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKValueRange, NSDictionary, HKUnit;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule {

	HKValueRange* _defaultQuantityBounds;
	NSDictionary* _quantityBoundsOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(HKUnit *)unit;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantityRanges;
-(id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2 ;
@end
