/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

@interface UIDebuggingIvarTableViewCell : UITableViewCell {

	UIDebuggingIvar* _ivar;
	UILabel* _nameLabel;
	UILabel* _typeLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                 //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIDebuggingIvar * ivar;              //@synthesize ivar=_ivar - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIvar:(UIDebuggingIvar *)arg1 ;
-(UILabel *)typeLabel;
-(UILabel *)nameLabel;
-(void)prepareForReuse;
-(UILabel *)valueLabel;
-(UIDebuggingIvar *)ivar;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)_prepareConstraints;
@end

