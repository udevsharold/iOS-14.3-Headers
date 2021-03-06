/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUBackgroundEffectViewGrouping;
@class HUGridCellBackgroundDisplayOptions, UIColor, UIBlurEffect, HFWallpaperSlice, UIVisualEffectView, UIView;

@interface HUGridCellBackgroundView : UIView {

	BOOL _pressed;
	unsigned long long _backgroundState;
	HUGridCellBackgroundDisplayOptions* _displayOptions;
	UIColor* _backgroundTintColor;
	UIBlurEffect* _overrideBackgroundEffect;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	id<HUBackgroundEffectViewGrouping> _backgroundEffectViewGrouper;
	double _cornerRadius;
	UIVisualEffectView* _effectView;
	UIView* _ccOnMaterialView;
	UIView* _ccOffMaterialView;
	UIView* _ccHighlightMaterialView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * ccOnMaterialView;                                                          //@synthesize ccOnMaterialView=_ccOnMaterialView - In the implementation block
@property (nonatomic,retain) UIView * ccOffMaterialView;                                                         //@synthesize ccOffMaterialView=_ccOffMaterialView - In the implementation block
@property (nonatomic,retain) UIView * ccHighlightMaterialView;                                                   //@synthesize ccHighlightMaterialView=_ccHighlightMaterialView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundState;                                                 //@synthesize backgroundState=_backgroundState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                                      //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) HUGridCellBackgroundDisplayOptions * displayOptions;                                //@synthesize displayOptions=_displayOptions - In the implementation block
@property (nonatomic,retain) UIColor * backgroundTintColor;                                                      //@synthesize backgroundTintColor=_backgroundTintColor - In the implementation block
@property (nonatomic,retain) UIBlurEffect * overrideBackgroundEffect;                                            //@synthesize overrideBackgroundEffect=_overrideBackgroundEffect - In the implementation block
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                     //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,nonatomic,__weak) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;              //@synthesize backgroundEffectViewGrouper=_backgroundEffectViewGrouper - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)_sharedBlurEffect;
-(void)setPressed:(BOOL)arg1 ;
-(void)_updateBackgroundColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)dealloc;
-(void)_updateHighlightView;
-(void)_updateCornerRadius;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)_updateDisplay;
-(BOOL)isPressed;
-(id)_normalBackgroundColor;
-(UIVisualEffectView *)effectView;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)setOverrideBackgroundEffect:(UIBlurEffect *)arg1 ;
-(unsigned long long)backgroundState;
-(void)setDisplayOptions:(HUGridCellBackgroundDisplayOptions *)arg1 ;
-(UIView *)ccOffMaterialView;
-(HUGridCellBackgroundDisplayOptions *)displayOptions;
-(void)setCcOffMaterialView:(UIView *)arg1 ;
-(UIView *)ccOnMaterialView;
-(void)setCcOnMaterialView:(UIView *)arg1 ;
-(UIView *)ccHighlightMaterialView;
-(void)setCcHighlightMaterialView:(UIView *)arg1 ;
-(id<HUBackgroundEffectViewGrouping>)backgroundEffectViewGrouper;
-(BOOL)_shouldUsePrecomputedWallpaperContents;
-(void)_updateWallpaperContentsRect;
-(void)_updateWallpaperContentsScale;
-(BOOL)_shouldUseCCMaterialView;
-(void)_createOffCCMaterialViewIfNecessary;
-(void)_createOnCCMaterialViewIfNecessary;
-(void)_createHighlightCCMateriaViewIfNecessary;
-(BOOL)_shouldUseVisualEffectStyle;
-(void)_createEffectViewIfNecessary;
-(UIBlurEffect *)overrideBackgroundEffect;
-(CGRect)normalizedWallpaperRect;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
-(void)setBackgroundEffectViewGrouper:(id<HUBackgroundEffectViewGrouping>)arg1 ;
-(void)setBackgroundState:(unsigned long long)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end

