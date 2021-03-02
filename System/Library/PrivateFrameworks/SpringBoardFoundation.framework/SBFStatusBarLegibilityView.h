/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, UIView, UIImageView, NSString;

@interface SBFStatusBarLegibilityView : UIView <SBUILegibility> {

	BOOL _forceLegibilityGradientHidden;
	_UILegibilitySettings* _legibilitySettings;
	UIView* _statusBarGradientView;
	UIImageView* _leftCornerView;
	UIImageView* _rightCornerView;

}

@property (nonatomic,retain) UIView * statusBarGradientView;                          //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
@property (nonatomic,retain) UIImageView * leftCornerView;                            //@synthesize leftCornerView=_leftCornerView - In the implementation block
@property (nonatomic,retain) UIImageView * rightCornerView;                           //@synthesize rightCornerView=_rightCornerView - In the implementation block
@property (assign,nonatomic) BOOL forceLegibilityGradientHidden;                      //@synthesize forceLegibilityGradientHidden=_forceLegibilityGradientHidden - In the implementation block
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gradientViewWithOpacities:(const double*)arg1 locations:(id)arg2 ;
+(id)statusBarGradientView;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)forceLegibilityGradientHidden;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setForceLegibilityGradientHidden:(BOOL)arg1 ;
-(void)_configureWithLegibilitySettings:(id)arg1 forceLegibilityGradientHidden:(BOOL)arg2 ;
-(void)layoutSubviews;
-(UIImageView *)leftCornerView;
-(void)setStatusBarGradientView:(UIView *)arg1 ;
-(void)_configureAsPhone;
-(UIView *)statusBarGradientView;
-(void)setLeftCornerView:(UIImageView *)arg1 ;
-(void)_configureAsPad;
-(void)setRightCornerView:(UIImageView *)arg1 ;
-(UIImageView *)rightCornerView;
@end
