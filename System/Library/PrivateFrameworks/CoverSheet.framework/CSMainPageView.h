/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UILegibilitySettings, CSVibrantWallpaperButton, SBWallpaperEffectView, NSString;

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {

	_UILegibilitySettings* _legibilitySettings;
	BOOL _logoutHugCorner;
	BOOL _fakeWallpaperVisible;
	CSVibrantWallpaperButton* _logoutButtonView;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (nonatomic,retain) CSVibrantWallpaperButton * logoutButtonView;              //@synthesize logoutButtonView=_logoutButtonView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) BOOL fakeWallpaperVisible;                                //@synthesize fakeWallpaperVisible=_fakeWallpaperVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateForLegibilitySettings:(id)arg1 ;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(id)presentationRegions;
-(void)_layoutLogoutButtonView;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setLogoutButtonView:(CSVibrantWallpaperButton *)arg1 ;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)layoutSubviews;
-(BOOL)fakeWallpaperVisible;
-(CSVibrantWallpaperButton *)logoutButtonView;
-(void)updateForPresentation:(id)arg1 ;
-(void)_layoutWallpaperEffectView;
@end

