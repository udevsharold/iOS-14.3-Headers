/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSAccessoryViewController.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@protocol SBFDateProviding;
@class _UILegibilitySettings, SBFLockScreenDateViewController, BCBatteryDeviceController, CSAccessorySleeveView, BrightnessSystemClient, NSString;

@interface CSAccessorySleeveViewController : CSAccessoryViewController <BCBatteryDeviceObserving> {

	BOOL _chargingAnimationVisible;
	_UILegibilitySettings* _legibilitySettings;
	id<SBFDateProviding> _dateProvider;
	SBFLockScreenDateViewController* _dateViewController;
	SBFLockScreenDateViewController* _secodaryDateViewController;
	BCBatteryDeviceController* _batteryDeviceController;
	CSAccessorySleeveView* _sleeveView;
	BrightnessSystemClient* _brightnessClient;
	CGRect _visibleBounds;

}

@property (nonatomic,retain) SBFLockScreenDateViewController * dateViewController;                      //@synthesize dateViewController=_dateViewController - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateViewController * secodaryDateViewController;              //@synthesize secodaryDateViewController=_secodaryDateViewController - In the implementation block
@property (nonatomic,retain) BCBatteryDeviceController * batteryDeviceController;                       //@synthesize batteryDeviceController=_batteryDeviceController - In the implementation block
@property (nonatomic,retain) CSAccessorySleeveView * sleeveView;                                        //@synthesize sleeveView=_sleeveView - In the implementation block
@property (assign,nonatomic) BOOL chargingAnimationVisible;                                             //@synthesize chargingAnimationVisible=_chargingAnimationVisible - In the implementation block
@property (nonatomic,retain) BrightnessSystemClient * brightnessClient;                                 //@synthesize brightnessClient=_brightnessClient - In the implementation block
@property (nonatomic,retain) id<SBFDateProviding> dateProvider;                                         //@synthesize dateProvider=_dateProvider - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                      //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)visibleBounds;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(id)accessoryView;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SBFLockScreenDateViewController *)dateViewController;
-(BOOL)handleEvent:(id)arg1 ;
-(void)setDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(id<SBFDateProviding>)dateProvider;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDateProvider:(id<SBFDateProviding>)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(BCBatteryDeviceController *)batteryDeviceController;
-(void)viewDidLoad;
-(double)animationDurationBeforeDismissal;
-(BOOL)hasChargingAnimation;
-(BOOL)showingChargingAnimation;
-(BOOL)isStatic;
-(void)transitionChargingViewVisible:(BOOL)arg1 chargingInfo:(id)arg2 ;
-(double)chargingAnimationDuration;
-(CSAccessorySleeveView *)sleeveView;
-(SBFLockScreenDateViewController *)secodaryDateViewController;
-(void)_updateOverrideFloor;
-(void)_removeOverrideFloor;
-(void)updateViewWithBatteryCharging:(BOOL)arg1 ;
-(void)setSecodaryDateViewController:(SBFLockScreenDateViewController *)arg1 ;
-(void)setBatteryDeviceController:(BCBatteryDeviceController *)arg1 ;
-(void)setSleeveView:(CSAccessorySleeveView *)arg1 ;
-(BOOL)chargingAnimationVisible;
-(void)setChargingAnimationVisible:(BOOL)arg1 ;
-(BrightnessSystemClient *)brightnessClient;
-(void)setBrightnessClient:(BrightnessSystemClient *)arg1 ;
@end

