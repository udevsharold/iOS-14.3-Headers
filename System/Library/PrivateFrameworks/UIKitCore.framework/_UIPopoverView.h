/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	BOOL _showsBackgroundComponentHighlights;
	BOOL _showsBackgroundViewHighlight;
	BOOL _showsContentViewHighlight;
	BOOL _contentExtendsOverArrow;
	BOOL _chromeHidden;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) BOOL showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) BOOL showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (nonatomic,readonly) BOOL contentExtendsOverArrow;                       //@synthesize contentExtendsOverArrow=_contentExtendsOverArrow - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (assign,nonatomic) BOOL chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(int)_style;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3 contentExtendsOverArrow:(BOOL)arg4 ;
-(long long)backgroundStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)backgroundView;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_hideArrow;
-(void)setUseToolbarShine:(BOOL)arg1 ;
-(id)_normalInheritedTintColor;
-(void)_showArrow;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(unsigned long long)arrowDirection;
-(UIActionSheet *)presentedActionSheet;
-(void)layoutSubviews;
-(CGRect)_snapshotBounds;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
-(UIColor *)popoverBackgroundColor;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(BOOL)chromeHidden;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(UIPopoverController *)popoverController;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(UIColor *)arrowBackgroundColor;
-(BOOL)contentExtendsOverArrow;
-(void)setChromeHidden:(BOOL)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(id)contentView;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_performBlockCheckingDefinesTintColor:(/*^block*/id)arg1 ;
-(id)toolbarShine;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
-(BOOL)_allowsCustomizationOfContent;
-(BOOL)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(BOOL)arg1 ;
-(BOOL)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(BOOL)arg1 ;
-(BOOL)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(BOOL)arg1 ;
-(BOOL)_definesTintColor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setCornerRadius:(double)arg1 ;
@end

