/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel;

@interface PSUICellularPlanTableCell : PSTableCell {

	PSUIBadgeView* _badgeView;
	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _statusLabel;
	PSUIBadgeView* _centeredBadgeView;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) PSUIBadgeView * badgeView;                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                          //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                          //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) PSUIBadgeView * centeredBadgeView;              //@synthesize centeredBadgeView=_centeredBadgeView - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;                    //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)canReload;
-(BOOL)canBeChecked;
-(PSUIBadgeView *)badgeView;
-(id)textLabel;
-(void)setBadgeView:(PSUIBadgeView *)arg1 ;
-(UILabel *)nameLabel;
-(id)detailTextLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
-(PSUIBadgeView *)centeredBadgeView;
-(void)setCenteredBadgeView:(PSUIBadgeView *)arg1 ;
-(void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3 ;
-(void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2 ;
@end

