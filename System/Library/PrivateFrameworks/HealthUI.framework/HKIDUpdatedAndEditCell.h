/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKIDUpdatedAndEditCellDelegate;
@class NSArray, UIStackView, NSLayoutConstraint, NSDate, UILabel, UIButton, NSString;

@interface HKIDUpdatedAndEditCell : UITableViewCell {

	NSArray* _regularLayoutConstraints;
	NSArray* _largeTextLayoutConstraints;
	UIStackView* _stackView;
	NSLayoutConstraint* _editFirstBaseLineAnchorConstraint;
	BOOL _hideEditButton;
	id<HKIDUpdatedAndEditCellDelegate> _delegate;
	NSDate* _dateSaved;
	UILabel* _titleLabel;
	UILabel* _dateLabel;
	UIButton* _editButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                           //@synthesize editButton=_editButton - In the implementation block
@property (assign,nonatomic,__weak) id<HKIDUpdatedAndEditCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved;                                              //@synthesize dateSaved=_dateSaved - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (assign,getter=isEditButtonHidden,nonatomic) BOOL hideEditButton;                   //@synthesize hideEditButton=_hideEditButton - In the implementation block
@property (assign,getter=isEditButtonDisabled,nonatomic) BOOL disableEditButton; 
-(void)setEditButton:(UIButton *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)dateLabel;
-(void)_updateFont;
-(void)_updateForCurrentSizeCategory;
-(UILabel *)titleLabel;
-(NSDate *)dateSaved;
-(UIButton *)editButton;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDateSaved:(NSDate *)arg1 ;
-(NSString *)titleText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<HKIDUpdatedAndEditCellDelegate>)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(id<HKIDUpdatedAndEditCellDelegate>)delegate;
-(void)_editButtonTapped:(id)arg1 ;
-(void)setHideEditButton:(BOOL)arg1 ;
-(void)setDisableEditButton:(BOOL)arg1 ;
-(BOOL)isEditButtonDisabled;
-(BOOL)isEditButtonHidden;
@end

