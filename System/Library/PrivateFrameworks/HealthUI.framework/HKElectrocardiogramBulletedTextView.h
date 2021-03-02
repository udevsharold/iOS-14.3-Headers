/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray, NSString;

@interface HKElectrocardiogramBulletedTextView : UIView {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSMutableArray* _bodyFirstBaselineConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                      //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;              //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
-(void)updateConstraints;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(UILabel *)titleLabel;
-(NSString *)detailText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(void)_setupConstraints;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
@end
