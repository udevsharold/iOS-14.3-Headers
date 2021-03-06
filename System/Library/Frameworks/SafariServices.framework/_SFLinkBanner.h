/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPinnableBanner.h>

@class UIView, NSLayoutConstraint, UIImageView, UILabel, _SFDimmingButton, NSString;

@interface _SFLinkBanner : _SFPinnableBanner {

	UIView* _separator;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _messageTopConstraint;
	NSLayoutConstraint* _messageBottomConstraint;
	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	_SFDimmingButton* _openButton;
	/*^block*/id _openActionHandler;

}

@property (nonatomic,retain) UIImageView * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                     //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * messageLabelText; 
@property (nonatomic,retain) _SFDimmingButton * openButton;              //@synthesize openButton=_openButton - In the implementation block
@property (nonatomic,copy) id openActionHandler;                         //@synthesize openActionHandler=_openActionHandler - In the implementation block
-(id)init;
-(UIImageView *)icon;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)setIcon:(UIImageView *)arg1 ;
-(id)_titleLabelFont;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_messageLabelFont;
-(void)setMessageLabelText:(NSString *)arg1 ;
-(NSString *)messageLabelText;
-(void)invalidateBannerLayout;
-(_SFDimmingButton *)openButton;
-(void)setOpenButton:(_SFDimmingButton *)arg1 ;
-(id)openActionHandler;
-(void)setOpenActionHandler:(id)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)_open;
-(void)contentSizeCategoryDidChange;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

