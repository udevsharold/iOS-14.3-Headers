/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSArray, NSDictionary, NSString;

@interface MRUserSettings : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _externalDevicePairingAllowed;

}

@property (nonatomic,readonly) BOOL usePeerToPeerExternalDeviceConnections; 
@property (nonatomic,readonly) BOOL useNoDelayOptionForExternalDeviceSockets; 
@property (nonatomic,readonly) BOOL useDebugAVRouteWithoutVolumeControl; 
@property (nonatomic,readonly) BOOL useAPSyncAPI; 
@property (nonatomic,readonly) BOOL useOutputDeviceTransport; 
@property (nonatomic,readonly) BOOL useClusterDevices; 
@property (nonatomic,readonly) BOOL shouldInitializeTelevisionBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeGenericBonjourService; 
@property (nonatomic,readonly) BOOL shouldInitializeRapportService; 
@property (nonatomic,readonly) BOOL shouldLogPairingSetupCode; 
@property (nonatomic,readonly) BOOL shouldLogArtwork; 
@property (nonatomic,readonly) BOOL verboseProtocolMessageLogging; 
@property (nonatomic,readonly) BOOL shouldWakeDeviceForRemoteControlCommands; 
@property (nonatomic,readonly) BOOL hasExternalDeviceSocketQOSLevelSet; 
@property (nonatomic,readonly) long long externalDeviceSocketQOSLevel; 
@property (assign,getter=isExternalDevicePairingAllowed,nonatomic) BOOL externalDevicePairingAllowed;                                 //@synthesize externalDevicePairingAllowed=_externalDevicePairingAllowed - In the implementation block
@property (nonatomic,readonly) double externalDeviceTimeoutDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceNowPlayingInfoArtworkCoalesceDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectWaitDuration; 
@property (nonatomic,readonly) double externalDeviceDisconnectSleepDuration; 
@property (nonatomic,readonly) double externalDeviceSleepAssertionOnClientConnectDuration; 
@property (nonatomic,readonly) double bluetoothDeviceResumeDuration; 
@property (nonatomic,readonly) double broadcastCommandWaitDuration; 
@property (nonatomic,readonly) double airPlayOutputContextInitTimeoutDuration; 
@property (nonatomic,readonly) BOOL useExternalDeviceSystemPairing; 
@property (nonatomic,readonly) long long maxTransactionMemorySize; 
@property (nonatomic,readonly) double transactionWaitDurationOnOutOfMemory; 
@property (nonatomic,readonly) double transactionWaitDurationOnXpcSend; 
@property (nonatomic,readonly) double transactionWaitDurationOnNetworkSend; 
@property (nonatomic,readonly) BOOL useSystemAudioContextForAirPlayTransport; 
@property (nonatomic,readonly) BOOL useGenericTransportForHostedEndpoints; 
@property (nonatomic,retain) NSArray * connectedClientAuditTokens; 
@property (nonatomic,retain) NSArray * expectedClientAuditTokens; 
@property (nonatomic,readonly) double queuedCommandsTimeoutInterval; 
@property (nonatomic,readonly) BOOL computeNowPlayingApplication; 
@property (nonatomic,readonly) double nowPlayingApplicationTimeout; 
@property (nonatomic,readonly) BOOL takelockScreenAssertion; 
@property (nonatomic,readonly) BOOL useProactiveEndpoint; 
@property (nonatomic,readonly) BOOL connectToEndpointWhenBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenAnyEndpointBeginsPlayback; 
@property (nonatomic,readonly) BOOL connectToUserSelectedEndpoint; 
@property (nonatomic,readonly) double discoverEndpointTimeoutInterval; 
@property (nonatomic,readonly) BOOL needNowPlayingForegroundState; 
@property (nonatomic,readonly) double deviceRecentlyUsedInterval; 
@property (nonatomic,readonly) double mediaRecentlyPlayedInterval; 
@property (nonatomic,readonly) double endpointRecentlyUserSelectedInterval; 
@property (nonatomic,readonly) double launchApplicationTimeoutInterval; 
@property (nonatomic,readonly) BOOL supportProximityMigration; 
@property (nonatomic,readonly) BOOL supportMigration; 
@property (nonatomic,readonly) BOOL supportNewMigrationBehaviorForProximity; 
@property (nonatomic,readonly) BOOL supportMigrationBackToPersonalDevice; 
@property (nonatomic,readonly) BOOL supportNewMigrationArchitecture; 
@property (nonatomic,readonly) BOOL supportProximityMigrationV2; 
@property (nonatomic,readonly) BOOL forceFadeForEveryHandoff; 
@property (nonatomic,readonly) BOOL supportLastPlayingDevice; 
@property (nonatomic,readonly) BOOL sendLastPlayingDeviceToHome; 
@property (nonatomic,readonly) BOOL connectToAllEndpointsWhenInProximityToAnyDevice; 
@property (nonatomic,readonly) double lastPlayingDeviceThresholdInterval; 
@property (nonatomic,readonly) double sendPlaybackSessionUpdateToCompanionCoalesceInterval; 
@property (nonatomic,readonly) BOOL supportLockscreenPlatterDisplayForPersonalDevice; 
@property (nonatomic,readonly) double personalDeviceLockScreenTimeout; 
@property (nonatomic,retain) NSDictionary * personalDeviceState; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMediaSuggestions; 
@property (nonatomic,readonly) BOOL supportProactiveSuggestion; 
@property (nonatomic,readonly) BOOL visuallyIdentifyProactiveSuggestion; 
@property (nonatomic,readonly) double activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval; 
@property (nonatomic,readonly) BOOL supportNanoLinkAgent; 
@property (nonatomic,readonly) NSArray * jsonClientUIDs; 
@property (nonatomic,retain) NSString * lastBootUUID; 
@property (nonatomic,readonly) NSArray * remoteControlDiscoveryBlacklist; 
@property (nonatomic,readonly) NSArray * remoteControlDiscoveryWhitelist; 
+(id)currentSettings;
-(BOOL)supportNanoLinkAgent;
-(double)transactionWaitDurationOnOutOfMemory;
-(double)launchApplicationTimeoutInterval;
-(BOOL)useClusterDevices;
-(long long)externalDeviceSocketQOSLevel;
-(id)init;
-(id)defaultSupportedCommandsData;
-(id)localLastPlayingDate;
-(double)externalDeviceTimeoutDuration;
-(NSArray *)expectedClientAuditTokens;
-(double)discoverEndpointTimeoutInterval;
-(BOOL)shouldLogPairingSetupCode;
-(void)setExternalDevicePairingAllowed:(BOOL)arg1 ;
-(BOOL)shouldInitializeTelevisionBonjourService;
-(BOOL)useNoDelayOptionForExternalDeviceSockets;
-(BOOL)usePeerToPeerExternalDeviceConnections;
-(BOOL)useExternalDeviceSystemPairing;
-(NSArray *)jsonClientUIDs;
-(BOOL)shouldInitializeRapportService;
-(BOOL)needNowPlayingForegroundState;
-(void)setLocalLastPlayingDate:(id)arg1 ;
-(void)setExpectedClientAuditTokens:(NSArray *)arg1 ;
-(double)sendPlaybackSessionUpdateToCompanionCoalesceInterval;
-(NSArray *)remoteControlDiscoveryBlacklist;
-(BOOL)sendLastPlayingDeviceToHome;
-(void)setPersonalDeviceState:(NSDictionary *)arg1 ;
-(BOOL)shouldInitializeGenericBonjourService;
-(BOOL)connectToEndpointWhenBeginsPlayback;
-(BOOL)supportMigration;
-(id)defaultSupportedCommandsDataForClient:(id)arg1 ;
-(NSArray *)connectedClientAuditTokens;
-(BOOL)useOutputDeviceTransport;
-(NSArray *)remoteControlDiscoveryWhitelist;
-(BOOL)shouldWakeDeviceForRemoteControlCommands;
-(double)personalDeviceLockScreenTimeout;
-(unsigned long long)maximumNumberOfMediaSuggestions;
-(double)externalDeviceDisconnectSleepDuration;
-(BOOL)computeNowPlayingApplication;
-(double)externalDeviceSleepAssertionOnClientConnectDuration;
-(BOOL)takelockScreenAssertion;
-(long long)maxTransactionMemorySize;
-(BOOL)verboseProtocolMessageLogging;
-(BOOL)useSystemAudioContextForAirPlayTransport;
-(double)broadcastCommandWaitDuration;
-(NSString *)lastBootUUID;
-(BOOL)useGenericTransportForHostedEndpoints;
-(BOOL)connectToUserSelectedEndpoint;
-(BOOL)isExternalDevicePairingAllowed;
-(BOOL)useAPSyncAPI;
-(BOOL)supportLockscreenPlatterDisplayForPersonalDevice;
-(BOOL)visuallyIdentifyProactiveSuggestion;
-(unsigned)localPlaybackState;
-(BOOL)useDebugAVRouteWithoutVolumeControl;
-(double)activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;
-(double)transactionWaitDurationOnNetworkSend;
-(void)setConnectedClientAuditTokens:(NSArray *)arg1 ;
-(NSDictionary *)personalDeviceState;
-(double)externalDeviceNowPlayingInfoArtworkCoalesceDuration;
-(BOOL)forceFadeForEveryHandoff;
-(BOOL)supportMigrationBackToPersonalDevice;
-(double)externalDeviceDisconnectWaitDuration;
-(double)nowPlayingApplicationTimeout;
-(BOOL)shouldLogArtwork;
-(BOOL)supportLastPlayingDevice;
-(double)airPlayOutputContextInitTimeoutDuration;
-(double)deviceRecentlyUsedInterval;
-(double)bluetoothDeviceResumeDuration;
-(BOOL)supportProximityMigrationV2;
-(double)endpointRecentlyUserSelectedInterval;
-(double)externalDeviceNowPlayingInfoCoalesceDuration;
-(BOOL)supportProximityMigration;
-(BOOL)connectToAllEndpointsWhenInProximityToAnyDevice;
-(BOOL)useProactiveEndpoint;
-(BOOL)supportNewMigrationBehaviorForProximity;
-(BOOL)connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
-(BOOL)hasExternalDeviceSocketQOSLevelSet;
-(BOOL)supportNewMigrationArchitecture;
-(void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2 ;
-(double)mediaRecentlyPlayedInterval;
-(double)queuedCommandsTimeoutInterval;
-(BOOL)supportProactiveSuggestion;
-(void)setLocalPlaybackState:(unsigned)arg1 ;
-(double)lastPlayingDeviceThresholdInterval;
-(double)transactionWaitDurationOnXpcSend;
-(void)setLastBootUUID:(NSString *)arg1 ;
@end

