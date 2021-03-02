/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CALayer, NSUUID;

@interface CPUIMediaButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	BOOL _showHighlight;
	NSUUID* _identifier;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
@property (assign,nonatomic) BOOL showHighlight;                           //@synthesize showHighlight=_showHighlight - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(CGSize)intrinsicContentSize;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(NSUUID *)identifier;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setShowHighlight:(BOOL)arg1 ;
-(BOOL)showHighlight;
-(void)_updateButtonStyle;
-(BOOL)canShowHighlight;
-(id)tintColorForUnhighlightedTextLabel;
-(BOOL)showBezelInTouch;
-(double)focusLayerCornerRadius;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobFocusLayerSelected;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(void)updateButtonOpacityForKnobUnfocused;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayerSelected;
-(id)colorForTouchFocusLayer;
-(void)setShowBezelInTouch:(BOOL)arg1 ;
-(id)_buttonBackGroundColorTouch;
@end
