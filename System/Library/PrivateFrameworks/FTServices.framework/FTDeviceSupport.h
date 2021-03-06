/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientPNRDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSString, CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSString* _number;
	BOOL _blockPost;
	BOOL _supportsFrontCamera;
	BOOL _supportsBackCamera;
	BOOL _supportsiMessage;
	BOOL _supportsSMS;
	BOOL _supportsMMS;
	BOOL _mmsConfigured;
	long long _supportsApplePayState;
	long long _supportsManateeForAppleCash;
	long long _supportsRegionForAppleCash;
	long long _supportsFMDV2State;
	long long _supportsKeySharingState;
	long long _supportsHarmonyState;
	BOOL _supportsHandoff;
	BOOL _supportsTethering;
	BOOL _supportsFT;
	BOOL _supportsFTA;
	BOOL _supportsFTMW;
	BOOL _supportsWiFi;
	BOOL _supportsWLAN;
	BOOL _supportsNonWiFiFaceTime;
	BOOL _supportsCellularData;
	BOOL _simBecameNotReady;
	long long _simInserted;
	long long _isPNRSupportedCachedValue;
	BOOL _faceTimeBlocked;
	BOOL _iMessageBlocked;
	BOOL _accountModificationRestricted;
	BOOL _isGreenTea;
	long long _performanceClass;
	CoreTelephonyClient* _coreTelephonyClient;
	FTSelectedPNRSubscription* _selectedPNRSubscription;
	BOOL _commCenterDead;

}

@property (nonatomic,readonly) BOOL isTelephonyDevice; 
@property (nonatomic,readonly) BOOL faceTimeAvailable; 
@property (nonatomic,readonly) BOOL faceTimeBlocked; 
@property (nonatomic,readonly) BOOL faceTimeSupported; 
@property (nonatomic,readonly) BOOL callingAvailable; 
@property (nonatomic,readonly) BOOL callingBlocked; 
@property (nonatomic,readonly) BOOL callingSupported; 
@property (nonatomic,readonly) BOOL multiwayAvailable; 
@property (nonatomic,readonly) BOOL multiwayBlocked; 
@property (nonatomic,readonly) BOOL multiwaySupported; 
@property (nonatomic,readonly) BOOL nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) BOOL nonWifiCallingAvailable; 
@property (nonatomic,readonly) BOOL iMessageAvailable; 
@property (nonatomic,readonly) BOOL iMessageBlocked; 
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL identityServicesSupported; 
@property (nonatomic,readonly) BOOL madridAvailable; 
@property (nonatomic,readonly) BOOL madridBlocked; 
@property (nonatomic,readonly) BOOL madridSupported; 
@property (nonatomic,readonly) BOOL conferencingEnabled; 
@property (nonatomic,readonly) BOOL conferencingBlocked; 
@property (nonatomic,readonly) BOOL conferencingAllowed; 
@property (nonatomic,readonly) BOOL commCenterDead;                                        //@synthesize commCenterDead=_commCenterDead - In the implementation block
@property (nonatomic,readonly) BOOL accountModificationRestricted; 
@property (nonatomic,readonly) BOOL isInMultiUserMode; 
@property (nonatomic,readonly) BOOL wantsBreakBeforeMake; 
@property (nonatomic,readonly) BOOL isC2KEquipment; 
@property (nonatomic,readonly) BOOL supportsHDRdecoding; 
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) BOOL supportsAppleIDIdentification; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsManateeForAppleCash; 
@property (nonatomic,readonly) BOOL supportsRegionForAppleCash; 
@property (nonatomic,readonly) BOOL supportsFMDV2; 
@property (nonatomic,readonly) BOOL supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) BOOL supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) BOOL supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsKeySharing; 
@property (nonatomic,readonly) BOOL supportsHarmony; 
@property (nonatomic,readonly) BOOL mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) BOOL supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsFunCam; 
@property (nonatomic,readonly) BOOL supportsAnimojiV2; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isGreenTea;                                            //@synthesize isGreenTea=_isGreenTea - In the implementation block
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * deviceRegionInfo; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * productOSVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) long long performanceClass; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) BOOL registrationSupported; 
@property (nonatomic,readonly) BOOL supportsSMSIdentification; 
@property (nonatomic,readonly) BOOL SIMInserted; 
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) BOOL lowRAMDevice; 
@property (nonatomic,readonly) BOOL slowCPUDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSString *)productVersion;
-(NSString *)deviceColor;
-(NSString *)productBuildVersion;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)faceTimeBlocked;
-(void)_initializeSIMInsertedCachedValue;
-(NSString *)productName;
-(NSString *)deviceName;
-(BOOL)supportsRegionForAppleCash;
-(void)_registerForServiceStatusNotifications;
-(long long)deviceType;
-(BOOL)_legacy_supportsSMSIdentification;
-(BOOL)supportsSimultaneousVoiceAndDataRightNow;
-(id)registrationState;
-(void)_unregisterForCommCenterReadyNotifications;
-(id)init;
-(BOOL)supportsWiFi;
-(BOOL)commCenterDead;
-(BOOL)multiwayBlocked;
-(BOOL)SIMInserted;
-(BOOL)identityServicesSupported;
-(void)operatorBundleChange:(id)arg1 ;
-(BOOL)supportsMMS;
-(void)phoneNumberChanged:(id)arg1 ;
-(void)_registerForCommCenterReadyNotifications;
-(void)_registerForInternalCoreTelephonyNotifications;
-(BOOL)slowCPUDevice;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(long long)performanceClass;
-(BOOL)_enoughPowerToSupportEffects;
-(NSString *)model;
-(BOOL)supportsNonWiFiFaceTime;
-(void)dealloc;
-(void)_registerForCarrierNotifications;
-(BOOL)supportsFMDV2;
-(BOOL)wantsBreakBeforeMake;
-(NSDictionary *)CTNetworkInformation;
-(BOOL)madridSupported;
-(BOOL)supportsAnimojiV2;
-(NSDictionary *)telephonyCapabilities;
-(void)_commCenterAlive;
-(NSString *)userAgentString;
-(BOOL)isInMultiUserMode;
-(BOOL)inProcess_isCallingSupported;
-(BOOL)faceTimeAvailable;
-(BOOL)isTelephonyDevice;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(BOOL)supportsTethering;
-(BOOL)supportsSMSIdentification;
-(BOOL)isGreenTea;
-(void)_handleCarrierSettingsChanged;
-(BOOL)supportsBackFacingCamera;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)accountModificationRestricted;
-(BOOL)supportsHandoff;
-(BOOL)supportsCellularData;
-(BOOL)supportsNonWiFiCalling;
-(BOOL)supportsFrontFacingCamera;
-(BOOL)nonWifiCallingAvailable;
-(BOOL)nonWifiFaceTimeAvailable;
-(BOOL)supportsHarmony;
-(void)_handleSIMStatusChangedToStatus:(id)arg1 ;
-(NSString *)deviceRegionInfo;
-(int)cpuFamily;
-(BOOL)nonWifiAvailableForBundleId:(id)arg1 ;
-(BOOL)faceTimeSupported;
-(NSString *)deviceIDPrefix;
-(BOOL)supportsKeySharing;
-(BOOL)supportsApplePay;
-(BOOL)callingBlocked;
-(long long)memorySize;
-(void)_lockdownStateChanged:(id)arg1 ;
-(BOOL)isC2KEquipment;
-(BOOL)callingSupported;
-(NSString *)deviceTypeIDPrefix;
-(void)_handlePotentialPhoneNumberRegistrationStateChanged;
-(BOOL)callingAvailable;
-(void)_unregisterForServiceStatusNotifications;
-(BOOL)multiwayAvailable;
-(void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
-(BOOL)registrationSupported;
-(BOOL)supportsManateeForAppleCash;
-(BOOL)iMessageSupported;
-(void)_registerForCapabilityNotifications;
-(BOOL)madridAvailable;
-(BOOL)supportsHDRdecoding;
-(BOOL)mmsConfigured;
-(BOOL)nonBluetoothAvailableForBundleId:(id)arg1 ;
-(BOOL)supportsAppleIDIdentification;
-(void)_updateCapabilities;
-(void)_registerForManagedConfigurationNotifications;
-(BOOL)iMessageAvailable;
-(void)_unregisterForManagedConfigurationNotifications;
-(NSString *)deviceInformationString;
-(void)_registerForLockdownNotifications;
-(BOOL)madridBlocked;
-(BOOL)conferencingBlocked;
-(void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
-(id)_serviceStatus;
-(BOOL)supportsWLAN;
-(BOOL)isInDualPhoneIdentityMode;
-(BOOL)conferencingAllowed;
-(BOOL)supportsSMS;
-(BOOL)multiwaySupported;
-(BOOL)conferencingEnabled;
-(BOOL)supportsHEIFEncoding;
-(void)_updateManagedConfigurationSettings;
-(BOOL)supportsFunCam;
-(BOOL)lowRAMDevice;
-(BOOL)iMessageBlocked;
-(NSString *)enclosureColor;
-(NSString *)telephoneNumber;
-(void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4 ;
-(NSString *)productOSVersion;
@end

