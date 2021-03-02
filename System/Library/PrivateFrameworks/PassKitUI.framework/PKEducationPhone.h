/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPhoneHeroView, PKPaymentSetupInitialCardEducationIconsView, UIView, UIImageView;

@interface PKEducationPhone : UIView {

	CGSize _screenSize;
	BOOL _hasPearl;
	BOOL _isAnimating;
	unsigned long long _screenType;
	PKPhoneHeroView* _phoneBackgroundView;
	PKPaymentSetupInitialCardEducationIconsView* _iconsView;
	UIView* _homeButtonView;
	UIView* _homeButtonOutlineView;
	UIImageView* _walletImageView;
	UIImageView* _cardImageView;
	UIImageView* _biometricsImageView;
	UIImageView* _powerIndicatorView;
	UIImageView* _powerArrowImageView;

}
-(void)startAnimation;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_topPadding;
-(void)setPassImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 displayOptions:(unsigned long long)arg2 ;
-(void)_setHomeButtonOutlineColor;
-(double)_deviceIconsPadding;
-(void)_startPowerIndicatorAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
