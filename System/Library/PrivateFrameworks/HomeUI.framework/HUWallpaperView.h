/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUBackgroundEffectViewGrouping.h>

@class UIVisualEffect, HFWallpaperSlice, UIView, UIVisualEffectView, CABackdropLayer, NSString;

@interface HUWallpaperView : UIView <HUBackgroundEffectViewGrouping> {

	HFWallpaperSlice* _wallpaperSlice;
	UIView* _wallpaperContentView;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) UIView * wallpaperContentView;                      //@synthesize wallpaperContentView=_wallpaperContentView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
@property (nonatomic,retain) HFWallpaperSlice * wallpaperSlice;                  //@synthesize wallpaperSlice=_wallpaperSlice - In the implementation block
@property (nonatomic,readonly) UIVisualEffect * sharedEffect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedBlurEffect;
-(void)updateConstraints;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(CABackdropLayer *)backdropLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setWallpaperContentView:(UIView *)arg1 ;
-(UIView *)wallpaperContentView;
-(void)_updateVisualEffectView;
-(HFWallpaperSlice *)wallpaperSlice;
-(void)backgroundEffectAddCaptureDependent:(id)arg1 ;
-(void)backgroundEffectRemoveCaptureDependent:(id)arg1 ;
-(UIVisualEffect *)sharedEffect;
-(CGRect)normalizedWallpaperRectForFrameInWindowSpace:(CGRect)arg1 ;
@end
