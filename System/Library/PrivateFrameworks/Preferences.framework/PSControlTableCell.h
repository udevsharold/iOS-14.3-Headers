/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIControl;

@interface PSControlTableCell : PSTableCell {

	UIControl* _control;

}

@property (nonatomic,retain) UIControl * control; 
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)controlValue;
-(BOOL)canReload;
-(id)newControl;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UIControl *)control;
-(void)dealloc;
-(id)valueLabel;
-(void)controlChanged:(id)arg1 ;
-(void)setControl:(UIControl *)arg1 ;
@end

