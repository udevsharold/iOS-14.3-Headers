/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}
+(void)initialize;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 ;
+(void)localDeviceWithCompletion:(/*^block*/id)arg1 ;
+(void)localDeviceDidChange;
+(BOOL)canSyncController:(OpaqueAPSyncControllerRef)arg1 supportRoute:(CFDictionaryRef)arg2 ;
+(BOOL)prefersRouteDescriptors;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(const CFDictionaryRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 syncController:(OpaqueAPSyncControllerRef)arg3 ;
+(id)outputDeviceWithRouteDescriptor:(CFDictionaryRef)arg1 routingContextFactory:(id)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 ;
+(id)outputDeviceWithFigEndpoint:(OpaqueFigEndpointRef)arg1 routingContextFactory:(id)arg2 ;
+(id)sharedLocalDevice;
-(BOOL)canBeGroupLeader;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)requiresAuthorization;
-(BOOL)hasBatteryLevel;
-(id)connectedPairedDevices;
-(id)currentBluetoothListeningMode;
-(float)volume;
-(void)outputDeviceImplDidChangeVolume:(id)arg1 ;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(long long)clusterType;
-(id)deviceName;
-(id)ID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(long long)configuredClusterSize;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(void)setVolume:(float)arg1 ;
-(long long)HAPConformance;
-(BOOL)isClusterLeader;
-(BOOL)groupContainsGroupLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(void)outputDeviceImplDidChangeVolumeControlType:(id)arg1 ;
-(BOOL)isInUseByPairedDevice;
-(id)airPlayProperties;
-(BOOL)participatesInGroupPlayback;
-(long long)volumeControlType;
-(long long)deviceType;
-(void)setSecondDisplayEnabled:(BOOL)arg1 ;
-(BOOL)supportsBluetoothSharing;
-(BOOL)canBeGrouped;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(float)batteryLevel;
-(id)manufacturer;
-(id)clusteredDeviceDescriptions;
-(unsigned long long)deviceFeatures;
-(id)logicalDeviceID;
-(id)modelID;
-(id)availableBluetoothListeningModes;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canAccessAppleMusic;
-(BOOL)isGroupLeader;
-(id)identifyingMACAddress;
-(BOOL)canAccessRemoteAssets;
-(id)init;
-(BOOL)canSetVolume;
-(id)firmwareVersion;
-(id)proposedGroupID;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isLogicalDeviceLeader;
-(id)serialNumber;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(long long)deviceSubType;
-(id)figEndpointOutputDeviceImpl;
-(void)outputDeviceImplDidChangeProposedGroupID:(id)arg1 ;
-(void)dealloc;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(id)modelSpecificInformation;
-(id)initWithOutputDeviceImpl:(id)arg1 commChannelManager:(id)arg2 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(id)clusterID;
-(id)impl;
-(id)description;
-(id)deviceID;
-(void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)communicationChannelDelegate;
-(BOOL)isEqual:(id)arg1 ;
-(id)groupID;
-(id)name;
-(void)setCurrentBluetoothListeningMode:(id)arg1 ;
-(void)setCommunicationChannelDelegate:(id)arg1 ;
-(void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1 ;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)updateFrecencyScore;
-(double)frecencyScore;
@end
