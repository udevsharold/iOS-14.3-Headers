/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PKSwitchSpinnerTableCellDelegate;
@class UIActivityIndicatorView, UISwitch;

@interface PKSwitchSpinnerTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	UISwitch* _switch;
	BOOL _showSpinner;
	id<PKSwitchSpinnerTableCellDelegate> _delegate;

}
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_switchToggled:(id)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
-(void)_updateSubviews;
@end

