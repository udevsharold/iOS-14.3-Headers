/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView, NSString;

@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {

	BOOL _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)padHeaderViewContentInsetLeft;
-(UIImageView *)_glyphView;
-(long long)numberOfMenuItems;
-(void)_updateCurrentGlyphImage;
-(void)reloadData;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setDuration:(long long)arg1 ;
-(id)headerView;
-(void)_commonCAMTimerButtonInitialization;
-(id)shownIndexesWhileCollapsed;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 needsReloadData:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_currentGlyphImageForAccessibiliyHUD:(BOOL)arg1 ;
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(BOOL)hideOffWhenCollapsed;
-(long long)duration;
-(id<CAMTimerButtonDelegate>)delegate;
@end
