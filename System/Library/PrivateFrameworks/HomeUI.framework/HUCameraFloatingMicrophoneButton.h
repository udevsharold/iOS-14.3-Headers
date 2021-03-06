/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIVisualEffectView, UILabel, UIImageView, NAUILayoutConstraintSet;

@interface HUCameraFloatingMicrophoneButton : UIButton {

	UIVisualEffectView* _backgroundView;
	UILabel* _microphoneLabel;
	UIImageView* _microphoneImageView;
	NAUILayoutConstraintSet* _constraintSet;

}

@property (nonatomic,readonly) UIVisualEffectView * backgroundView;                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * microphoneLabel;                            //@synthesize microphoneLabel=_microphoneLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * microphoneImageView;                    //@synthesize microphoneImageView=_microphoneImageView - In the implementation block
@property (nonatomic,readonly) NAUILayoutConstraintSet * constraintSet;              //@synthesize constraintSet=_constraintSet - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)_createBackgroundEffect;
-(void)_updateAlpha;
-(void)updateConstraints;
-(UIVisualEffectView *)backgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setupConstraintSet;
-(void)_updateSelectionState;
-(UILabel *)microphoneLabel;
-(UIImageView *)microphoneImageView;
-(NAUILayoutConstraintSet *)constraintSet;
@end

