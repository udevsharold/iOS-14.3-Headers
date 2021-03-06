/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class WFGradient, CAGradientLayer, UITraitCollection;

@interface WFWidgetFloatingLayer : CALayer {

	BOOL _pressed;
	BOOL _colorizesShadow;
	BOOL _usePillCornerRadius;
	WFGradient* _gradient;
	double _scalingFactor;
	CAGradientLayer* _gradientLayer;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) BOOL colorizesShadow;                                //@synthesize colorizesShadow=_colorizesShadow - In the implementation block
@property (assign,nonatomic) BOOL usePillCornerRadius;                            //@synthesize usePillCornerRadius=_usePillCornerRadius - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic,__weak) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,copy) WFGradient * gradient;                                 //@synthesize gradient=_gradient - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                       //@synthesize pressed=_pressed - In the implementation block
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(id)init;
-(void)layoutSublayers;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)scalingFactor;
-(void)updateBackgroundColor;
-(void)setGradient:(WFGradient *)arg1 ;
-(UITraitCollection *)traitCollection;
-(BOOL)isPressed;
-(WFGradient *)gradient;
-(void)applyConfiguration:(id)arg1 ;
-(void)setUsePillCornerRadius:(BOOL)arg1 ;
-(void)updateShadowColor;
-(BOOL)colorizesShadow;
-(void)setColorizesShadow:(BOOL)arg1 ;
-(BOOL)usePillCornerRadius;
@end

