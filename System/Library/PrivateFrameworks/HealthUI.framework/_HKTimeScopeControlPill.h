/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKTimeScopeControl.h>

@class NSArray;

@interface _HKTimeScopeControlPill : HKTimeScopeControl {

	NSArray* _buttons;
	long long _selectedButtonIndex;

}
-(void)layoutSubviews;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(long long)selectedTimeScope;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(id)_generateButtonsWithTimeScopes:(id)arg1 shortTextStyle:(BOOL)arg2 ;
-(void)_selectButtonAtIndex:(long long)arg1 ;
-(void)_setSelectedButtonIndex:(long long)arg1 ;
-(void)_deselectAllButtons;
-(void)_buttonSelected:(id)arg1 ;
@end

