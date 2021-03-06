/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UILabel;

@interface SKUIRoundedRectButton : UIButton {

	UIView* _borderView;
	UILabel* _subtitleLabel;

}
-(void)tintColorDidChange;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)setSubtitleWithLabel:(id)arg1 ;
@end

