/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanPendingTransfer, CTCellularPlanManager;

@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier {

	CTCellularPlanPendingTransfer* _plan;
	CTCellularPlanManager* _cellularPlanManager;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * plan;                     //@synthesize plan=_plan - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;              //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
-(void)setPlan:(CTCellularPlanPendingTransfer *)arg1 ;
-(CTCellularPlanPendingTransfer *)plan;
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2 ;
-(void)setSpecifierProperties;
-(void)activatePlanPendingTransfer:(id)arg1 ;
@end
