/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView, _UIBarBackgroundShadowView, UIView, NSString, _UIBarBackgroundLayout;

@interface _UIBarBackground : UIView {

	UIVisualEffectView* _effectView1;
	UIImageView* _colorAndImageView1;
	_UIBarBackgroundShadowView* _shadowView1;
	UIVisualEffectView* _effectView2;
	UIImageView* _colorAndImageView2;
	_UIBarBackgroundShadowView* _shadowView2;
	UIView* _topInsetView;
	double _bg1LastLayoutHeight;
	double _bg2LastLayoutHeight;
	struct {
		unsigned needsTopInsetView : 1;
		unsigned needsEffectView1 : 1;
		unsigned needsColorAndImageView1 : 1;
		unsigned needsShadowView1 : 1;
		unsigned needsEffectView2 : 1;
		unsigned needsColorAndImageView2 : 1;
		unsigned needsShadowView2 : 1;
	}  _backgroundFlags;
	BOOL _topAligned;
	NSString* _groupName;
	_UIBarBackgroundLayout* _layout;
	UIView* _customBackgroundView;

}

@property (nonatomic,copy) NSString * groupName;                           //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL topAligned;                              //@synthesize topAligned=_topAligned - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * customBackgroundView;                //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
-(void)_orderSubviews;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(void)setLayout:(_UIBarBackgroundLayout *)arg1 ;
-(UIView *)customBackgroundView;
-(NSString *)groupName;
-(void)_setupBackgroundValues;
-(void)_updateBackgroundViewVisiblity;
-(void)set_backgroundEffectView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(void)setTopAligned:(BOOL)arg1 ;
-(void)cleanupBackgroundViews;
-(void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6 ;
-(void)transitionBackgroundViews;
-(void)layoutSubviews;
-(CGRect)frameForYOrigin:(double)arg1 height:(double)arg2 ;
-(void)set_shadowView:(id)arg1 ;
-(void)transition:(unsigned long long)arg1 toLayout:(id)arg2 ;
-(_UIBarBackgroundLayout *)layout;
-(BOOL)topAligned;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareBackgroundViews;
-(id)_shadowView;
-(void)setGroupName:(NSString *)arg1 ;
-(id)_backgroundEffectView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateBackground;
@end

