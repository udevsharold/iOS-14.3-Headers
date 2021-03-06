/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/Loggable.h>

@class CTXPCServiceSubscriptionContext, CTServiceDescriptor, CoreTelephonyClient, PSListController, Logger, NSString;

@interface PSUIDataModeSpecifier : PSSpecifier <Loggable> {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	CTServiceDescriptor* _serviceDescriptor;
	CoreTelephonyClient* _ctClient;
	PSListController* _hostController;
	Logger* _logger;
	BOOL _showDrillDown;

}

@property (assign) BOOL showDrillDown;                              //@synthesize showDrillDown=_showDrillDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFactory:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3 ;
-(BOOL)showDrillDown;
-(id)getLogger;
-(BOOL)isHighDataModeSupported;
-(void)prepareDataModeDrillDown;
-(void)prepareLowDataModeSwitch;
-(id)isLowDataModeEnabled:(id)arg1 ;
-(void)setLowDataMode:(id)arg1 specifier:(id)arg2 ;
-(void)setDataMode:(id)arg1 specifier:(id)arg2 ;
-(id)getDataMode:(id)arg1 ;
-(void)populateDrillDownSpecifiers;
-(void)setFooterText;
-(id)isInterfaceCostExpensive:(id)arg1 ;
-(id)dataModeFromNumber:(id)arg1 ;
-(void)setInterfaceCostExpensive:(id)arg1 specifier:(id)arg2 ;
-(id)lowDataModeFromBool:(BOOL)arg1 ;
-(id)interfaceCostFromBool:(BOOL)arg1 ;
-(void)setShowDrillDown:(BOOL)arg1 ;
@end

