/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIButton, NSLayoutConstraint, NSString;

@interface HKParagraphTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _paragraphLabel;
	UIButton* _button;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSLayoutConstraint* _paragraphLabelBaselineConstraint;
	NSLayoutConstraint* _buttonBaselineConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSString* _titleText;
	NSString* _paragraphText;
	NSString* _buttonText;

}

@property (nonatomic,copy) NSString * titleText;                  //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * paragraphText;              //@synthesize paragraphText=_paragraphText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                 //@synthesize buttonText=_buttonText - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)buttonText;
-(void)_updateForCurrentSizeCategory;
-(void)setButtonText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(long long)_buttonHorizontalAlignment;
-(id)_titleLabelFont;
-(NSString *)titleText;
-(id)_buttonFont;
-(void)_setupUI;
-(id)_paragraphLabelFont;
-(double)_titleLabelTopToBaseline;
-(double)_titleLabelBaselineToParagraphBaseline;
-(double)_subtitleLabelBaselineToButton;
-(double)_buttonBaselineToBottom;
-(void)setParagraphText:(NSString *)arg1 ;
-(NSString *)paragraphText;
@end
