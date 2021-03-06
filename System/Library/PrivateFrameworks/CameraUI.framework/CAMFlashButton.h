/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _allowsAutomaticFlash;
	BOOL _unavailable;
	UIImageView* __glyphView;
	UIImageView* __warningIndicatorView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                         //@synthesize _glyphView=__glyphView - In the implementation block
@property (nonatomic,readonly) UIImageView * _warningIndicatorView;              //@synthesize _warningIndicatorView=__warningIndicatorView - In the implementation block
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) BOOL allowsAutomaticFlash;                          //@synthesize allowsAutomaticFlash=_allowsAutomaticFlash - In the implementation block
@property (assign,getter=isUnavailable,nonatomic) BOOL unavailable;              //@synthesize unavailable=_unavailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)indexForMode:(long long)arg1 ;
-(double)padHeaderViewContentInsetLeft;
-(long long)modeForIndex:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(UIImageView *)_glyphView;
-(long long)numberOfMenuItems;
-(long long)flashMode;
-(id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1 ;
-(void)_updateCurrentGlyphImage;
-(void)reloadData;
-(UIImageView *)_warningIndicatorView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(id)imageForAccessibilityHUD;
-(id)headerView;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(void)_commonCAMFlashButtonInitialization;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 ;
-(double)collapsedSelectedLabelHorizontalMargin;
-(BOOL)allowsAutomaticFlash;
-(BOOL)isUnavailable;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)wantsSelectedItemToBeVisible;
-(BOOL)shouldIgnoreMenuInteraction;
-(void)setUnavailable:(BOOL)arg1 ;
@end

