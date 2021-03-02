/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFAirportViewControllerDelegate <NSObject,WFNetworkListDelegate>
@required
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1;
-(id)airportSettingsViewController:(id)arg1 unconfiguredAccessoriesGroupHeaderTitle:(id)arg2;
-(long long)airportSettingsViewControllerAskToJoinMode:(id)arg1;
-(void)airportSettingsViewController:(id)arg1 setAskToJoinMode:(long long)arg2;
-(BOOL)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg1;
-(void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg1;
-(BOOL)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg1;
-(void)airportSettingsViewControllerDidTapDataUsage:(id)arg1;
-(BOOL)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg1;
-(void)airportSettingsViewControllerDidTapKnownNetworks:(id)arg1;
-(BOOL)airportSettingsViewControllerCoreWiFiEnabled:(id)arg1;
-(void)airportSettingsViewController:(id)arg1 SetCoreWiFiEnabled:(BOOL)arg2;

@end
