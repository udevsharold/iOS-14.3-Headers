/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <libobjc.A.dylib/KeychainSyncPhoneSettingsFragmentDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@class KeychainSyncPhoneSettingsFragment, UILabel, NSString;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {

	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	UILabel* _footerLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)controllerDone;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(void)nextPressed;
@end

