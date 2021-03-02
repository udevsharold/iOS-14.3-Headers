/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class MTVisualStylingProvider, UILongPressGestureRecognizer, CCUICAPackageDescription, UIImage, NSString, UIColor, UIView, UIImageView, CCUICAPackageView;

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {

	MTVisualStylingProvider* _visualStylingProvider;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _useAlternateBackground;
	CCUICAPackageDescription* _glyphPackageDescription;
	UIImage* _glyphImage;
	NSString* _glyphState;
	UIColor* _highlightColor;
	UIView* _normalStateBackgroundView;
	UIView* _selectedStateBackgroundView;
	UIView* _alternateSelectedStateBackgroundView;
	UIImageView* _glyphImageView;
	UIImageView* _selectedGlyphView;
	CCUICAPackageView* _glyphPackageView;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIView * normalStateBackgroundView;                              //@synthesize normalStateBackgroundView=_normalStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedStateBackgroundView;                            //@synthesize selectedStateBackgroundView=_selectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * alternateSelectedStateBackgroundView;                   //@synthesize alternateSelectedStateBackgroundView=_alternateSelectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;                                    //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIImageView * selectedGlyphView;                                 //@synthesize selectedGlyphView=_selectedGlyphView - In the implementation block
@property (nonatomic,retain) CCUICAPackageView * glyphPackageView;                            //@synthesize glyphPackageView=_glyphPackageView - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (assign,nonatomic) BOOL useAlternateBackground;                                     //@synthesize useAlternateBackground=_useAlternateBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)selectedStateBackgroundView;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setNormalStateBackgroundView:(UIView *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(UIView *)normalStateBackgroundView;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(void)setSelectedStateBackgroundView:(UIView *)arg1 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)_updateForStateChange;
-(CGSize)intrinsicContentSize;
-(BOOL)useAlternateBackground;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(NSString *)glyphState;
-(void)_updateVisualStylingOfGlyphView:(id)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(UIImage *)glyphImage;
-(id)initWithHighlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)dealloc;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)_deactivateReachability:(id)arg1 ;
-(UIImageView *)selectedGlyphView;
-(void)setGlyphPackageView:(CCUICAPackageView *)arg1 ;
-(void)setSelectedGlyphView:(UIImageView *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIView *)alternateSelectedStateBackgroundView;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(CCUICAPackageView *)glyphPackageView;
-(void)layoutSubviews;
-(void)_primaryActionPerformed:(id)arg1 ;
-(double)_cornerRadius;
-(void)didMoveToWindow;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlternateSelectedStateBackgroundView:(UIView *)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(UIImageView *)glyphImageView;
@end
