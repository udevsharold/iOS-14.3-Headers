/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIView, PKPaymentPass, UIImageView, UILabel, PKContinuousButton;

@interface PKAddToWatchOfferView : UIView {

	PKWatchHeroImageView* _heroImageView;
	UIView* _backgroundView;
	CGSize _aspectSize;
	BOOL _isCompactWatch;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _passImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PKContinuousButton* _openAppButton;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * passImageView;                     //@synthesize passImageView=_passImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * openAppButton;              //@synthesize openAppButton=_openAppButton - In the implementation block
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 ;
-(PKContinuousButton *)openAppButton;
-(UILabel *)titleLabel;
-(void)showSpinner:(BOOL)arg1 ;
-(double)_sideMargin;
-(void)layoutSubviews;
-(UILabel *)subtitleLabel;
-(long long)context;
-(BOOL)_isSmallPhone;
-(UIImageView *)passImageView;
-(PKPaymentPass *)pass;
@end

