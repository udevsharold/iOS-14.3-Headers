/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class PSSpecifier, PSUIAppDataUsageGroup, CoreTelephonyClient, NSString;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate> {

	BOOL _shouldCalculateUsage;
	PSSpecifier* _groupSpecifier;
	PSUIAppDataUsageGroup* _appDataUsageGroup;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                           //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) PSUIAppDataUsageGroup * appDataUsageGroup;              //@synthesize appDataUsageGroup=_appDataUsageGroup - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (assign) BOOL shouldCalculateUsage;                                        //@synthesize shouldCalculateUsage=_shouldCalculateUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)init;
-(void)dealloc;
-(PSSpecifier *)groupSpecifier;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)selectSpecifier:(id)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)_handleNewCarrierNotification:(id)arg1 ;
-(void)_handleCellularPlanChangedNotification:(id)arg1 ;
-(void)_handleWirelessDataUsageChangedNotification:(id)arg1 ;
-(void)managedConfigurationSettingsDidChange;
-(void)managedConfigurationProfileListDidChange;
-(PSUIAppDataUsageGroup *)appDataUsageGroup;
-(void)setAppDataUsageGroup:(PSUIAppDataUsageGroup *)arg1 ;
-(BOOL)shouldCalculateUsage;
-(void)setShouldCalculateUsage:(BOOL)arg1 ;
@end

