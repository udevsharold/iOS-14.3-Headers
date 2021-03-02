/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class STUsageReport, UIStackView;

@interface STNotificationsPickupSummaryView : UIView {

	STUsageReport* _usageReport;
	UIStackView* _stackView;

}

@property (nonatomic,retain) STUsageReport * usageReport;              //@synthesize usageReport=_usageReport - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                  //@synthesize stackView=_stackView - In the implementation block
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setUsageReport:(STUsageReport *)arg1 ;
-(STUsageReport *)usageReport;
-(id)initWithUsageReport:(id)arg1 ;
-(id)_attributedStringForNotificationsTitle;
-(id)_attributedStringForNotificationsDetailText;
-(id)_attributedStringForPickUpTitle;
-(id)_attributedStringForPickUpDetailText;
-(id)_attributedString:(id)arg1 withFont:(id)arg2 ;
@end
