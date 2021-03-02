/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UILabel, STUsageGraphViewController, STUsageItem;

@interface STDrillInGraphCell : STTableCell {

	UILabel* _usageLabel;
	STUsageGraphViewController* _usageGraphViewController;
	STUsageItem* _usageItem;

}

@property (nonatomic,readonly) UILabel * usageLabel;                                               //@synthesize usageLabel=_usageLabel - In the implementation block
@property (nonatomic,readonly) STUsageGraphViewController * usageGraphViewController;              //@synthesize usageGraphViewController=_usageGraphViewController - In the implementation block
@property (nonatomic,readonly) STUsageItem * usageItem;                                            //@synthesize usageItem=_usageItem - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UILabel *)usageLabel;
-(void)setValue:(id)arg1 ;
-(STUsageItem *)usageItem;
-(STUsageGraphViewController *)usageGraphViewController;
@end
