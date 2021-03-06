/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	unsigned _targetAudioSessionID;
	NSString* _routingContextUID;
	NSArray* _availableOutputDevices;
	NSArray* _virtualOutputDevices;
	BOOL _scheduledAvailableOutputDevicesReload;
	int _airplayActiveNotificationToken;
	BOOL _isLocalDeviceBeingAirplayedTo;

}

@property (nonatomic,retain) NSArray * availableEndpoints; 
@property (nonatomic,retain) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) NSArray * virtualOutputDevices;              //@synthesize virtualOutputDevices=_virtualOutputDevices - In the implementation block
+(void)setDaemonVirtualDevices:(id)arg1 ;
+(id)daemonVirtualDevices;
-(id)routingContextUID;
-(void)_onQueue_reload;
-(BOOL)_shouldCreateClusterOutputDevices;
-(void)dealloc;
-(void)setRoutingContextUID:(id)arg1 ;
-(void)_onQueue_reloadAvailableOutputDevices;
-(NSArray *)availableOutputDevices;
-(unsigned)endpointFeatures;
-(id)initWithConfiguration:(id)arg1 ;
-(id)description;
-(unsigned)discoveryMode;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)_scheduleAvailableOutputDevicesReload;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(void)setTargetAudioSessionID:(unsigned)arg1 ;
-(BOOL)devicePresenceDetected;
-(void)_scheduleReload;
-(NSArray *)virtualOutputDevices;
-(unsigned)targetAudioSessionID;
-(NSArray *)availableEndpoints;
-(void)setAvailableOutputDevices:(NSArray *)arg1 ;
@end

