/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FIUIBreathingPetalRingViewDrawable.h>

@protocol FIUIDeepBreathingPetalRingViewDelegate;
@class UIView, MTKView, FIUIBreathingPetalRingMetalRenderer, NSString;

@interface FIUIBreathingPetalRingMetalView : UIView <FIUIBreathingPetalRingViewDrawable> {

	BOOL _showBlurTrails;
	id<FIUIDeepBreathingPetalRingViewDelegate> _petalRingDelegate;
	long long _numberOfPetals;
	MTKView* _mtkView;
	FIUIBreathingPetalRingMetalRenderer* _renderer;

}

@property (nonatomic,retain) MTKView * mtkView;                                                                //@synthesize mtkView=_mtkView - In the implementation block
@property (nonatomic,retain) FIUIBreathingPetalRingMetalRenderer * renderer;                                   //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic,__weak) id<FIUIDeepBreathingPetalRingViewDelegate> petalRingDelegate;              //@synthesize petalRingDelegate=_petalRingDelegate - In the implementation block
@property (assign,nonatomic) CGPoint ringCenter; 
@property (assign,nonatomic) float ringRadius; 
@property (nonatomic,readonly) long long numberOfPetals;                                                       //@synthesize numberOfPetals=_numberOfPetals - In the implementation block
@property (nonatomic,readonly) long long numberOfVisiblePetals; 
@property (nonatomic,readonly) BOOL showBlurTrails;                                                            //@synthesize showBlurTrails=_showBlurTrails - In the implementation block
@property (assign,nonatomic) float preferredFramesPerSecond; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FIUIBreathingPetalRingMetalRenderer *)renderer;
-(UIView *)view;
-(void)setPreferredFramesPerSecond:(float)arg1 ;
-(void)layoutSubviews;
-(void)setRenderer:(FIUIBreathingPetalRingMetalRenderer *)arg1 ;
-(MTKView *)mtkView;
-(float)preferredFramesPerSecond;
-(void)setRingRadius:(float)arg1 ;
-(float)ringRadius;
-(id<FIUIDeepBreathingPetalRingViewDelegate>)petalRingDelegate;
-(void)setRingCenter:(CGPoint)arg1 ;
-(CGPoint)ringCenter;
-(long long)numberOfVisiblePetals;
-(void)setPetalAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4 ;
-(void)setBlurTrailAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5 ;
-(void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2 ;
-(void)setGradientRotationAngle:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3 device:(id)arg4 ;
-(void)importDataFromPetalRing:(id)arg1 ;
-(void)setPetalRingDelegate:(id<FIUIDeepBreathingPetalRingViewDelegate>)arg1 ;
-(long long)numberOfPetals;
-(BOOL)showBlurTrails;
-(void)setMtkView:(MTKView *)arg1 ;
@end
