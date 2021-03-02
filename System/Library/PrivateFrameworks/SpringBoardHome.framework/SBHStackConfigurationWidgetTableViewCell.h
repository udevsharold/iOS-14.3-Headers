/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol SBLeafIconDataSource;
@class CHSAvocadoDescriptor, UIStackView, UIImageView, UILabel;

@interface SBHStackConfigurationWidgetTableViewCell : UITableViewCell {

	id<SBLeafIconDataSource> _dataSource;
	CHSAvocadoDescriptor* _descriptor;
	UIStackView* _horizontalStackView;
	UIStackView* _verticalStackView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) id<SBLeafIconDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CHSAvocadoDescriptor * descriptor;                //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) UIStackView * horizontalStackView;                //@synthesize horizontalStackView=_horizontalStackView - In the implementation block
@property (nonatomic,retain) UIStackView * verticalStackView;                  //@synthesize verticalStackView=_verticalStackView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                      //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UIImageView *)iconImageView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureWithDataSource:(id)arg1 icon:(id)arg2 descriptor:(id)arg3 ;
-(SBIconImageInfo)_iconImageInfo;
-(void)setDataSource:(id<SBLeafIconDataSource>)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIStackView *)verticalStackView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptor:(CHSAvocadoDescriptor *)arg1 ;
-(id<SBLeafIconDataSource>)dataSource;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)didMoveToWindow;
-(CHSAvocadoDescriptor *)descriptor;
-(UIStackView *)horizontalStackView;
-(void)setHorizontalStackView:(UIStackView *)arg1 ;
-(void)setVerticalStackView:(UIStackView *)arg1 ;
@end
