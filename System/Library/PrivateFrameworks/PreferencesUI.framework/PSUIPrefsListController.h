/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AAUISignInControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/SUIKSearchResultsCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/PSTopLevelController.h>

@protocol OS_dispatch_queue;
@class NSString, PSUIClassKitVisibilityArbitrator, PSUIClassroomVisibilityArbitrator, HFHomeSettingsVisibilityArbitrator, VSAccountStore, AIDAServiceOwnersManager, AAUIProfilePictureStore, CNMonogrammer, EAAccessory, PSSpecifier, NSArray, NSDictionary, UIImage, NSSet, ACAccountStore, NSObject, CoreTelephonyClient, FLPreferencesController, PSKeyboardNavigationSearchController, SUIKSearchResultsCollectionViewController, _TtC17WallpaperSettings30WSWallpaperSettingsCoordinator;

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController> {

	NSString* _pendingOffsetItemName;
	BOOL _launchedToTest;
	PSUIClassKitVisibilityArbitrator* _classKitVisibilityArbitrator;
	PSUIClassroomVisibilityArbitrator* _classroomVisibilityArbitrator;
	HFHomeSettingsVisibilityArbitrator* _homeKitVisibilityArbitrator;
	VSAccountStore* _videoSubscriberAccountStore;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AAUIProfilePictureStore* _profilePictureStore;
	CNMonogrammer* _monogrammer;
	BOOL _didFirstLoad;
	EAAccessory* _speakerAccessory;
	PSSpecifier* _eqSpecifier;
	PSSpecifier* _ethernetSpecifier;
	NSArray* _vpnBundleControllers;
	NSArray* _MCUIBundleControllers;
	NSArray* _thirdPartySpecifiers;
	NSDictionary* _movedThirdPartySpecifiers;
	BOOL _initiallyLoadingThirdPartySpecifiers;
	BOOL _refreshingThirdPartySpecifiers;
	PSSpecifier* _notificationsSpecifier;
	PSSpecifier* _wallpaperSpecifier;
	PSSpecifier* _passcodeSpecifier;
	PSSpecifier* _homeScreenSpecifier;
	UIImage* _appleAccountSpecifierCachedIcon;
	PSSpecifier* _appleAccountSpecifier;
	PSSpecifier* _videoSubscriberGroupSpecifier;
	PSSpecifier* _videoSubscriberSpecifier;
	PSSpecifier* _messagesSpecifier;
	PSSpecifier* _faceTimeSpecifier;
	PSSpecifier* _gameCenterSpecifier;
	PSSpecifier* _siriSpecifier;
	PSSpecifier* _tvSpecifier;
	PSSpecifier* _carrierSelectionSpecifier;
	PSSpecifier* _personalHotspotSpecifier;
	PSSpecifier* _classKitSpecifier;
	PSSpecifier* _classroomSpecifier;
	PSSpecifier* _homeKitSpecifier;
	PSSpecifier* _healthKitSpecifier;
	PSSpecifier* _emergencySOSSpecifier;
	PSSpecifier* _exposureNotificationSpecifier;
	PSSpecifier* _applePencilSpecifier;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	NSArray* _originalSpecifiers;
	NSSet* _originalDisplayIdentifiers;
	PSSpecifier* _selectedSpecifier;
	ACAccountStore* _accountStore;
	PSSpecifier* _specifierToSelect;
	NSObject*<OS_dispatch_queue> _loadAllSpecifiersQueue;
	NSObject*<OS_dispatch_queue> _spyglassUpdateQueue;
	CoreTelephonyClient* _coreTelephonyClient;
	BOOL skipSelectingDefaultCategoryOnLaunch;
	BOOL _deferredURLLoadForThirdPartyApp;
	BOOL __cellularDataSettingInitialized;
	BOOL __cellularDataSetting;
	NSString* _bluetoothString;
	NSArray* _followupSpecifiers;
	FLPreferencesController* _followupController;
	PSKeyboardNavigationSearchController* _spotlightSearchController;
	SUIKSearchResultsCollectionViewController* _searchResultsController;
	NSString* _wifiString;
	CTServerConnectionRef __ctConnection;
	_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator* _wallpaperCoordinator;
	NSString* _spotlightSearchTerm;

}

@property (nonatomic,copy) NSString * bluetoothString;                                                                    //@synthesize bluetoothString=_bluetoothString - In the implementation block
@property (nonatomic,retain) NSArray * followupSpecifiers;                                                                //@synthesize followupSpecifiers=_followupSpecifiers - In the implementation block
@property (nonatomic,retain) FLPreferencesController * followupController;                                                //@synthesize followupController=_followupController - In the implementation block
@property (nonatomic,retain) PSKeyboardNavigationSearchController * spotlightSearchController;                            //@synthesize spotlightSearchController=_spotlightSearchController - In the implementation block
@property (nonatomic,retain) SUIKSearchResultsCollectionViewController * searchResultsController;                         //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,copy) NSString * wifiString;                                                                         //@synthesize wifiString=_wifiString - In the implementation block
@property (assign,nonatomic) BOOL deferredURLLoadForThirdPartyApp;                                                        //@synthesize deferredURLLoadForThirdPartyApp=_deferredURLLoadForThirdPartyApp - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSettingInitialized;                                                        //@synthesize _cellularDataSettingInitialized=__cellularDataSettingInitialized - In the implementation block
@property (assign,nonatomic) BOOL _cellularDataSetting;                                                                   //@synthesize _cellularDataSetting=__cellularDataSetting - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctConnection;                                                         //@synthesize _ctConnection=__ctConnection - In the implementation block
@property (nonatomic,retain) _TtC17WallpaperSettings30WSWallpaperSettingsCoordinator * wallpaperCoordinator;              //@synthesize wallpaperCoordinator=_wallpaperCoordinator - In the implementation block
@property (nonatomic,retain) NSString * spotlightSearchTerm;                                                              //@synthesize spotlightSearchTerm=_spotlightSearchTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch; 
+(BOOL)airplaneMode;
+(void)setAirplaneMode:(BOOL)arg1 ;
+(id)radiosPreferences;
-(id)specifiers;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)updateClassroomSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(id)bundle;
-(BOOL)deferredURLLoadForThirdPartyApp;
-(NSString *)spotlightSearchTerm;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(void)set_ctConnection:(CTServerConnectionRef)arg1 ;
-(void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2 ;
-(void)_tabKeyPressed;
-(NSString *)bluetoothString;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(long long)tableViewStyle;
-(id)_accountStore;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)updateVideoSubscriberAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)searchResultsCollectionViewController:(id)arg1 iconForCategory:(id)arg2 ;
-(FLPreferencesController *)followupController;
-(id)keyCommands;
-(BOOL)deviceSupportsApplePay;
-(void)_newCarrierNotification;
-(id)init;
-(void)NETRBStateChangedNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateSupervisedTextWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePersonalHotspot;
-(void)updateAccountSpecifiers;
-(void)willPresentSearchController:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)updateResearchDeviceTextWithCompletion:(/*^block*/id)arg1 ;
-(void)setFollowupSpecifiers:(NSArray *)arg1 ;
-(void)setWifiString:(NSString *)arg1 ;
-(void)_setupCachedAppleAccountSpecifier:(id)arg1 ;
-(void)setSpotlightSearchController:(PSKeyboardNavigationSearchController *)arg1 ;
-(BOOL)_canSelectSpecifierAtIndexPath:(id)arg1 ;
-(BOOL)handlePendingURL;
-(void)selectDefaultCategory;
-(id)_serviceOwnersManager;
-(void)_handleOnsiteProfileInstallation;
-(void)searchResultsCollectionViewController:(id)arg1 didSelectURL:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)showPINSheet:(id)arg1 ;
-(BOOL)_exposureNotificationAvailable;
-(void)reloadSpecifiers;
-(void)updateWifi;
-(void)dealloc;
-(id)wifiNetwork:(id)arg1 ;
-(PSKeyboardNavigationSearchController *)spotlightSearchController;
-(BOOL)_shouldPresentModernThirdPartyAppListForBundleIdentifier:(id)arg1 ;
-(void)reloadCellularRelatedSpecifiers;
-(void)setBluetoothString:(NSString *)arg1 ;
-(void)updateSOSWithCompletion:(/*^block*/id)arg1 ;
-(id)specifierForBundle:(id)arg1 ;
-(void)setSearchResultsController:(SUIKSearchResultsCollectionViewController *)arg1 ;
-(void)_setAirplaneMode:(BOOL)arg1 ;
-(BOOL)_cellularDataSetting;
-(void)loadPPTTestSpecifiers:(int)arg1 ;
-(void)_delayedSpotlightSearch;
-(id)getAllSpecifiers;
-(id)cellularDataStatusForSpecifier:(id)arg1 ;
-(void)setFollowupController:(FLPreferencesController *)arg1 ;
-(void)_setupAppleAccountSpecifierForLogin:(id)arg1 ;
-(long long)searchResultsCollectionViewController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3 ;
-(void)fetchCellularDataEnabled;
-(NSArray *)followupSpecifiers;
-(id)videoSubscriberAccountValue:(id)arg1 ;
-(BOOL)isAppClipsAllowed;
-(BOOL)isCellularDataEnabled;
-(void)showSecurityResearchDeviceInfo;
-(void)_localeChanged;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)updateExposureNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)updateRestrictedSettings;
-(id)bluetoothValue:(id)arg1 ;
-(void)showDeviceSupervisionInfo;
-(void)updateApplePayWithCompletion:(/*^block*/id)arg1 ;
-(id)_profilePictureStore;
-(void)viewDidLayoutSubviews;
-(void)rerootNavigationController;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldShowApplePencilSpecifier;
-(void)_loadThirdPartySpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(id)_sidebarSpecifierForCategoryController;
-(void)asyncSpecifiersFirstLoad;
-(void)wifiGetCurrentWiFiNetwork;
-(id)configurePasscodeSpecifierFromSpecifiers:(id)arg1 ;
-(BOOL)_allowsBorderForCell:(id)arg1 ;
-(void)refresh3rdPartyBundles;
-(BOOL)shouldShowEthernetSpecifier;
-(void)willDismissSearchController:(id)arg1 ;
-(void)reloadAsyncSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowSimulatorSettings;
-(void)confirmationSpecifierCancelled:(id)arg1 ;
-(void)set_cellularDataSetting:(BOOL)arg1 ;
-(void)selectDefaultCategoryForced:(BOOL)arg1 showController:(BOOL)arg2 ;
-(BOOL)shouldShowTouchID;
-(void)didCancelEnteringPIN;
-(BOOL)_showSOS;
-(void)selectDefaultCategoryForced:(BOOL)arg1 ;
-(void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 shouldAddAppClipSpecifier:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SUIKSearchResultsCollectionViewController *)searchResultsController;
-(void)continueSearchInSettingsWithTerm:(id)arg1 ;
-(id)appleAccountIconLocalCacheURL;
-(void)set_cellularDataSettingInitialized:(BOOL)arg1 ;
-(void)checkDeveloperSettingsState;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)didDismissSearchController:(id)arg1 ;
-(void)profilePictureDidChange;
-(long long)navigationItemLargeTitleDisplayMode;
-(BOOL)shouldShowClassKitSpecifier;
-(BOOL)_cellularDataSettingInitialized;
-(void)_saveIconToCacheForAppleAccountSpecifier:(id)arg1 ;
-(BOOL)shouldShowFaceID;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_showDetailTargetDidChange:(id)arg1 ;
-(void)dismissPopover;
-(void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(/*^block*/id)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(void)setWallpaperCoordinator:(_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator *)arg1 ;
-(void)displayIdentifiersChanged;
-(void)iconChangedForBundleID:(id)arg1 ;
-(void)updateEthernet;
-(void)_beginObservingProfilePictureStoreDidChangeNotification;
-(void)updateClassKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)bluetoothPowerChanged:(id)arg1 ;
-(void)insertMovedThirdPartySpecifiersAnimated:(BOOL)arg1 ;
-(void)setAirplaneMode:(id)arg1 specifier:(id)arg2 ;
-(id)_cachedIconForAppleAccountSpecifier;
-(void)setSkipSelectingDefaultCategoryOnLaunch:(BOOL)arg1 ;
-(_TtC17WallpaperSettings30WSWallpaperSettingsCoordinator *)wallpaperCoordinator;
-(void)configureTopLevelSpecifier:(id)arg1 ;
-(id)getAirplaneMode:(id)arg1 ;
-(id)categoryController;
-(void)_downArrowKeyPressed;
-(void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1 ;
-(void)insertOrderedSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)suspend;
-(id)selectSpecifier:(id)arg1 ;
-(id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3 searchPlist:(id)arg4 ;
-(void)indexThirdPartyAppsAndManifests;
-(id)_primarySpecifierOrdering;
-(void)testSpecifierCountAfterBlock:(/*^block*/id)arg1 ;
-(CTServerConnectionRef)_ctConnection;
-(id)phoneStatusForSpecifier:(id)arg1 ;
-(void)updateEthernetWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2 ;
-(void)_setupAppleAccountSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
-(id)passbookSpecifier;
-(void)willBecomeActive;
-(void)NETRBStateChangedNotification:(id)arg1 ;
-(BOOL)searchResultsCollectionViewController:(id)arg1 shouldShowCategory:(id)arg2 ;
-(void)didSelectRowAtIndexPath:(id)arg1 ;
-(void)setDeferredURLLoadForThirdPartyApp:(BOOL)arg1 ;
-(void)indexManifests;
-(void)iMessageSupportMayHaveChanged;
-(void)updateVPNWithCompletion:(/*^block*/id)arg1 ;
-(void)clearCache;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)popToRoot;
-(void)_setupAppleAccountSpecifier:(id)arg1 ;
-(void)confirmationSpecifierConfirmed:(id)arg1 ;
-(id)_silhouetteMonogramIcon;
-(void)willEnterForeground;
-(void)signInControllerDidCancel:(id)arg1 ;
-(void)setupPrimaryAppleAccountGroup:(id)arg1 ;
-(void)appleAccountsDidChange;
-(void)lazyLoadSpecialBundleForSpecifier:(id)arg1 ;
-(id)generalViewController;
-(void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1 ;
-(void)_upArrowKeyPressed;
-(BOOL)skipSelectingDefaultCategoryOnLaunch;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(BOOL)shouldShowClassroomSpecifier;
-(void)setupDaemonsIfNeeded;
-(void)setSpotlightSearchTerm:(NSString *)arg1 ;
-(BOOL)_removeCachedAppleAccountIcon;
-(void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1 ;
-(void)updateHomeKitSpecifierWithCompletion:(/*^block*/id)arg1 ;
-(id)identifierForSelectedIndex;
-(void)bluetoothValueFetch:(id)arg1 ;
-(void)_presentAppleAccountSignInController:(id)arg1 ;
-(NSString *)wifiString;
-(void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2 ;
-(void)updateFollowupSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpyglassWithCompletion:(/*^block*/id)arg1 ;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2 ;
-(void)_configureImageViewForRow:(id)arg1 ;
-(void)_videoSubscriberAccountStoreDidChange:(id)arg1 ;
-(void)configureApplePencilSpecifier;
@end

