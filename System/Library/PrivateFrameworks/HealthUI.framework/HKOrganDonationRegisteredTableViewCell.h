/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell {

	UILabel* _introLabel;
	UILabel* _registrarLabel;

}

@property (nonatomic,retain) UILabel * introLabel;                  //@synthesize introLabel=_introLabel - In the implementation block
@property (nonatomic,retain) UILabel * registrarLabel;              //@synthesize registrarLabel=_registrarLabel - In the implementation block
+(id)defaultReuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupSubviews;
-(void)setupConstraints;
-(void)setIntroLabel:(UILabel *)arg1 ;
-(UILabel *)introLabel;
-(void)setRegistrarLabel:(UILabel *)arg1 ;
-(UILabel *)registrarLabel;
@end

