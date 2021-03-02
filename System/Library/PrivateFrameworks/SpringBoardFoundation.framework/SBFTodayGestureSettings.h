/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBFTodayGestureSettings : PTSettings {

	BOOL _scaleAnimationSettingsWithGestureVelocity;
	double _sideSpringTension;
	double _sideSpringFriction;
	double _interactiveSideSpringTension;
	double _interactiveSideSpringFriction;
	SBFFluidBehaviorSettings* _overlayPositionSettings;
	SBFFluidBehaviorSettings* _overlayBackdropSettings;
	double _minimumVelocity;
	double _maximumVelocity;
	double _dampingRatioAtMinimumVelocity;
	double _dampingRatioAtMaximumVelocity;
	double _responseAtMinimumVelocity;
	double _responseAtMaximumVelocity;

}

@property (assign,nonatomic) double sideSpringTension;                                        //@synthesize sideSpringTension=_sideSpringTension - In the implementation block
@property (assign,nonatomic) double sideSpringFriction;                                       //@synthesize sideSpringFriction=_sideSpringFriction - In the implementation block
@property (assign,nonatomic) double interactiveSideSpringTension;                             //@synthesize interactiveSideSpringTension=_interactiveSideSpringTension - In the implementation block
@property (assign,nonatomic) double interactiveSideSpringFriction;                            //@synthesize interactiveSideSpringFriction=_interactiveSideSpringFriction - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * overlayPositionSettings;              //@synthesize overlayPositionSettings=_overlayPositionSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * overlayBackdropSettings;              //@synthesize overlayBackdropSettings=_overlayBackdropSettings - In the implementation block
@property (assign,nonatomic) BOOL scaleAnimationSettingsWithGestureVelocity;                  //@synthesize scaleAnimationSettingsWithGestureVelocity=_scaleAnimationSettingsWithGestureVelocity - In the implementation block
@property (assign,nonatomic) double minimumVelocity;                                          //@synthesize minimumVelocity=_minimumVelocity - In the implementation block
@property (assign,nonatomic) double maximumVelocity;                                          //@synthesize maximumVelocity=_maximumVelocity - In the implementation block
@property (assign,nonatomic) double dampingRatioAtMinimumVelocity;                            //@synthesize dampingRatioAtMinimumVelocity=_dampingRatioAtMinimumVelocity - In the implementation block
@property (assign,nonatomic) double dampingRatioAtMaximumVelocity;                            //@synthesize dampingRatioAtMaximumVelocity=_dampingRatioAtMaximumVelocity - In the implementation block
@property (assign,nonatomic) double responseAtMinimumVelocity;                                //@synthesize responseAtMinimumVelocity=_responseAtMinimumVelocity - In the implementation block
@property (assign,nonatomic) double responseAtMaximumVelocity;                                //@synthesize responseAtMaximumVelocity=_responseAtMaximumVelocity - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSideSpringTension:(double)arg1 ;
-(void)setSideSpringFriction:(double)arg1 ;
-(void)setInteractiveSideSpringTension:(double)arg1 ;
-(void)setInteractiveSideSpringFriction:(double)arg1 ;
-(SBFFluidBehaviorSettings *)overlayPositionSettings;
-(SBFFluidBehaviorSettings *)overlayBackdropSettings;
-(void)setScaleAnimationSettingsWithGestureVelocity:(BOOL)arg1 ;
-(void)setMinimumVelocity:(double)arg1 ;
-(void)setMaximumVelocity:(double)arg1 ;
-(void)setDampingRatioAtMinimumVelocity:(double)arg1 ;
-(void)setDampingRatioAtMaximumVelocity:(double)arg1 ;
-(void)setResponseAtMinimumVelocity:(double)arg1 ;
-(void)setResponseAtMaximumVelocity:(double)arg1 ;
-(void)setOverlayPositionSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setOverlayBackdropSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(BOOL)scaleAnimationSettingsWithGestureVelocity;
-(double)minimumVelocity;
-(double)maximumVelocity;
-(double)dampingRatioAtMinimumVelocity;
-(double)dampingRatioAtMaximumVelocity;
-(double)responseAtMinimumVelocity;
-(double)sideSpringTension;
-(double)sideSpringFriction;
-(double)interactiveSideSpringTension;
-(double)interactiveSideSpringFriction;
-(double)responseAtMaximumVelocity;
@end
