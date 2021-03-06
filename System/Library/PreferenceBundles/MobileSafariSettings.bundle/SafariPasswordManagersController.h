/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionConfigurationViewControllerDelegate.h>

@class _ASCredentialProviderExtensionConfigurationViewController, MCProfileConnection, PSSpecifier, NSString;

@interface SafariPasswordManagersController : PSListController <MCProfileConnectionObserver, SFCredentialProviderExtensionManagerObserver, _ASCredentialProviderExtensionConfigurationViewControllerDelegate> {

	_ASCredentialProviderExtensionConfigurationViewController* _extensionConfigurationController;
	MCProfileConnection* _profileConnection;
	PSSpecifier* _passwordAutoFillSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)credentialProviderExtensionConfigurationViewControllerDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_formDataController;
-(void)_setValue:(id)arg1 forPasswordAutoFillSpecifier:(id)arg2 ;
-(id)_valueOfPasswordAutoFillSpecifier:(id)arg1 ;
-(BOOL)_keychainAutoFillEnabled;
-(id)_valueOfThirdPartyPasswordManagerSpecifier:(id)arg1 ;
-(void)_setKeychainAutoFillEnabled:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forThirdPartyPasswordManagerSpecifier:(id)arg2 ;
@end

