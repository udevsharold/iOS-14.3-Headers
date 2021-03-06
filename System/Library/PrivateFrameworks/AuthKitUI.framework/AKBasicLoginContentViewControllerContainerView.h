/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSString, UIImageView, UILabel, NSArray;

@interface AKBasicLoginContentViewControllerContainerView : UIView {

	UIImage* _bannerImage;
	NSString* _titleText;
	NSString* _messageText;
	UIImageView* _bannerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) UIImageView * bannerView;                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;              //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) UIImage * bannerImage;                    //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,copy) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                     //@synthesize messageText=_messageText - In the implementation block
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)updateConstraints;
-(NSString *)messageText;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setBannerView:(UIImageView *)arg1 ;
-(NSString *)titleText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(UIImageView *)bannerView;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImage *)bannerImage;
-(void)_configureMessageLabel;
-(void)_configureBannerImage;
@end

