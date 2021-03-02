/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView, UITextView, UILabel, UIView, NSString;

@interface OBPrivacyLinkButton : UIButton {

	BOOL _largeIcon;
	UIImageView* _iconView;
	UITextView* _textView;
	UILabel* _buttonLabel;
	UIView* _containerView;
	NSString* _captionText;
	NSString* _buttonText;
	CGSize _contentSize;

}

@property (readonly) UIImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (readonly) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (readonly) UILabel * buttonLabel;               //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (readonly) NSString * captionText;              //@synthesize captionText=_captionText - In the implementation block
@property (readonly) NSString * buttonText;               //@synthesize buttonText=_buttonText - In the implementation block
@property (assign) BOOL largeIcon;                        //@synthesize largeIcon=_largeIcon - In the implementation block
@property (assign) CGSize contentSize;                    //@synthesize contentSize=_contentSize - In the implementation block
-(id)viewForLastBaselineLayout;
-(UIImageView *)iconView;
-(UITextView *)textView;
-(id)_font;
-(void)_updateButtonColorWithColor:(id)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(BOOL)largeIcon;
-(void)setContentSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(NSString *)captionText;
-(CGSize)contentSize;
-(NSString *)buttonText;
-(void)setLargeIcon:(BOOL)arg1 ;
-(NSRange)_rangeForButtonText;
-(id)buttonColor;
-(id)titleForState:(unsigned long long)arg1 ;
-(id)labelText;
-(void)layoutSubviews;
-(BOOL)_isButtonAboveCaptionText;
-(id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(CGSize)arg4 useLargeIcon:(BOOL)arg5 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)buttonLabel;
@end
