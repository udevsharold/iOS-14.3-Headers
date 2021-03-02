/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionXPCProtocol.h>

@protocol MCInteractionDelegate, OS_dispatch_queue;
@class NSDictionary, NSData, NSObject, NSMutableArray, NSXPCConnection, NSString;

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol> {

	CFBagRef _observers;
	id<MCInteractionDelegate> _interactionDelegate;
	NSDictionary* _preflightResponse;
	NSData* _originalProfileData;
	NSObject*<OS_dispatch_queue> _notificationSyncQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;
	NSObject*<OS_dispatch_queue> _publicXPCConnectionSyncQueue;
	NSMutableArray* _notificationTokens;
	/*^block*/id userInputReplyBlock;
	/*^block*/id MAIDSignInReplyBlock;
	/*^block*/id passcodeReplyBlock;
	/*^block*/id showWarningsReplyBlock;
	NSXPCConnection* _publicXPCConnection;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * publicXPCConnection;              //@synthesize publicXPCConnection=_publicXPCConnection - In the implementation block
+(id)features;
+(id)profileInstallationErrorWithUnderlyingError:(id)arg1 ;
+(id)sharedConnection;
-(id)managedEmailDomains;
-(BOOL)isEphemeralMultiUser;
-(void)_defaultsDidChange;
-(id)provisionalEnrollmentExpirationDate;
-(BOOL)isDefinitionLookupAllowed;
-(id)userSettingsForSystem;
-(void)_createAndResumeXPCConnection;
-(void)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)parametersForValueSetting:(id)arg1 ;
-(BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 ;
-(BOOL)shouldDestroyOldKeybag;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)isFingerprintModificationAllowed;
-(void)shutDown;
-(BOOL)isMUAllowed;
-(BOOL)isExplicitContentAllowedOutAsk:(BOOL*)arg1 ;
-(int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2 ;
-(BOOL)isPasscodeSet;
-(BOOL)hasAnyMailAccountIgnoringFiltering;
-(BOOL)isFeatureM1Allowed;
-(int)userMode;
-(BOOL)isAuthenticationBeforeAutoFillRequired;
-(BOOL)isMusicArtistActivityAllowed;
-(BOOL)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(BOOL)arg2 ;
-(BOOL)isAutomaticAppDownloadsAllowed;
-(void)deleteActivationLockBypassKey;
-(id)effectiveValueForSetting:(id)arg1 ;
-(void)setAutoCorrectionAllowed:(BOOL)arg1 ;
-(void)rereadManagedAppAttributes;
-(BOOL)isPasswordAutoFillAllowed;
-(BOOL)isNFCAllowed;
-(void)setActiveClassroomRoles:(id)arg1 ;
-(id)installedUserProfileWithIdentifier:(id)arg1 ;
-(int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(void)setSpellCheckAllowed:(BOOL)arg1 ;
-(void)retrieveCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isScreenRecordingAllowed;
-(void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)managedWiFiNetworkNames;
-(void)setValue:(id)arg1 forSetting:(id)arg2 ;
-(long long)allowedGameCenterPlayerTypes;
-(BOOL)isChaperoned;
-(id)_organizationsFromArray:(id)arg1 ;
-(id)skipSetupKeys;
-(id)userInfoForClientUUID:(id)arg1 ;
-(int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)isClassroomInstructorRoleEnabled;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isHashtagImagesAllowed;
-(BOOL)isNearbyMultiplayerGamingAllowed;
-(BOOL)shouldSkipSetupPanes;
-(id)installedProfilesInstalledBy:(id)arg1 ;
-(void)setClassroomInstructorRoleEnabled:(BOOL)arg1 ;
-(BOOL)isAppInstallationAllowed;
-(void)setExplicitContentAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultUserBookmarks;
-(BOOL)isFingerprintUnlockAllowed;
-(id)managingOrganizationInformation;
-(void)setAutomaticAppUpdatesAllowed:(BOOL)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(void)setUserBookmarks:(id)arg1 ;
-(id)installedUserProfileDataWithIdentifier:(id)arg1 ;
-(void)setTVAllowed:(BOOL)arg1 ;
-(void)setParameters:(id)arg1 forBoolSetting:(id)arg2 ;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isSpellCheckAllowed;
-(id)activationLockBypassHash;
-(id)userBookmarks;
-(BOOL)clearUserInfoForClientUUIDs:(id)arg1 ;
-(id)userSettings;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3 ;
-(unsigned long long)gracePeriod;
-(BOOL)isProvisionallyEnrolled;
-(int)newPasscodeEntryScreenType;
-(id)restrictionEnforcedNotificationSettings;
-(void)checkInIfNeeded;
-(int)effectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(BOOL*)arg3 ;
-(void)isProfileInstalledWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tvProviderUserToken;
-(int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 limitForUserEnrollment:(BOOL)arg8 outRestrictionChanged:(BOOL*)arg9 outEffectiveSettingsChanged:(BOOL*)arg10 outError:(id*)arg11 ;
-(BOOL)isSupervised;
-(id)deviceProvisionalEnrollmentFootnote;
-(id)diagnosticsUploadURL;
-(void)setAllowedGrandfatheredRestrictionBoolFeature:(id)arg1 ;
-(BOOL)isAirPlaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(id)restrictionEnforcedNotificationSettingsForBundleID:(id)arg1 ;
-(BOOL)isSafariPasswordAutoFillAllowedForURL:(id)arg1 ;
-(id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(id)defaultParametersForBoolSetting:(id)arg1 ;
-(BOOL)isLocalStorageAllowed;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(BOOL)isLockScreenTodayViewAllowed;
-(BOOL)isAirPlayIncomingRequestsPairingPasswordRequired;
-(BOOL)isIdentifierForAdvertisingAllowed;
-(id)managedSystemConfigurationServiceIDs;
-(long long)dragDropSourceManagementStateForBundleID:(id)arg1 ;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(BOOL)isAirPrintTrustedTLSRequirementEnforced;
-(BOOL)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeCloudConfigurationDetails:(id)arg1 ;
-(BOOL)isOpenInRestrictionInEffect;
-(id)cloudConfigurationDetails;
-(id)defaultValuesForIntersectionSetting:(id)arg1 ;
-(BOOL)isiTunesAllowed;
-(void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)validateAppBundleIDs:(id)arg1 ;
-(BOOL)activationRecordIndicatesCloudConfigurationIsAvailable;
-(id)_disallowedRestrictionErrorForRestrictionKey:(id)arg1 ;
-(void)setAllowedGrandfatheredRestrictionUnionFeature:(id)arg1 ;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAutomaticDateAndTimeEnforced;
-(BOOL)isBluetoothModificationAllowed;
-(id)associatedDomainsForManagedApps;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isClassroomEnabled;
-(void)storeCloudConfigurationDetails:(id)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkIn;
-(BOOL)isAirPrintAllowed;
-(void)setConferenceRoomDisplaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAirPlayOutgoingRequestsPairingPasswordRequired;
-(BOOL)isHomeAllowed;
-(id)init;
-(void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 credentialSet:(id)arg6 waitUntilCompleted:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(BOOL)isMusicVideoViewingAllowed;
-(id)trustedCodeSigningIdentities;
-(BOOL)hasDiagnosticSubmissionAllowedBeenSet;
-(void)setFeatureM1Allowed:(BOOL)arg1 ;
-(void)setInteractionDelegate:(id)arg1 ;
-(void)setPredictiveKeyboardAllowed:(BOOL)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)isSharedDeviceTemporarySessionAllowed;
-(id)_settingsLockedDownByRestrictions:(id)arg1 ;
-(int)userBoolValueForSetting:(id)arg1 ;
-(id)acceptedFileExtensions;
-(id)defaultParametersForUnionSetting:(id)arg1 ;
-(id)managedAppBundleIDs;
-(id)defaultParametersForValueSetting:(id)arg1 ;
-(void)setAllowedGrandfatheredRestrictionValueFeature:(id)arg1 ;
-(id)deviceOrganizationZipCode;
-(id)chaperoneOrganization;
-(void)doMCICDidRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAirPrintCredentialsStorageAllowed;
-(BOOL)isAutoCorrectionAllowed;
-(BOOL)isEnterpriseBookBackupAllowed;
-(int)unlockScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10 ;
-(BOOL)isUIAppInstallationAllowed;
-(BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2 ;
-(void)addActiveClassroomRole:(id)arg1 ;
-(void)__checkForProfiledCrash;
-(BOOL)hasHandWashingDataSubmissionAllowedBeenSet;
-(BOOL)isUSBDriveAccessAllowed;
-(BOOL)hasWheelchairDataSubmissionAllowedBeenSet;
-(id)deviceOrganizationAddressLine3;
-(id)effectiveRestrictionsForPairedDevice;
-(BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1 ;
-(void)setConferenceRoomDisplayModeEnabled:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(BOOL)arg3 ;
-(id)deviceOrganizationAddressLine2;
-(BOOL)hasHealthDataSubmission2BeenSet;
-(BOOL)isWebContentFilteringInEffect;
-(id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 ;
-(BOOL)isPasswordProximityAutoFillRequestingAllowed;
-(void)setKeyboardShortcutsAllowed:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isWheelchairDataSubmissionAllowed;
-(id)restrictedAppBundleIDs;
-(void)setGracePeriod:(unsigned long long)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setRemoteAppPairingAllowed:(BOOL)arg1 ;
-(BOOL)isSmartPunctuationAllowed;
-(id)objectRestrictionForFeature:(id)arg1 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 ;
-(BOOL)isDiagnosticSubmissionModificationAllowed;
-(BOOL)shouldShowSetupAssistant;
-(void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)getMachineInfo;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)_organizationFromDict:(id)arg1 ;
-(void)resetAllSettingsToDefaults;
-(BOOL)areSettingsLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isGameCenterPrivateMessagingAllowed;
-(BOOL)isTVProviderModificationAllowed;
-(BOOL)isInSingleAppMode;
-(id)popProvisioningProfileDataFromHeadOfInstallationQueue;
-(void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1 ;
-(BOOL)isLockScreenNotificationsViewAllowed;
-(id)_requestTypesFromDict:(id)arg1 ;
-(BOOL)isWallpaperModificationAllowed;
-(void)removeBoolSetting:(id)arg1 ;
-(void)dealloc;
-(id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps;
-(BOOL)isPasscodeCompliantWithNamedPolicy:(id)arg1 outError:(id*)arg2 ;
-(id)deviceOrganizationName;
-(BOOL)hasAppAnalyticsAllowedBeenSet;
-(void)lockdownDidReceiveActivationRecord:(id)arg1 ;
-(id)installedMDMProfileIdentifier;
-(id)userSettingsForPairedDevice;
-(id)doNotDocumentSyncAppIDs;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 credentialSet:(id)arg8 waitUntilCompleted:(BOOL)arg9 completion:(/*^block*/id)arg10 ;
-(id)fetchActivationLockBypassKeyWithError:(id*)arg1 ;
-(BOOL)isGameCenterAllowed;
-(void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1 ;
-(id)permittedAutoLockSeconds;
-(id)installedSystemProfileWithIdentifier:(id)arg1 ;
-(void)invalidateRestrictionCache;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 ;
-(BOOL)isWiFiWhitelistingEnforced;
-(id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps;
-(void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isPredictiveKeyboardAllowed;
-(void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)allProfilesOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 forDeviceType:(unsigned long long)arg4 ;
-(void)checkCarrierProfile;
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)publicXPCConnection;
-(BOOL)isAirDropUnmanagedForced;
-(BOOL)isTodayViewModificationAllowed;
-(id)managedMedia;
-(id)installProfileData:(id)arg1 outError:(id*)arg2 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(BOOL)isInAppPaymentAllowed;
-(int)appWhitelistState;
-(id)deviceOrganizationVendorID;
-(BOOL)isDeviceSleepAllowed;
-(void)notifyDeviceUnlocked;
-(int)restrictedBoolValueForFeature:(id)arg1 ;
-(BOOL)isLockScreenControlCenterAllowed;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isAutomaticAppUpdatesModificationAllowed;
-(BOOL)isControlCenterAllowedInApps;
-(BOOL)isConferenceRoomDisplayModeEnabledOutAsk:(BOOL*)arg1 ;
-(void)migrateCleanupMigratorWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1 ;
-(void)setClassroomStudentRoleEnabled:(BOOL)arg1 ;
-(void)setHandWashingDataSubmissionAllowed:(BOOL)arg1 ;
-(BOOL)isAppCellularDataModificationAllowed;
-(id)userValueForSetting:(id)arg1 ;
-(void)validateAppBundleIDs:(id)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
-(void)setContinuousPathKeyboardAllowed:(BOOL)arg1 ;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3 ;
-(unsigned long long)enforcedSoftwareUpdateDelayInDays;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(id)effectiveBlacklistedAppBundleIDs;
-(void)resetPasscodeMetadataWithCompletion:(/*^block*/id)arg1 ;
-(id)autonomousSingleAppModePermittedBundleIDs;
-(id)userSettingsForCurrentUser;
-(id)_localizedRestrictionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5 ;
-(BOOL)isAutomaticAppUpdatesAllowed;
-(id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3 ;
-(void)respondToMAIDAuthenticationRequest:(BOOL)arg1 error:(id)arg2 isCancelled:(BOOL)arg3 ;
-(void)setManagedEmailDomains:(id)arg1 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managedMayWriteUnmanagedContacts;
-(BOOL)isPasscodeRequiredToAccessWhitelistedApps;
-(void)respondToWarningsContinueInstallation:(BOOL)arg1 ;
-(BOOL)isUSBDriveAccessInFilesAllowed;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 ;
-(BOOL)isAppClipsAllowed;
-(BOOL)isContentProtectionInEffect;
-(id)listInstalledProvisioningProfileUUIDsWithManagedOnly:(BOOL)arg1 ;
-(void)_passcodeDidChange;
-(id)filteredOpenInOriginatingContactsAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3 ;
-(BOOL)isCellularPlanModificationAllowed;
-(void)setMultitaskingAllowed:(BOOL)arg1 ;
-(void)setMediaPurchaseAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(BOOL)isActivityContinuationAllowed;
-(id)parametersForUnionSetting:(id)arg1 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 waitUntilCompleted:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(BOOL)isOnDeviceAppInstallationAllowed;
-(BOOL)isRemoteAppPairingAllowed;
-(void)setTVShowingUndownloadedTVShowsAllowed:(BOOL)arg1 ;
-(BOOL)shouldShowCloudConfigurationUI;
-(BOOL)isPasscodeNagDaemonEnabled;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 ;
-(void)setFindMyCarAllowed:(BOOL)arg1 ;
-(id)effectiveValuesForUnionSetting:(id)arg1 ;
-(BOOL)isCloudKeychainSyncAllowed;
-(id)knownAirPrintIPPURLStrings;
-(BOOL)isDriverDoNotDisturbModificationsAllowed;
-(BOOL)isClassroomRequestPermissionToLeaveClassesForced;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 ;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(void)removeOrphanedClientRestrictions;
-(void)removeExpiredProfiles;
-(void)flush;
-(id)deviceOrganizationCity;
-(BOOL)_shouldApplyContactsFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)isUninstalledAppNearMeSuggestionsAllowed;
-(BOOL)isTVShowingUndownloadedMoviesAllowed;
-(BOOL)isGeotagSharingAllowed;
-(id)effectiveParametersForIntersectionSetting:(id)arg1 ;
-(void)storeCloudConfigurationDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isMediaPurchaseAllowedOutAsk:(BOOL*)arg1 ;
-(int)effectiveRestrictedBoolValueForSetting:(id)arg1 ;
-(id)localizedDescriptionOfCurrentPasscodeConstraints;
-(void)removeProtectedProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(id)deviceOrganizationAddress;
-(BOOL)isFingerprintForContactlessPaymentAllowed;
-(BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)shouldApplyFilterForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)isPodcastsAllowed;
-(void)setTrustedCodeSigningIdentities:(id)arg1 ;
-(void)setTVProviderModificationAllowed:(BOOL)arg1 ;
-(id)lockedDownRootCertificatesWithOutLocalizedSourceDescription:(id*)arg1 ;
-(BOOL)isAttentionAwareAutoLockAllowed;
-(BOOL)isMusicServiceAllowed;
-(BOOL)_shouldApplyContactsFilterForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(id)restrictedAppBundleIDsExcludingRemovedSystemApps;
-(id)_localizedSourceDescriptionForType:(long long)arg1 MDMName:(id)arg2 exchangeName:(id)arg3 exchangeCount:(long long)arg4 profileName:(id)arg5 profileCount:(long long)arg6 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 waitUntilCompleted:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4 ;
-(id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isDeprecatedWebKitTLSAllowed;
-(void)setWebContentFilterAutoPermittedURLStrings:(id)arg1 ;
-(void)setWheelchairDataSubmissionAllowed:(BOOL)arg1 ;
-(BOOL)isAppAnalyticsAllowed;
-(BOOL)isClassroomAutomaticClassJoiningForced;
-(void)setAllowedGrandfatheredRestrictionIntersectionFeature:(id)arg1 ;
-(void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceOrganizationRegion;
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2 ;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 ;
-(id)managedAppIDsWithFlags:(int)arg1 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
-(id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 outError:(id*)arg5 ;
-(id)doNotBackupAppIDs;
-(void)lockDevice;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isHomeScreenLayoutApplied;
-(void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2 ;
-(BOOL)isAirPlaySecuritySettingsUIAllowed;
-(BOOL)isDictationAllowed;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 ;
-(BOOL)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(BOOL)arg2 ;
-(BOOL)isBiometricAuthForSignInWithAppleAllowed;
-(id)parametersForBoolSetting:(id)arg1 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 outRestrictionChanged:(BOOL*)arg7 outEffectiveSettingsChanged:(BOOL*)arg8 outError:(id*)arg9 ;
-(void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isAccessibilitySpeechAllowed;
-(BOOL)isClassroomStudentRoleEnabled;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(id)parametersForIntersectionSetting:(id)arg1 ;
-(BOOL)wasTeslaCloudConfigurationApplied;
-(BOOL)isScreenShotAllowed;
-(BOOL)isUSBRestrictedModeAllowed;
-(int)requestEffectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 outError:(id*)arg4 ;
-(void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 ;
-(BOOL)isAdTrackingLimited;
-(id)restrictionEnforcedBlacklistedAppBundleIDs;
-(id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(void)installProfileData:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1 ;
-(BOOL)isiCloudDriveAllowed;
-(void)profileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isAirDropAppInstallationAllowed;
-(BOOL)isSharedDeviceAnonymousTemporaryUserAllowed;
-(id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id*)arg1 ;
-(id)effectiveWhitelistedAppBundleIDs;
-(void)checkInWithCompletion:(/*^block*/id)arg1 ;
-(void)recomputeUserComplianceWarningSynchronously;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 ;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isAppRatingLimitInEffect;
-(BOOL)isEnterpriseBookMetadataSyncAllowed;
-(BOOL)isSpotlightInternetResultsAllowed;
-(BOOL)isWiFiPasswordSharingAllowed;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 ;
-(void)enrollProvisionallyWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_unmanagedMayReadManagedContacts;
-(void)setParentalControlsBlacklistedAppBundleIDs:(id)arg1 ;
-(id)localizedDescriptionOfDefaultNewPasscodeConstraints;
-(BOOL)mustInstallProfileNonInteractively:(id)arg1 ;
-(BOOL)isContinuousPathKeyboardAllowed;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)validateAppBundleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 ;
-(void)setSmartPunctuationAllowed:(BOOL)arg1 ;
-(id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)_queueCreateAndResumeXPCConnection;
-(BOOL)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(id)parentalControlsBlacklistedAppBundleIDs;
-(void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isVehicleUIAllowed;
-(BOOL)isAppDemotionAllowed:(id)arg1 ;
-(BOOL)isPasswordSharingAllowed;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isNewsAllowed;
-(id)_soldToIdsFromDict:(id)arg1 ;
-(void)setHealthDataSubmissionAllowed:(BOOL)arg1 ;
-(void)checkInAsynchronously;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)isOnDeviceOnlyDictationForced;
-(void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isHealthDataSubmission2Allowed;
-(id)deviceOrganizationAddressLine1;
-(BOOL)isKeyboardShortcutsAllowed;
-(BOOL)isTVAllowed;
-(BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2 ;
-(id)deviceOrganizationCountry;
-(id)valueRestrictionForFeature:(id)arg1 ;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyDeviceUnlockedAndPasscodeRequired;
-(BOOL)isVPNCreationAllowed;
-(id)restrictionEnforcedHomeScreenLayout;
-(BOOL)mayShareToAirDropOriginatingAccountIsManaged:(BOOL)arg1 ;
-(void)removeProtectedProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActivityContinuationAllowed:(BOOL)arg1 ;
-(id)userValueForUnionSetting:(id)arg1 ;
-(void)_profileListDidChange;
-(BOOL)isSiriServerLoggingAllowed;
-(int)boolRestrictionForFeature:(id)arg1 ;
-(BOOL)isAppManaged:(id)arg1 ;
-(BOOL)isDiagnosticSubmissionAllowed;
-(BOOL)isFindMyDeviceAllowed;
-(BOOL)isFindMyFriendsAllowed;
-(BOOL)isWebTextDefineAllowed;
-(BOOL)isInstalledAppNearMeSuggestionsAllowed;
-(BOOL)shouldInstallStoredProfileForPurpose:(int)arg1 ;
-(void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2 ;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)managedAppIDs;
-(id)defaultValueForSetting:(id)arg1 ;
-(id)deviceAssetTag;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
-(void)setDriverDoNotDisturbModificationsAllowed:(BOOL)arg1 ;
-(id)installedProfilesWithFilterFlags:(int)arg1 ;
-(BOOL)isNewsTodayAllowed;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)deviceIfLostMessage;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 ;
-(BOOL)isAirPlayIncomingRequestsAllowed;
-(int)unlockScreenType;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(id)_transmogrifyRestrictionDictionaryForUserEnrollment:(id)arg1 outError:(id*)arg2 ;
-(void)cancelUserInputResponses;
-(BOOL)isClassroomUnpromptedScreenObservationForced;
-(BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)isSelectedTextSharingAllowed;
-(void)recomputeProfileRestrictionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeActiveClassroomRole:(id)arg1 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_destroyPublicXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(void)notifyClientsToRecomputeCompliance;
-(void)checkCarrierProfileForceInstallation:(BOOL)arg1 ;
-(id)removedSystemAppBundleIDs;
-(id)requestEffectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)installedProfileIdentifiers;
-(BOOL)isNotificationsModificationAllowedForBundleID:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_detectProfiledCrashes;
-(id)defaultParametersForIntersectionSetting:(id)arg1 ;
-(BOOL)isESIMModificationAllowed;
-(void)removeOrphanedClientRestrictionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_effectiveSettingsDidChange:(id)arg1 ;
-(void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 ;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isURLManaged:(id)arg1 ;
-(void)retrieveCloudConfigurationWithoutValidationCompletionBlock:(/*^block*/id)arg1 ;
-(id)effectiveValuesForIntersectionSetting:(id)arg1 ;
-(BOOL)isSoftwareUpdateResisted;
-(long long)dragDropTargetManagementStateForBundleID:(id)arg1 ;
-(BOOL)isRemovalRestrictedByPolicyForApp:(id)arg1 ;
-(BOOL)isAirPrintiBeaconDiscoveryAllowed;
-(/*^block*/id)_cloudConfigurationRetrievalBlockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isAirDropAllowed;
-(BOOL)isDeprecatedWebKitSynchronousXHRLoadsAllowed;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(BOOL)isAwaitingDeviceConfigured;
-(id)acceptedMIMETypes;
-(void)removeProfileWithIdentifier:(id)arg1 ;
-(void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1 ;
-(void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_restrictionDidChange;
-(BOOL)isGameCenterProfileModificationAllowed;
-(id)activeClassroomRoles;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 credentialSet:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)wasCloudConfigurationApplied;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)_setAllowedGrandfatheredRestrictionFeature:(id)arg1 forRestrictionKey:(id)arg2 ;
-(void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2 ;
-(BOOL)isClassroomUnpromptedAppAndDeviceLockForced;
-(id)effectiveRestrictions;
-(BOOL)isHandWashingDataSubmissionAllowed;
-(BOOL)isMultitaskingAllowed;
-(BOOL)isBundleIDAccountBasedForDragDrop:(id)arg1 ;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHealthDataSubmission2Allowed:(BOOL)arg1 ;
-(BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isSpotlightNewsAllowed;
-(id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(BOOL)isPersonalHotspotModificationAllowed;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isActivationLockAllowed;
-(void)setAirPlaySecuritySettingsUIAllowed:(BOOL)arg1 ;
-(id)userValueForIntersectionSetting:(id)arg1 ;
-(void)_queueCreateAndResumePublicXPCConnection;
-(BOOL)isHealthDataSubmissionAllowed;
-(BOOL)isOTAPKIUpdatesAllowed;
-(BOOL)isAppRemovalAllowed;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)installedSystemProfileDataWithIdentifier:(id)arg1 ;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(BOOL)isPasscodeModificationAllowed;
-(void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 ;
-(id)_handleQueueProfileError:(id)arg1 forTargetDevice:(unsigned long long)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 ;
-(BOOL)isTodayViewAllowed;
-(id)_sharedDeviceConfiguration;
-(BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(void)removeValueSetting:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)cancelRequestEffectiveBoolValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_appWhitelistDidChange:(id)arg1 ;
-(BOOL)isProfileUIInstallationEffectivelyAllowed;
-(BOOL)isCloudSyncAllowed:(id)arg1 ;
-(void)setupAssistantDidFinish;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(id)filteredOpenInContactsAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(void)_passcodePolicyDidChange;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)activationLockBypassKey;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 ;
-(BOOL)applySingleAppModeConfiguration:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 outError:(id*)arg5 ;
-(BOOL)isAssistantUserGeneratedContentAllowed;
-(BOOL)isProximitySetupToNewDeviceAllowed;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)isGameCenterProfilePrivacyModificationAllowed;
-(BOOL)isTeslaCloudConfigurationAvailable;
-(BOOL)canSendMail:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(BOOL)isSystemAppRemovalAllowed;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 ;
-(BOOL)mayShareToMessagesOriginatingAccountIsManaged:(BOOL)arg1 ;
-(void)setAirPlaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isPasscodeRequired;
-(id)defaultValuesForUnionSetting:(id)arg1 ;
-(void)setTVShowingUndownloadedMoviesAllowed:(BOOL)arg1 ;
-(id)deviceDepartmentName;
-(id)managingOrganizationForFontAtURL:(id)arg1 ;
-(int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3 ;
-(id)installedProfileIdentifiersInstalledBy:(id)arg1 ;
-(void)setParameters:(id)arg1 forValueSetting:(id)arg2 ;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)dragDropBidirectionalManagementStateForBaseBundleID:(id)arg1 ;
-(void)_applyToObservers:(/*^block*/id)arg1 ;
-(id)popProfileDataFromHeadOfInstallationQueue;
-(void)recomputeUserComplianceWarning;
-(BOOL)isApplePersonalizedAdvertisingAllowed;
-(BOOL)isContactlessPaymentAllowed;
-(id)effectiveWhitelistedAppsAndOptions;
-(id)_localizedCertificateSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5 ;
-(void)notifyKeybagUpdated;
-(id)installedProfileIdentifiersWithFilterFlags:(int)arg1 ;
-(void)submitUserInputResponses:(id)arg1 ;
-(BOOL)isTVShowingUndownloadedTVShowsAllowed;
-(id)deviceLockScreenFootnote;
-(void)_createAndResumePublicXPCConnection;
-(BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1 ;
-(BOOL)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id*)arg2 outExchangeName:(id*)arg3 outExchangeCount:(long long*)arg4 outProfileName:(id*)arg5 outProfileCount:(long long*)arg6 ;
-(int)defaultBoolValueForSetting:(id)arg1 ;
-(BOOL)isNetworkDriveAccessInFilesAllowed;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isDeviceNameModificationAllowed;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)isPasscodeRequiredByProfiles;
-(BOOL)isProfileUIInstallationAllowed;
-(id)companionBundleIDToWatchBundleIDsMap;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)effectiveUserSettings;
-(BOOL)isLockScreenWiFiModificationAllowed;
-(void)_internalDefaultsDidChange;
-(BOOL)isWiFiPowerModificationAllowed;
-(BOOL)hasHealthDataSubmissionAllowedBeenSet;
-(void)retrieveDeviceUploadOrganizationsInfoWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3 ;
-(BOOL)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
@end
