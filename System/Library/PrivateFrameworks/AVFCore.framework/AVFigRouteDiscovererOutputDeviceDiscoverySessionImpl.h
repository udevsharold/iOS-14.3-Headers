/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionImpl.h>

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {

	/*^block*/id _routeDiscovererCreator;
	OpaqueFigRouteDiscovererRef _discoverer;
	OpaqueAPSyncControllerRef _syncController;
	AVWeakReference* _weakObserver;
	AVOutputDeviceDiscoverySession* _parentSession;

}

@property (nonatomic,readonly) OpaqueFigRouteDiscovererRef routeDiscoverer;                                                      //@synthesize discoverer=_discoverer - In the implementation block
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession;                                          //@synthesize parentSession=_parentSession - In the implementation block
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_availableGroupsChanged;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)dealloc;
-(void)_routePresentChanged;
-(void)_serverDied;
-(void)_availableRoutesChanged;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1 ;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 ;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(id)initWithFigRouteDiscovererCreator:(/*^block*/id)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(BOOL)devicePresenceDetected;
-(AVAudioSession *)targetAudioSession;
@end

