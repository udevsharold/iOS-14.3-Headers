/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TPTemplatedColoredImageView, UIColor;

@interface TPRevealingRingView : UIView {

	SCD_Struct_TP6 _outerViewDrawingProperties;
	_TPTemplatedColoredImageView* _outerView;
	SCD_Struct_TP6 _innerViewDrawingProperties;
	_TPTemplatedColoredImageView* _innerView;
	UIColor* _colorOutsideRing;
	UIColor* _colorInsideRing;
	UIEdgeInsets _paddingOutsideRing;
	double _defaultRingStrokeWidth;
	double _revealAnimationDuration;
	double _unrevealAnimationDuration;
	double _cornerRadius;
	BOOL _isCircularRing;
	BOOL _revealed;
	double _alphaInsideRing;
	double _alphaOutsideRing;
	UIColor* _colorInsidegamRing;

}

@property (nonatomic,readonly) CGSize ringSize; 
@property (nonatomic,readonly) UIEdgeInsets paddingOutsideRing;              //@synthesize paddingOutsideRing=_paddingOutsideRing - In the implementation block
@property (assign,nonatomic) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double defaultRingStrokeWidth;                  //@synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * colorOutsideRing;                     //@synthesize colorOutsideRing=_colorOutsideRing - In the implementation block
@property (nonatomic,retain) UIColor * colorInsideRing;                      //@synthesize colorInsidegamRing=_colorInsidegamRing - In the implementation block
@property (assign,nonatomic) double revealAnimationDuration;                 //@synthesize revealAnimationDuration=_revealAnimationDuration - In the implementation block
@property (assign,nonatomic) double unrevealAnimationDuration;               //@synthesize unrevealAnimationDuration=_unrevealAnimationDuration - In the implementation block
@property (assign,nonatomic) double alphaOutsideRing;                        //@synthesize alphaOutsideRing=_alphaOutsideRing - In the implementation block
@property (assign,nonatomic) double alphaInsideRing;                         //@synthesize alphaInsideRing=_alphaInsideRing - In the implementation block
+(id)classIdentifier;
-(CGSize)intrinsicContentSize;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)description;
-(id)initWithFrame:(CGRect)arg1 paddingOutsideRing:(UIEdgeInsets)arg2 ;
-(void)setDefaultRingStrokeWidth:(double)arg1 ;
-(void)setRevealAnimationDuration:(double)arg1 ;
-(void)setUnrevealAnimationDuration:(double)arg1 ;
-(void)layoutSubviews;
-(void)setColorInsideRing:(UIColor *)arg1 ;
-(CGSize)ringSize;
-(void)setColorOutsideRing:(UIColor *)arg1 ;
-(void)setAlphaInsideRing:(double)arg1 ;
-(void)setAlphaOutsideRing:(double)arg1 ;
-(UIEdgeInsets)paddingOutsideRing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPaddingOutsideRing:(UIEdgeInsets)arg1 ;
-(void)_evaluateCircularness;
-(void)_animateForReveal:(BOOL)arg1 withDuration:(float)arg2 delay:(double)arg3 ;
-(void)_computeOuterViewDrawingPropertiesWithScale:(double)arg1 ;
-(void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1 ;
-(void)_calculateOuter:(CGRect*)arg1 inner:(CGRect*)arg2 newXOffset:(double*)arg3 newYOffset:(double*)arg4 withScale:(double)arg5 ;
-(BOOL)_shouldDrawAsCircle:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(BOOL)_isSquare:(CGSize)arg1 ;
-(double)alphaInsideRing;
-(double)alphaOutsideRing;
-(double)defaultRingStrokeWidth;
-(double)revealAnimationDuration;
-(double)unrevealAnimationDuration;
-(UIColor *)colorOutsideRing;
-(UIColor *)colorInsideRing;
@end
