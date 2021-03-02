/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, UIButton, UIStackView;

@interface CNPhotoPickerSectionHeader : UICollectionReusableView {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	/*^block*/id _actionBlock;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,copy) id actionBlock;                           //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)titleLabelFont;
+(id)actionButtonFont;
+(id)reusableIdentifier;
+(double)heightNeededForAccessibilityLayoutIncludingActionButton:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(UILabel *)titleLabel;
-(UIButton *)actionButton;
-(void)prepareForReuse;
-(void)setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionBlock:(id)arg1 ;
-(void)updateDynamicStackViewProperties;
-(void)actionButtonPressed:(id)arg1 ;
-(void)updateStyle:(id)arg1 ;
-(id)actionBlock;
@end
