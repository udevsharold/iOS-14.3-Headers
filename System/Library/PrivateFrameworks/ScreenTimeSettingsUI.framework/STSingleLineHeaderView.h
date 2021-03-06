/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STTableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSSpecifier;

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	PSSpecifier* _specifier;

}

@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(PSSpecifier *)specifier;
-(UILabel *)titleLabel;
-(id)initWithSpecifier:(id)arg1 ;
-(void)reloadFromSpecifier;
-(id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(BOOL)arg2 ;
@end

