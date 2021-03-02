/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIBackdropView, UIColor, SKUIPlayButtonShapeView, UIView, UIImage, SKUIPlayButtonGradientView, NSArray, UIImageView, NSString, SKUIButtonViewElement;

@interface SKUIPlayButtonControl : UIControl {

	_UIBackdropView* _backdropView;
	UIColor* _backgroundColor;
	long long _backgroundType;
	SKUIPlayButtonShapeView* _borderLayer;
	UIView* _backgroundView;
	UIColor* _bufferProgressIndicatorColor;
	UIColor* _controlForeGroundColor;
	id _bufferProgressIndicatorCompositingFilter;
	UIImage* _customPlayImage;
	UIImage* _customToggleImage;
	BOOL _didInitialHighlightForTouch;
	SKUIPlayButtonGradientView* _gradientBackgroundView;
	NSArray* _gradientColors;
	long long _gradientType;
	UIImageView* _imageView;
	SKUIPlayButtonShapeView* _innerProgressLayer;
	BOOL _indeterminate;
	SKUIPlayButtonShapeView* _outerProgressLayer;
	float _progress;
	SKUIPlayButtonShapeView* _selectedLayer;
	BOOL _showingProgress;
	UIColor* _progressIndicatorColor;
	id _progressIndicatorCompositingFilter;
	UIColor* _selectionColor;
	id _selectionCompositingFilter;
	BOOL _usesBlurredBackground;
	BOOL _showingPlayIndicator;
	BOOL _showBorder;
	BOOL _showOuterBorder;
	BOOL _disabledButSelectable;
	NSString* _backdropGroupName;
	UIImage* _backgroundImageForBlurring;
	SKUIButtonViewElement* _element;
	UIEdgeInsets _bigHitInsets;

}

@property (assign,nonatomic,__weak) UIImage * backgroundImageForBlurring;                            //@synthesize backgroundImageForBlurring=_backgroundImageForBlurring - In the implementation block
@property (assign,getter=isDisabledButSelectable,nonatomic) BOOL disabledButSelectable;              //@synthesize disabledButSelectable=_disabledButSelectable - In the implementation block
@property (nonatomic,retain) SKUIButtonViewElement * element;                                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) long long backgroundType;                                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,readonly) UIColor * controlForeGroundColor;                                     //@synthesize controlForeGroundColor=_controlForeGroundColor - In the implementation block
@property (nonatomic,retain) UIImage * customPlayImage;                                              //@synthesize customPlayImage=_customPlayImage - In the implementation block
@property (nonatomic,retain) UIImage * customToggleImage;                                            //@synthesize customToggleImage=_customToggleImage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bigHitInsets;                                              //@synthesize bigHitInsets=_bigHitInsets - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                             //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;                            //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) UIColor * progressIndicatorColor;                                         //@synthesize progressIndicatorColor=_progressIndicatorColor - In the implementation block
@property (nonatomic,readonly) BOOL showingPlayIndicator;                                            //@synthesize showingPlayIndicator=_showingPlayIndicator - In the implementation block
@property (nonatomic,readonly) BOOL showingProgress;                                                 //@synthesize showingProgress=_showingProgress - In the implementation block
@property (assign,nonatomic) BOOL showOuterBorder;                                                   //@synthesize showOuterBorder=_showOuterBorder - In the implementation block
+(id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4 ;
+(id)blurColorForColor:(id)arg1 ;
+(SCD_Struct_SK25)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2 ;
-(void)refresh;
-(id)_imageView;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(id)_backgroundView;
-(void)setControlColor:(id)arg1 ;
-(NSString *)backdropGroupName;
-(CGRect)hitRect;
-(void)endIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)setShowOuterBorder:(BOOL)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
-(void)_updateEnabledState;
-(void)_showPlayIndicator:(BOOL)arg1 ;
-(void)_toggleToPlayState;
-(id)outerBorderColor;
-(void)_updateInnerProgressLayerStroke;
-(id)_gradientBackgroundView;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)backgroundType;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setBackgroundType:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIImageView *)imageView;
-(CGSize)buttonSize;
-(void)_prepareForReuse;
-(void)layoutSubviews;
-(void)updateOuterProgressLayerStroke;
-(id)_outerProgressLayer;
-(id)_innerProgressLayer;
-(void)_beginIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)setProgress:(float)arg1 ;
-(id)defaultBackgroundColor;
-(id)_borderLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setElement:(SKUIButtonViewElement *)arg1 ;
-(float)buttonCornerRadius;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(SKUIButtonViewElement *)element;
-(float)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_defaultBackgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)playImage;
-(id)_playImage;
-(void)_createGradient:(id)arg1 withGradientType:(long long)arg2 ;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
-(BOOL)showingProgress;
-(id)_selectedLayer;
-(BOOL)isDisabledButSelectable;
-(BOOL)_renderAsEnabled;
-(id)_classicBackdropView;
-(void)_updateBackdropView;
-(void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(float)playButtonDefaultAlpha;
-(void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
-(void)showPlayIndicator:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)showOuterBorder;
-(id)cancelImage;
-(void)_useBlurredBackground:(BOOL)arg1 ;
-(void)setControlForegroundColor:(id)arg1 ;
-(void)setSelectionColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(id)_cancelImage;
-(void)playIndicatorDidChange:(BOOL)arg1 ;
-(void)setDisabledButSelectable:(BOOL)arg1 ;
-(void)setProgressIndicatorColor:(UIColor *)arg1 ;
-(void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2 ;
-(void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2 ;
-(void)setCustomPlayImage:(UIImage *)arg1 ;
-(id)_simpleBackdrop;
-(UIColor *)controlForeGroundColor;
-(UIImage *)customPlayImage;
-(UIImage *)customToggleImage;
-(void)setCustomToggleImage:(UIImage *)arg1 ;
-(BOOL)showingPlayIndicator;
-(UIColor *)progressIndicatorColor;
-(UIImage *)backgroundImageForBlurring;
-(void)setBackgroundImageForBlurring:(UIImage *)arg1 ;
@end
