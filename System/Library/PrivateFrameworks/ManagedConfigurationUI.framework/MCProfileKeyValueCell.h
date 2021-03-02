/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyValueCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)keyLabel;
-(void)_setup;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(NSArray *)constraints;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupConstraints;
-(void)setKeyValue:(id)arg1 ;
@end
