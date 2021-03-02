/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UINavigationBarAppearance, UILabel, UINavigationItem, NSArray, UIView, SBHFeatherBlurView;

@interface SBHFeatherBlurNavigationBar : UINavigationBar {

	UINavigationBarAppearance* _barAppearance;
	UILabel* _featherBlurTitleLabel;
	UINavigationItem* _configuredForItem;
	NSArray* _maskLayers;
	double _largeTextHeight;
	UIView* _capturedLargeTextLabelContainerView;
	UIView* _capturedTinyTextLabelContainerView;
	BOOL _allowsAnimatedUpdating;
	SBHFeatherBlurView* _featherBlurBackgroundView;
	double _sb_minimumNavbarHeight;
	double _sb_maximumNavbarHeight;
	CGRect _gradientMaskFrame;

}

@property (nonatomic,retain) SBHFeatherBlurView * featherBlurBackgroundView;              //@synthesize featherBlurBackgroundView=_featherBlurBackgroundView - In the implementation block
@property (nonatomic,readonly) CGRect gradientMaskFrame;                                  //@synthesize gradientMaskFrame=_gradientMaskFrame - In the implementation block
@property (nonatomic,readonly) double sb_minimumNavbarHeight;                             //@synthesize sb_minimumNavbarHeight=_sb_minimumNavbarHeight - In the implementation block
@property (nonatomic,readonly) double sb_maximumNavbarHeight;                             //@synthesize sb_maximumNavbarHeight=_sb_maximumNavbarHeight - In the implementation block
@property (assign,nonatomic) BOOL allowsAnimatedUpdating;                                 //@synthesize allowsAnimatedUpdating=_allowsAnimatedUpdating - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)sb_minimumNavbarHeight;
-(double)sb_maximumNavbarHeight;
-(CGRect)gradientMaskFrame;
-(void)setAllowsAnimatedUpdating:(BOOL)arg1 ;
-(void)_updateLabel;
-(void)_updateHeights;
-(CGRect)_calculateCompactNavBarFrame;
-(CGRect)_calculateFeatherBlurBackgroundViewFrame;
-(id)_capturedTinyTextLabelContainerView;
-(id)_capturedLargeTextLabelContainerView;
-(SBHFeatherBlurView *)featherBlurBackgroundView;
-(void)setFeatherBlurBackgroundView:(SBHFeatherBlurView *)arg1 ;
-(BOOL)allowsAnimatedUpdating;
-(void)_updateAppearance;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)barPosition;
-(double)_topMargin;
@end
