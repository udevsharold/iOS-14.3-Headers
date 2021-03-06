/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <ControlCenterUIKit/CCUIContinuousSliderView.h>

@protocol OS_dispatch_queue;
@class UIView, UIImpactFeedbackGenerator, NSObject;

@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {

	UIView* _orangeValueView;
	BOOL _didAcknowledgeThreshold;
	BOOL _didHitThreshold;
	BOOL _didTakeActionToAcknowledge;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	UIView* _materialView;
	NSObject*<OS_dispatch_queue> _avSystemControllerQueue;
	BOOL _euDevice;
	BOOL _euVolumeLimitEnforced;
	float _euVolumeLimit;

}

@property (getter=isEUDevice) BOOL euDevice;                                        //@synthesize euDevice=_euDevice - In the implementation block
@property (getter=isEUVolumeLimitEnforced) BOOL euVolumeLimitEnforced;              //@synthesize euVolumeLimitEnforced=_euVolumeLimitEnforced - In the implementation block
@property (assign) float euVolumeLimit;                                             //@synthesize euVolumeLimit=_euVolumeLimit - In the implementation block
-(void)_EUVolumeLimitChanged:(id)arg1 ;
-(float)_valueByApplyingEULimitsToValue:(float)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)setEuDevice:(BOOL)arg1 ;
-(float)filteredValueForValue:(float)arg1 ;
-(void)_serverConnectionDied:(id)arg1 ;
-(BOOL)isEUDevice;
-(void)setupEUDevice;
-(float)euVolumeLimit;
-(void)setEuVolumeLimitEnforced:(BOOL)arg1 ;
-(id)createBackgroundView;
-(void)resetThresholdAcknowledgment;
-(void)setContinuousSliderCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)_EUVolumeEnforcementChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGlyphPackageDescription:(id)arg1 state:(id)arg2 animated:(BOOL)arg3 ;
-(void)setEuVolumeLimit:(float)arg1 ;
-(void)_registerForAVSystemControllerNotifications;
-(void)_avSystemControllerQueue_initializeEUVolumeLimits;
-(BOOL)isEUVolumeLimitEnforced;
@end

