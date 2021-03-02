/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/_UIBackdropView.h>

@protocol _PKUIKVisibilityBackdropViewDelegate;
@interface _PKUIKVisibilityBackdropView : _UIBackdropView {

	double _visibility;
	double _visibilityAnimationTarget;
	unsigned _animationCounter;
	unsigned _styleToken;
	BOOL _updatingBackdropSettings;
	long long _style;
	id<_PKUIKVisibilityBackdropViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PKUIKVisibilityBackdropViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(double)pkui_visibility;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(long long)pkui_preferredBackdropStyle;
-(void)_updateStyleIfNecessary;
-(void)pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<_PKUIKVisibilityBackdropViewDelegate>)arg1 ;
-(void)pkui_updateBackdropSettings;
-(void)_pkui_setVisibility:(double)arg1 animated:(BOOL)arg2 ;
-(void)pkui_accessibilitySettingsDidChange:(id)arg1 ;
-(void)pkui_commitBackdropSettings;
-(id<_PKUIKVisibilityBackdropViewDelegate>)delegate;
@end
