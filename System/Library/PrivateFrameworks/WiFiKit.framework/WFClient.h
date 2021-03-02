/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, WFInterface, CWFInterface, NSRunLoop, NSNumber, NSObject, WFNetworkScanRecord;

@interface WFClient : NSObject {

	BOOL _networkRestrictionActive;
	BOOL _powered;
	BOOL _isKnownNetworkUIEnabled;
	BOOL _WAPIEnabled;
	BOOL _diagnosticsEnabled;
	BOOL _coreWiFiEnabled;
	BOOL _randomMACFeatureEnabled;
	BOOL _randomFeatureForSecureNetworksEnabled;
	BOOL _WPA3PersonalEnabled;
	BOOL _WPA3EnterpriseEnabled;
	BOOL _mfpCapable;
	BOOL _powerModificationDisabled;
	BOOL _managedAppleID;
	BOOL _showAllHS20Networks;
	BOOL _wiFiHealthUIDisabled;
	BOOL _extraLoggingEnabled;
	BOOL _diagnosticsModeEnabled;
	BOOL _userAutoJoinState;
	unsigned long long _airplaneModeBehavior;
	NSString* _whitelistingUUID;
	long long _askToJoinMode;
	long long _autoInstantHotspotJoinOption;
	WFInterface* _interface;
	CWFInterface* _cInterface;
	WiFiManagerClientRef _manager;
	NSRunLoop* _callbackRunLoop;
	NSNumber* _rssiThresholdNumber;
	NSObject*<OS_dispatch_queue> _serialClientQueue;
	NSObject*<OS_dispatch_queue> _currentNetworkQueue;
	WFNetworkScanRecord* _currentNetwork;

}

@property (nonatomic,retain) WFInterface * interface;                                                                                //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) CWFInterface * cInterface;                                                                              //@synthesize cInterface=_cInterface - In the implementation block
@property (assign) WiFiManagerClientRef manager;                                                                                     //@synthesize manager=_manager - In the implementation block
@property (retain) NSRunLoop * callbackRunLoop;                                                                                      //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (assign) BOOL showAllHS20Networks;                                                                                         //@synthesize showAllHS20Networks=_showAllHS20Networks - In the implementation block
@property (getter=isWiFiHealthUIDisabled) BOOL wiFiHealthUIDisabled;                                                                 //@synthesize wiFiHealthUIDisabled=_wiFiHealthUIDisabled - In the implementation block
@property (assign) BOOL extraLoggingEnabled;                                                                                         //@synthesize extraLoggingEnabled=_extraLoggingEnabled - In the implementation block
@property (getter=isDiagnosticsModeEnabled) BOOL diagnosticsModeEnabled;                                                             //@synthesize diagnosticsModeEnabled=_diagnosticsModeEnabled - In the implementation block
@property (assign,getter=isNetworkRestrictionActive,nonatomic) BOOL networkRestrictionActive;                                        //@synthesize networkRestrictionActive=_networkRestrictionActive - In the implementation block
@property (retain) NSNumber * rssiThresholdNumber;                                                                                   //@synthesize rssiThresholdNumber=_rssiThresholdNumber - In the implementation block
@property (nonatomic,readonly) BOOL isKnownNetworkUIEnabled;                                                                         //@synthesize isKnownNetworkUIEnabled=_isKnownNetworkUIEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long airplaneModeBehavior;                                                                //@synthesize airplaneModeBehavior=_airplaneModeBehavior - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinState;                                                                                 //@synthesize userAutoJoinState=_userAutoJoinState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialClientQueue;                                                         //@synthesize serialClientQueue=_serialClientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> currentNetworkQueue;                                                       //@synthesize currentNetworkQueue=_currentNetworkQueue - In the implementation block
@property (nonatomic,readonly) NSString * whitelistingUUID;                                                                          //@synthesize whitelistingUUID=_whitelistingUUID - In the implementation block
@property (assign,getter=isWPA3PersonalEnabled,nonatomic) BOOL WPA3PersonalEnabled;                                                  //@synthesize WPA3PersonalEnabled=_WPA3PersonalEnabled - In the implementation block
@property (assign,getter=isWPA3EnterpriseEnabled,nonatomic) BOOL WPA3EnterpriseEnabled;                                              //@synthesize WPA3EnterpriseEnabled=_WPA3EnterpriseEnabled - In the implementation block
@property (assign,getter=isMfpCapable,nonatomic) BOOL mfpCapable;                                                                    //@synthesize mfpCapable=_mfpCapable - In the implementation block
@property (assign,getter=isManagedAppleID,nonatomic) BOOL managedAppleID;                                                            //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * currentNetwork;                                                                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) BOOL powered;                                                                                                     //@synthesize powered=_powered - In the implementation block
@property (readonly) NSString * hardwareMACAddress; 
@property (assign,getter=isWAPIEnabled,nonatomic) BOOL WAPIEnabled;                                                                  //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (assign,getter=isDiagnosticsEnabled,nonatomic) BOOL diagnosticsEnabled;                                                    //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (assign,nonatomic) long long askToJoinMode;                                                                                //@synthesize askToJoinMode=_askToJoinMode - In the implementation block
@property (assign,getter=isCoreWiFiEnabled,nonatomic) BOOL coreWiFiEnabled;                                                          //@synthesize coreWiFiEnabled=_coreWiFiEnabled - In the implementation block
@property (assign,getter=israndomMACFeatureEnabled,nonatomic) BOOL randomMACFeatureEnabled;                                          //@synthesize randomMACFeatureEnabled=_randomMACFeatureEnabled - In the implementation block
@property (assign,getter=isRandomFeatureForSecureNetworksEnabled,nonatomic) BOOL randomFeatureForSecureNetworksEnabled;              //@synthesize randomFeatureForSecureNetworksEnabled=_randomFeatureForSecureNetworksEnabled - In the implementation block
@property (getter=isPowerModificationDisabled,nonatomic,readonly) BOOL powerModificationDisabled;                                    //@synthesize powerModificationDisabled=_powerModificationDisabled - In the implementation block
@property (assign,nonatomic) long long autoInstantHotspotJoinOption;                                                                 //@synthesize autoInstantHotspotJoinOption=_autoInstantHotspotJoinOption - In the implementation block
+(id)sharedInstance;
-(long long)rssiThreshold;
-(void)_updateDiagnosticsEnabled;
-(void)setInterface:(WFInterface *)arg1 ;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(void)setIsCoreWiFiEnabled:(BOOL)arg1 ;
-(void)_updateNetwork:(WiFiNetworkRef)arg1 ;
-(void)_scheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 runLoop:(id)arg2 ;
-(long long)askToJoinMode;
-(void)_notifyWiFiPropertyChanged:(id)arg1 value:(id)arg2 ;
-(void)setMfpCapable:(BOOL)arg1 ;
-(BOOL)isNetworkRestrictionActive;
-(id)init;
-(WFInterface *)interface;
-(void)_setupCoreWiFiInterface;
-(void)setCoreWiFiEnabled:(BOOL)arg1 ;
-(id)newRandomMACAddressForSSID:(id)arg1 ;
-(BOOL)hasShownSBPickerDontAsk;
-(id)_getGeoTagsForNetwork:(WiFiNetworkRef)arg1 ;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(void)_unscheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 ;
-(void)dispatchJoinRecommendationAction:(long long)arg1 profile:(id)arg2 ;
-(BOOL)isDiagnosticsModeEnabled;
-(void)_askToJoinNotification:(unsigned)arg1 ;
-(void)asyncUserAutoJoinState:(/*^block*/id)arg1 ;
-(void)setSerialClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_joinRecommendationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)setMISState:(BOOL)arg1 ;
-(void)_updateWAPIEnabled;
-(void)setAirplaneModeBehavior:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setCurrentNetworkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHasShownSBPickerDontAsk:(BOOL)arg1 ;
-(void)setWPA3PersonalEnabled:(BOOL)arg1 ;
-(id)_getScoreForNetwork:(WiFiNetworkRef)arg1 ;
-(void)_setupDefaultInterfaceWithManager:(WiFiManagerClientRef)arg1 ;
-(void)dispatchAskToJoinAction:(unsigned long long)arg1 notificationId:(unsigned)arg2 network:(id)arg3 ;
-(BOOL)userAutoJoinState;
-(void)setCInterface:(CWFInterface *)arg1 ;
-(void)_updateAskToJoinMode;
-(long long)autoInstantHotspotJoinOption;
-(void)_updateRandomMACFeatureForSecuredNetworksEnabled;
-(BOOL)isCoreWiFiEnabled;
-(NSString *)hardwareMACAddress;
-(BOOL)isWPA3EnterpriseEnabled;
-(BOOL)isWiFiHealthUIDisabled;
-(long long)_askToJoinModeFromWiFiAskToJoinPreference:(int)arg1 ;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
-(void)_updatePowerState;
-(unsigned long long)airplaneModeBehavior;
-(BOOL)isInfraAssociationAllowed;
-(BOOL)israndomMACFeatureEnabled;
-(CWFInterface *)cInterface;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)setWiFiHealthUIDisabled:(BOOL)arg1 ;
-(BOOL)extraLoggingEnabled;
-(void)setClientTypeAsForeground;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(WiFiManagerClientRef)manager;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1 ;
-(void)_setAutoJoinEnabled:(BOOL)arg1 forNetwork:(WiFiNetworkRef)arg2 ;
-(void)setShowAllHS20Networks:(BOOL)arg1 ;
-(void)setWPA3EnterpriseEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)currentNetworkQueue;
-(void)_logWiFiManagerPropertyChange:(id)arg1 value:(BOOL)arg2 ;
-(void)_managedConfigurationDidChange:(id)arg1 ;
-(NSNumber *)rssiThresholdNumber;
-(void)setRssiThresholdNumber:(NSNumber *)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(BOOL)powered;
-(WFNetworkScanRecord *)currentNetwork;
-(void)asyncPowered:(/*^block*/id)arg1 ;
-(void)_userAutoJoinStateDidChange:(BOOL)arg1 info:(id)arg2 ;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialClientQueue;
-(void)_addNetwork:(WiFiNetworkRef)arg1 ;
-(BOOL)isRandomFeatureForSecureNetworksEnabled;
-(void)setNetworkRestrictionActive:(BOOL)arg1 ;
-(BOOL)isManagedAppleID;
-(BOOL)isKnownNetworkUIEnabled;
-(void)setRandomMACFeatureEnabled:(BOOL)arg1 ;
-(BOOL)isWPA3PersonalEnabled;
-(void)_updateRandomMACFeatureEnabled;
-(void)_updatePowerModificationDisableState;
-(void)setPowerModificationDisableState:(BOOL)arg1 ;
-(BOOL)isPowerModificationDisabled;
-(void)setRandomFeatureForSecureNetworksEnabled:(BOOL)arg1 ;
-(void)setExtraLoggingEnabled:(BOOL)arg1 ;
-(void)_updateDebugProperties;
-(void)_updateAirplaneModeStickiness;
-(void)_updateManagedAppleIDState;
-(BOOL)isWAPIEnabled;
-(void)_updateCoreWiFiEnabled;
-(void)_trustNotificationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 data:(id)arg3 ;
-(BOOL)showAllHS20Networks;
-(void)asyncMISState:(/*^block*/id)arg1 ;
-(id)initWithCallbackRunLoop:(id)arg1 ;
-(void)_managedAppleIDStateDidChange:(BOOL)arg1 ;
-(void)setAskToJoinMode:(long long)arg1 ;
-(void)_updateAutoInstantHotspotJoinOption;
-(NSRunLoop *)callbackRunLoop;
-(void)_updateNetworkRestrictionActive;
-(void)_removeNetwork:(WiFiNetworkRef)arg1 ;
-(void)_updateWPA3Properties:(WiFiManagerClientRef)arg1 ;
-(void)setUserAutoJoinState:(BOOL)arg1 ;
-(NSString *)whitelistingUUID;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)setDiagnosticsModeEnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsEnabled;
-(id)_copyCurrentNetworks;
-(void)dispatchCertificateTrustAction:(long long)arg1 profile:(id)arg2 ;
-(BOOL)isMfpCapable;
-(void)setEnableRandomMACForNetwork:(id)arg1 enable:(BOOL)arg2 randomMAC:(id)arg3 ;
-(void)setPowered:(BOOL)arg1 ;
-(long long)_hotspotJoinOptionFromWiFiAutoHotspotMode:(int)arg1 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
-(void)reloadConfiguration;
@end
