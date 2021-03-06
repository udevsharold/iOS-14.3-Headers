/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CWFClient, CWFRequestParameters;

@interface CWFInterface : NSObject {

	BOOL _activated;
	CWFClient* _client;
	CWFRequestParameters* _requestParameters;

}

@property (nonatomic,readonly) CWFClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                       //@synthesize activated=_activated - In the implementation block
@property (copy) id invalidationHandler; 
@property (copy) id eventHandler; 
-(id)supported20MHzChannels;
-(BOOL)isActivated;
-(double)txPower;
-(id)highPriority;
-(id)authType;
-(id)deviceUUID;
-(id)BSSID;
-(id)DNSServerAddresses;
-(id)desense;
-(void)setActivated:(BOOL)arg1 ;
-(id)IPv4Addresses;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)AWDLOpMode;
-(id)MACAddress;
-(id)powerState;
-(id)IPv6Addresses;
-(int)virtualInterfaceRole;
-(BOOL)wakeOnWirelessEnabled;
-(id)perAntennaRSSI;
-(long long)WEPSubtype;
-(void)performActivity:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)securityType;
-(void)setEventHandler:(id)arg1 ;
-(id)AWDLStrategy;
-(id)cachedRoamStatus;
-(id)eventHandler;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(long long)noise;
-(id)AWDLExtensionStateMachineParameters;
-(long long)thermalIndex;
-(int)EAP8021XClientStatus;
-(CWFRequestParameters *)requestParameters;
-(void)activate;
-(BOOL)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)cachedAutoJoinStatus;
-(id)init;
-(int)bluetoothCoexistenceMode;
-(id)globalIPv6InterfaceName;
-(id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(id)chainAck;
-(void)performScanWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)globalIPv6NetworkServiceID;
-(id)AWDLSecondaryMasterChannel;
-(id)countryCode;
-(void)endAllActivities;
-(id)DHCPLeaseExpiresAt;
-(void)stopMonitoringEvent:(id)arg1 ;
-(unsigned long long)guardInterval;
-(id)cachedLinkQualityMetric;
-(id)interfaceName;
-(id)bluetoothCoexistenceConfig;
-(id)AWDLEncryptionType;
-(long long)RSSI;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(id)systemEventIDs;
-(int)supportedPHYModes;
-(BOOL)associateWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 ;
-(id)knownNetworkProfileMatchingScanResult:(id)arg1 ;
-(id)AWDLStatistics;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(id)AWDLSyncState;
-(id)globalIPv4NetworkServiceID;
-(id)veryLowPriority;
-(id)channel;
-(id)userInteractive;
-(id)IO80211InterfaceInfo;
-(id)cachedJoinStatus;
-(void)endActivity:(id)arg1 ;
-(id)globalIPv6NetworkServiceName;
-(id)AWDLAvailabilityWindowAPAlignment;
-(id)performScanWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)bluetoothCoexistenceProfiles2GHz;
-(id)capabilities;
-(id)targetQueue;
-(id)AWDLElectionRSSIThresholds;
-(id)networkServiceName;
-(BOOL)addKnownNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(void)clearAllEventHandlers;
-(int)PHYMode;
-(void)disassociateWithReason:(long long)arg1 ;
-(id)globalIPv4RouterAddress;
-(id)AWDLSyncChannelSequence;
-(id)knownNetworkProfileMatchingNetworkProfile:(id)arg1 ;
-(BOOL)setPower:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id*)arg3 ;
-(id)currentKnownNetworkProfile;
-(id)networkServiceID;
-(id)AWDLPeerTrafficRegistration;
-(unsigned)reachabilityFlags;
-(id)activities;
-(id)initWithServiceType:(long long)arg1 ;
-(id)currentScanResult;
-(BOOL)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)AWDLMasterChannel;
-(BOOL)beginActivity:(id)arg1 error:(id*)arg2 ;
-(id)AWDLPreferredChannels;
-(long long)serviceType;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(double)txRate;
-(id)background;
-(id)bluetoothCoexistenceProfiles5GHz;
-(id)systemAWDLPeerTrafficRegistrations;
-(id)AWDLElectionID;
-(id)rangingCapabilities;
-(id)auxiliaryInterface;
-(BOOL)powerOn;
-(id)AWDLPeerDatabase;
-(id)AWDLBTLEStateParameters;
-(unsigned long long)MCSIndex;
-(id)interfaceNames;
-(id)__adjustedRequestParameters;
-(id)cachedLinkDownStatus;
-(id)txChainPower;
-(BOOL)setRangeable:(BOOL)arg1 peerList:(id)arg2 error:(id*)arg3 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(id)systemActivities;
-(id)SSIDForVendor;
-(id)AWDL;
-(BOOL)cancelRequestsWithUUID:(id)arg1 error:(id*)arg2 ;
-(int)opMode;
-(id)AWDLPresenceMode;
-(BOOL)setThermalIndex:(long long)arg1 error:(id*)arg2 ;
-(id)AWDLGuardTime;
-(id)leakyAPStats;
-(id)IPv6RouterAddress;
-(id)utility;
-(id)IPv4RouterAddress;
-(id)AWDLSocialTimeSlots;
-(id)AWDLSidecarDiagnostics;
-(id)globalIPv4InterfaceName;
-(id)BSSIDForVendor;
-(id)lowPriority;
-(unsigned)EAP8021XSupplicantState;
-(id)globalIPv6Addresses;
-(id)AWDLElectionMetric;
-(unsigned)EAP8021XControlMode;
-(unsigned long long)DTIMInterval;
-(unsigned)EAP8021XControlState;
-(CWFClient *)client;
-(void)suspend;
-(int)__flagsForChannelWidth:(int)arg1 ;
-(id)AWDLSyncParameters;
-(id)DHCPLeaseStartedAt;
-(id)networkName;
-(id)globalIPv6RouterAddress;
-(id)knownNetworkProfilesWithProperties:(id)arg1 ;
-(id)globalIPv4NetworkServiceName;
-(void)stopMonitoringAllEvents;
-(id)AWDLContinuousElectionAlgorithmEnabled;
-(id)SSID;
-(id)eventIDs;
-(id)AWDLElectionParameters;
-(id)IO80211ControllerInfo;
-(id)parentInterfaceName;
-(void)associateWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setTargetQueue:(id)arg1 ;
-(id)performANQPWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)globalDNSServerAddresses;
-(void)performANQPWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopMonitoringEventType:(long long)arg1 ;
-(long long)WAPISubtype;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(id)initWithClient:(id)arg1 requestParameters:(id)arg2 ;
-(void)invalidate;
-(id)AWDLSyncEnabled;
-(id)AWDLAFTxMode;
-(id)virtualInterfaceNames;
-(id)userInitiated;
-(BOOL)startMonitoringEvent:(id)arg1 error:(id*)arg2 ;
-(id)globalIPv4Addresses;
-(void)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)resume;
-(id)desenseLevel;
-(BOOL)isNetworkServiceEnabled;
-(unsigned long long)numberOfSpatialStreams;
-(id)veryHighPriority;
-(id)invalidationHandler;
-(BOOL)startMonitoringEventType:(long long)arg1 error:(id*)arg2 ;
@end

