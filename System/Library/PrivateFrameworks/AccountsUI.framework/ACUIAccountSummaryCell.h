/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSSet, ACAccount, NSString;

@interface ACUIAccountSummaryCell : PSTableCell {

	long long _style;
	UILabel* _dataclassesLabel;
	NSSet* _enabledDataclasses;
	NSSet* _supportedDataclasses;
	ACAccount* _account;
	BOOL _useCustomDetailsText;
	NSString* _desiredValue;

}
+(id)_nameForAccountSpecifier:(id)arg1 withStyle:(long long)arg2 ;
+(void)_configureSpecifier:(id)arg1 forAccount:(id)arg2 withStyle:(long long)arg3 valueText:(id)arg4 ;
+(id)specifierWithStyle:(long long)arg1 account:(id)arg2 valueText:(id)arg3 detailControllerClass:(Class)arg4 presentationStyle:(long long)arg5 ;
+(id)_valueForCellSpecifier:(id)arg1 ;
+(id)specifierWithStyle:(long long)arg1 account:(id)arg2 target:(id)arg3 controllerLoadAction:(SEL)arg4 ;
+(id)specifierWithStyle:(long long)arg1 account:(id)arg2 detailControllerClass:(Class)arg3 presentationStyle:(long long)arg4 ;
-(id)_font;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(id)_numberFormatter;
-(id)_dataclassesLabel;
-(id)_enabledDataclassesTextForWidth:(double)arg1 ;
-(void)hideDataclass:(id)arg1 ;
@end
