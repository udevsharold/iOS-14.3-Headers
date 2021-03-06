/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardUIServices/SBUIVibrantButton.h>

@protocol CSWallpaperView, CSWallpaperColorProvider, CSWallpaperViewProviding;
@class UIView;

@interface CSVibrantWallpaperButton : SBUIVibrantButton {

	UIView*<CSWallpaperView> _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (nonatomic,readonly) UIView*<CSWallpaperView> effectView;                                   //@synthesize effectView=_effectView - In the implementation block
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setLegibilitySettings:(id)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateVibrancy;
-(UIView*<CSWallpaperView>)effectView;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
@end

