/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HFStringGenerator;
@class UILabel, UIColor, UIStackView, NSArray, UIFont;

@interface HUTitleDescriptionContentView : UIView {

	BOOL _disabled;
	UILabel* _titleLabel;
	id<HFStringGenerator> _titleText;
	UIColor* _titleTextColor;
	id<HFStringGenerator> _descriptionText;
	UIColor* _descriptionTextColor;
	UILabel* _descriptionLabel;
	UIStackView* _stackView;
	NSArray* _verticalLabelConstraints;
	NSArray* _horizontalLabelConstraints;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * verticalLabelConstraints;                 //@synthesize verticalLabelConstraints=_verticalLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalLabelConstraints;               //@synthesize horizontalLabelConstraints=_horizontalLabelConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                           //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                     //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                    //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isDisabled;
-(UIColor *)titleTextColor;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIStackView *)stackView;
-(UILabel *)titleLabel;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(UILabel *)descriptionLabel;
-(id<HFStringGenerator>)titleText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setupTitleLabel;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIFont *)descriptionFont;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)_setupStackView;
-(void)_setupDescriptionLabel;
-(void)_updateLabel:(id)arg1 withContent:(id)arg2 ;
@end

