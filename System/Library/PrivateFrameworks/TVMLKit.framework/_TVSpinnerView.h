/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _TVSpinnerView : UIView {

	BOOL _shouldResumeAnimation;
	UIView* _spinnerContainer;
	UIView* _spinnerOverlayContainer;
	UIColor* _color;
	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                //@synthesize color=_color - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)color;
-(void)dealloc;
-(BOOL)isAnimating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_removeAnimations;
-(id)initWithFrame:(CGRect)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)_updateImagesForTraitCollection:(id)arg1 ;
-(void)_addAnimations;
-(id)_spinnerImageForTraitCollection:(id)arg1 size:(CGSize)arg2 alpha:(double)arg3 ;
@end

