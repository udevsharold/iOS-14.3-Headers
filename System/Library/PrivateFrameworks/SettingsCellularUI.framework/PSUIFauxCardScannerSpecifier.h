/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/TSSIMSetupDelegate.h>

@class CTCellularPlanManager, PSListController, TSSIMSetupFlow, NSString;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier <TSSIMSetupDelegate> {

	CTCellularPlanManager* _planManager;
	PSListController* _hostController;
	TSSIMSetupFlow* _flow;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (retain) TSSIMSetupFlow * flow;                                           //@synthesize flow=_flow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSSIMSetupFlow *)flow;
-(PSListController *)hostController;
-(void)setFlow:(TSSIMSetupFlow *)arg1 ;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3 ;
-(void)fauxCardScannerCellPressed:(id)arg1 ;
-(void)simSetupFlowCompleted;
-(long long)userConsentResponse;
@end
