/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, NSParagraphStyle, UITextView, CAGradientLayer;

@interface SFDialogTextView : UIView {

	NSString* _title;
	NSString* _message;
	UIFont* _titleFont;
	UIFont* _messageFont;
	UIFont* _messageFontWithTitle;
	NSParagraphStyle* _titleParagraphStyle;
	UITextView* _textView;
	double _preferredMaxLayoutWidth;
	CAGradientLayer* _topGradient;
	CAGradientLayer* _bottomGradient;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(CGSize)intrinsicContentSize;
-(void)_updateText;
-(void)setMessage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)flashScrollIndicators;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_updateFontStyling;
-(void)_updateTextContainerInset;
@end

