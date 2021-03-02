/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIButton.h>

@class CALayer, UIView, UIImageView;

@interface SBPageManagementCheckbox : UIButton {

	CALayer* _deselectedMask;
	double _checkboxDiameter;
	UIView* _backgroundView;
	UIView* _highlightView;
	UIImageView* _customImageView;

}

@property (nonatomic,readonly) double checkboxDiameter;                    //@synthesize checkboxDiameter=_checkboxDiameter - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                     //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,readonly) CALayer * deselectedMask; 
@property (nonatomic,readonly) UIImageView * customImageView;              //@synthesize customImageView=_customImageView - In the implementation block
-(UIView *)highlightView;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)backgroundView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 checkboxDiameter:(double)arg2 backgroundView:(id)arg3 ;
-(double)effectiveHighlightAlpha;
-(CALayer *)deselectedMask;
-(void)updateDeselectedMaskState;
-(double)effectiveImageAlpha;
-(double)checkboxDiameter;
-(UIImageView *)customImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
