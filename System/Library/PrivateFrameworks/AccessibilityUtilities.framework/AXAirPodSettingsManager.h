/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSPointerArray, NSObject, AXDispatchTimer, NSMutableSet, NSArray;

@interface AXAirPodSettingsManager : NSObject {

	NSPointerArray* _deviceListeners;
	BTSessionImplRef _session;
	BTLocalDeviceImplRef _localDevice;
	BTAccessoryManagerImplRef _accessoryManager;
	NSObject*<OS_dispatch_queue> _queue;
	AXDispatchTimer* _delayTimer;
	NSMutableSet* _deviceMap;

}

@property (nonatomic,readonly) NSArray * pairedAirPods; 
+(id)sharedInstance;
-(id)accessibilityDomainAccessor;
-(void)nps_setTapSpeed:(float)arg1 forDeviceAddress:(id)arg2 ;
-(void)nps_setNoiseCancellationEnabledWithOneUnit:(BOOL)arg1 forDeviceAddress:(id)arg2 ;
-(void)nps_setHoldDuration:(float)arg1 forDeviceAddress:(id)arg2 ;
-(void)_probeAccessories;
-(id)_nps_airPodsDictionaryForPreference:(id)arg1 ;
-(void)_nps_updateAirPodsDictionaryForPreference:(id)arg1 deviceAddress:(id)arg2 value:(id)arg3 ;
-(void)_didConnectWithSession:(BTSessionImplRef)arg1 ;
-(void)_didDisconnect;
-(void)_beginDetach;
-(void)_retrieveSettingsFromNewDevices:(id)arg1 ;
-(NSArray *)pairedAirPods;
-(void)_retrieveSettingsForAddress:(id)arg1 ;
-(void)_applySettingsForAddress:(id)arg1 ;
-(id)_productIdentifierForBTDevice:(id)arg1 ;
-(float)tapSpeedForDeviceAddress:(id)arg1 ;
-(void)setTapSpeed:(float)arg1 forDeviceAddress:(id)arg2 ;
-(BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg1 ;
-(void)setNoiseCancellationEnabledWithOneUnit:(BOOL)arg1 forDeviceAddress:(id)arg2 ;
-(float)holdDurationForDeviceAddress:(id)arg1 ;
-(void)setHoldDuration:(float)arg1 forDeviceAddress:(id)arg2 ;
-(float)nps_tapSpeedForDeviceAddress:(id)arg1 ;
-(float)nps_holdDurationForDeviceAddress:(id)arg1 ;
-(BOOL)nps_noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg1 ;
-(void)_serviceEventForDevice:(BTDeviceImplRef)arg1 serviceMask:(unsigned)arg2 eventType:(int)arg3 specificEvent:(unsigned)arg4 result:(int)arg5 ;
-(void)_accessoryEventForManager:(BTAccessoryManagerImplRef)arg1 event:(int)arg2 device:(BTDeviceImplRef)arg3 state:(int)arg4 ;
-(void)_sessionEventForSession:(BTSessionImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
-(void)dealloc;
-(void)_applySettings;
-(id)initSharedInstance;
-(void)start;
@end

