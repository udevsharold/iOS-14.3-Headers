/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, CCUICAPackageDescription, UIImage, UIColor, CCUILabeledRoundButton, UIControl;

@interface CCUILabeledRoundButtonViewController : UIViewController {

	BOOL _labelsVisible;
	BOOL _toggleStateOnTap;
	BOOL _useAlternateBackground;
	BOOL _enabled;
	BOOL _inoperative;
	BOOL _useLightStyle;
	NSString* _subtitle;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	UIImage* _glyphImage;
	NSString* _contentSizeCategoryThreshold;
	UIColor* _highlightColor;
	CCUILabeledRoundButton* _buttonContainer;
	UIControl* _button;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) BOOL useLightStyle;                                              //@synthesize useLightStyle=_useLightStyle - In the implementation block
@property (nonatomic,retain) CCUILabeledRoundButton * buttonContainer;                        //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIControl * button;                                              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL labelsVisible;                                              //@synthesize labelsVisible=_labelsVisible - In the implementation block
@property (assign,nonatomic) BOOL toggleStateOnTap;                                           //@synthesize toggleStateOnTap=_toggleStateOnTap - In the implementation block
@property (assign,nonatomic) BOOL useAlternateBackground;                                     //@synthesize useAlternateBackground=_useAlternateBackground - In the implementation block
@property (assign,nonatomic) NSString * contentSizeCategoryThreshold;                         //@synthesize contentSizeCategoryThreshold=_contentSizeCategoryThreshold - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInoperative,nonatomic) BOOL inoperative;                           //@synthesize inoperative=_inoperative - In the implementation block
-(void)setLabelsVisible:(BOOL)arg1 ;
-(CCUILabeledRoundButton *)buttonContainer;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(BOOL)labelsVisible;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(void)setUseAlternateBackground:(BOOL)arg1 ;
-(void)setButtonContainer:(CCUILabeledRoundButton *)arg1 ;
-(NSString *)subtitle;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(BOOL)useAlternateBackground;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(NSString *)glyphState;
-(void)setUseLightStyle:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(void)setContentSizeCategoryThreshold:(NSString *)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(UIImage *)glyphImage;
-(BOOL)isEnabled;
-(BOOL)isInoperative;
-(NSString *)contentSizeCategoryThreshold;
-(void)setGlyphState:(NSString *)arg1 ;
-(BOOL)useLightStyle;
-(void)buttonTapped:(id)arg1 ;
-(UIControl *)button;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)toggleStateOnTap;
-(void)setInoperative:(BOOL)arg1 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)setToggleStateOnTap:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)loadView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

