/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary, NSArray;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;
	NSArray* _clusterComposition;

}
+(BOOL)supportsSecureCoding;
-(id)clusterComposition;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)requiresAuthorization;
-(BOOL)hasBatteryLevel;
-(float)volume;
-(id)MACAddress;
-(unsigned)clusterType;
-(id)modelSpecificInfo;
-(BOOL)canRelayCommunicationChannel;
-(unsigned long long)configuredClusterSize;
-(BOOL)isDeviceGroupable;
-(BOOL)supportsHAP;
-(unsigned)volumeCapabilities;
-(BOOL)groupContainsGroupLeader;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)parentGroupIdentifier;
-(BOOL)isGroupable;
-(unsigned)deviceType;
-(BOOL)isAddedToHomeKit;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)supportsExternalScreen;
-(id)bluetoothID;
-(float)batteryLevel;
-(BOOL)isRemoteControllable;
-(BOOL)isAirPlayReceiverSessionActive;
-(id)uid;
-(id)sourceInfo;
-(id)logicalDeviceID;
-(id)modelID;
-(BOOL)canAccessAppleMusic;
-(BOOL)isGroupLeader;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)canAccessRemoteAssets;
-(id)firmwareVersion;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isLocalDevice;
-(BOOL)isVolumeControlAvailable;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(unsigned)deviceSubtype;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isProxyGroupPlayer;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSkeleton:(id)arg1 ;
-(BOOL)isUsingJSONProtocol;
-(id)groupID;
-(id)name;
-(id)descriptor;
-(id)primaryID;
-(void)encodeWithCoder:(id)arg1 ;
@end

