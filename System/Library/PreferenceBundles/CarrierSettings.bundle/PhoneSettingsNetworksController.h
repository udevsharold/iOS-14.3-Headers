/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class PhoneSettingsTelephony, PHNetworkFetcher, PSSpecifier, NSMutableArray, NSString;

@interface PhoneSettingsNetworksController : PSListItemsController {

	BOOL _showNetworkList;
	PhoneSettingsTelephony* _telephonySettings;
	PHNetworkFetcher* _fetcher;
	PSSpecifier* _titleSpecifier;
	PSSpecifier* _automaticSpecifier;
	PSSpecifier* _networksGroupSpecifier;
	PSSpecifier* _searchingSpecifier;
	NSMutableArray* _networksSpecifiersArray;
	NSString* _cachedMobileIdentity;

}

@property (nonatomic,readonly) PhoneSettingsTelephony * telephonySettings;              //@synthesize telephonySettings=_telephonySettings - In the implementation block
@property (retain) PHNetworkFetcher * fetcher;                                          //@synthesize fetcher=_fetcher - In the implementation block
@property (assign,nonatomic) BOOL showNetworkList;                                      //@synthesize showNetworkList=_showNetworkList - In the implementation block
@property (nonatomic,retain) PSSpecifier * titleSpecifier;                              //@synthesize titleSpecifier=_titleSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticSpecifier;                          //@synthesize automaticSpecifier=_automaticSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * networksGroupSpecifier;                      //@synthesize networksGroupSpecifier=_networksGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * searchingSpecifier;                          //@synthesize searchingSpecifier=_searchingSpecifier - In the implementation block
@property (retain) NSMutableArray * networksSpecifiersArray;                            //@synthesize networksSpecifiersArray=_networksSpecifiersArray - In the implementation block
@property (retain) NSString * cachedMobileIdentity;                                     //@synthesize cachedMobileIdentity=_cachedMobileIdentity - In the implementation block
-(id)init;
-(void)dealloc;
-(void)listItemSelected:(id)arg1 ;
-(id)descriptionDictionary;
-(PHNetworkFetcher *)fetcher;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setFetcher:(PHNetworkFetcher *)arg1 ;
-(void)viewDidLoad;
-(void)_registerEventListeners;
-(PSSpecifier *)titleSpecifier;
-(PSSpecifier *)automaticSpecifier;
-(void)_updateCachedMobileIdentity;
-(BOOL)_isInManualMode;
-(void)setShowNetworkList:(BOOL)arg1 ;
-(PSSpecifier *)searchingSpecifier;
-(PhoneSettingsTelephony *)telephonySettings;
-(void)updateNetworkListSpecifiers;
-(BOOL)showNetworkList;
-(PSSpecifier *)networksGroupSpecifier;
-(void)updateNetworkListSpecifierStates;
-(BOOL)_isInAutomaticMode;
-(NSMutableArray *)networksSpecifiersArray;
-(void)setNetworksSpecifiersArray:(NSMutableArray *)arg1 ;
-(void)_handleRadioOffErrorNotification:(id)arg1 ;
-(void)_handleSimChangedNotification:(id)arg1 ;
-(void)_handleNetworkSettingsDisabledNotification:(id)arg1 ;
-(void)_handleNetworksChangedNotification:(id)arg1 ;
-(void)_handleNetworkFetcherStateChangedNotification:(id)arg1 ;
-(void)_handleNetworkFetcherNetworkSelectionStateChangedNotification:(id)arg1 ;
-(void)_handleNetworkFetcherErrorNotification:(id)arg1 ;
-(void)_settingsResumed;
-(void)_autoSwitchTurnedOn;
-(void)_autoSwitchTurnedOff;
-(void)setAutomaticSwitchState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getAutomaticSwitchStateForSpecifier:(id)arg1 ;
-(void)_setAutomaticSwitchOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(int)_currentNetworkSelectionState;
-(void)setTitleSpecifier:(PSSpecifier *)arg1 ;
-(void)setAutomaticSpecifier:(PSSpecifier *)arg1 ;
-(void)setNetworksGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setSearchingSpecifier:(PSSpecifier *)arg1 ;
-(NSString *)cachedMobileIdentity;
-(void)setCachedMobileIdentity:(NSString *)arg1 ;
@end

