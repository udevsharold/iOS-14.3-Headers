/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSBundleController.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, VPNConnectionStore, NSNumber, PSSpecifier, PSConfirmationSpecifier, NSString;

@interface VPNBundleController : PSBundleController <UIApplicationDelegate> {

	BOOL _networkSpinnerVisible;
	BOOL _rootMenuItem;
	BOOL _toggleSwitchInRootMenu;
	BOOL _registered;
	VPNConnectionStore* _connectionStore;
	NSNumber* _lastServiceCount;
	PSSpecifier* _passwordSetupSpecifier;
	PSSpecifier* _vpnSpecifier;
	PSSpecifier* _linkVPNSpecifier;
	PSConfirmationSpecifier* _toggleVPNSpecifier;

}

@property (retain) VPNConnectionStore * connectionStore;                              //@synthesize connectionStore=_connectionStore - In the implementation block
@property (retain) NSNumber * lastServiceCount;                                       //@synthesize lastServiceCount=_lastServiceCount - In the implementation block
@property (retain) PSSpecifier * passwordSetupSpecifier;                              //@synthesize passwordSetupSpecifier=_passwordSetupSpecifier - In the implementation block
@property (retain) PSSpecifier * vpnSpecifier;                                        //@synthesize vpnSpecifier=_vpnSpecifier - In the implementation block
@property (retain) PSSpecifier * linkVPNSpecifier;                                    //@synthesize linkVPNSpecifier=_linkVPNSpecifier - In the implementation block
@property (retain) PSConfirmationSpecifier * toggleVPNSpecifier;                      //@synthesize toggleVPNSpecifier=_toggleVPNSpecifier - In the implementation block
@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;                //@synthesize networkSpinnerVisible=_networkSpinnerVisible - In the implementation block
@property (getter=isRootMenuItem) BOOL rootMenuItem;                                  //@synthesize rootMenuItem=_rootMenuItem - In the implementation block
@property (getter=isToggleSwitchInRootMenu) BOOL toggleSwitchInRootMenu;              //@synthesize toggleSwitchInRootMenu=_toggleSwitchInRootMenu - In the implementation block
@property (getter=isRegistered) BOOL registered;                                      //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)disableAirplaneMode;
+(BOOL)networkingIsDisabled;
-(BOOL)isRegistered;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)unload;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)setToggleSwitchInRootMenu:(BOOL)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(void)setConnectionStore:(VPNConnectionStore *)arg1 ;
-(NSNumber *)lastServiceCount;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(PSSpecifier *)linkVPNSpecifier;
-(void)setLinkVPNSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)isNetworkSpinnerVisible;
-(BOOL)isToggleSwitchInRootMenu;
-(void)dealloc;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)setToggleVPNSpecifier:(PSConfirmationSpecifier *)arg1 ;
-(void)vpnConfigurationChanged:(id)arg1 ;
-(void)setRootMenuItem:(BOOL)arg1 ;
-(PSConfirmationSpecifier *)toggleVPNSpecifier;
-(void)setPasswordSetupSpecifier:(PSSpecifier *)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(PSSpecifier *)passwordSetupSpecifier;
-(unsigned long long)getStatusAndUpdateNetworkSpinnerVisibility;
-(void)setNetworkSpinnerVisible:(BOOL)arg1 ;
-(void)setVPNActive:(BOOL)arg1 ;
-(BOOL)isRootMenuItem;
-(void)updateVPNSwitchStatus;
-(void)vpnStatusChanged:(id)arg1 ;
-(VPNConnectionStore *)connectionStore;
-(PSSpecifier *)vpnSpecifier;
-(void)setLastServiceCount:(NSNumber *)arg1 ;
-(void)setVpnSpecifier:(PSSpecifier *)arg1 ;
@end
