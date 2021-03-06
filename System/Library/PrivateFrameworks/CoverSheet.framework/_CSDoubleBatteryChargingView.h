/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSBatteryChargingView.h>

@class UIView, _UIBackdropView, CSBatteryFillView, SBUILegibilityLabel, UIImageView;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {

	UIView* _batteryContainerView;
	UIView* _internalBatteryContainerView;
	UIView* _externalBatteryContainerView;
	_UIBackdropView* _internalBatteryBlurView;
	_UIBackdropView* _externalBatteryBlurView;
	CSBatteryFillView* _internalBatteryFillView;
	CSBatteryFillView* _externalBatteryFillView;
	SBUILegibilityLabel* _internalChargePercentLabel;
	SBUILegibilityLabel* _externalChargePercentLabel;
	SBUILegibilityLabel* _internalChargingNameLabel;
	SBUILegibilityLabel* _externalChargingNameLabel;
	UIImageView* _internalChargingIndicator;
	UIImageView* _externalChargingIndicator;

}
-(void)setLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_chargePercentFont;
-(long long)batteryCount;
-(double)_spaceBetweenBatteryImages;
-(double)_batteryTopPadding;
-(double)_chargingBoltTopOffset;
-(double)_deviceNameBaselineOffset;
-(double)_deviceChargeBaselineOffset;
@end

