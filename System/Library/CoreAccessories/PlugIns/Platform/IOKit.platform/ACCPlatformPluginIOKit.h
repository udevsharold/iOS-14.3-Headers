/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCPlatformUSBFaultPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBCableTypePluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformIOKitPowerPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBCameraKitHubPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformSleepAssertionPluginProtocol.h>

@class USBFaultMonitor, NSString;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol> {

	BOOL _isRunning;
	USBFaultMonitor* _monitor;

}

@property (assign,nonatomic) BOOL isRunning;                         //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) USBFaultMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(USBFaultMonitor *)monitor;
-(BOOL)isRunning;
-(NSString *)pluginName;
-(void)startPlugin;
-(int)getExternalBatteryChargingType;
-(void)stopPlugin;
-(void)initPlugin;
-(void)setIsRunning:(BOOL)arg1 ;
-(unsigned)getUSBHubUnitLoadInmA:(id)arg1 ;
-(id)createBatteryNotificationClient;
-(BOOL)getUSBHubOverCurrentState:(id)arg1 ;
-(void)destroySleepNotificationsForClient:(id)arg1 ;
-(void)destroyBatteryNotificationsForClient:(id)arg1 ;
-(void)usbCableTypeMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(void)removeApplePencilSleepAssertion;
-(BOOL)getUSBFaultStateforType:(int)arg1 ;
-(BOOL)isExternalChargerConnected;
-(void)setUSBHubOverCurrentSiphoning:(id)arg1 ;
-(int)getBatteryChargingType;
-(void)usbFaultMonitor:(BOOL)arg1 forUUID:(id)arg2 ;
-(void)clientHandledSleepNotification:(id)arg1 ;
-(void)createSleepAssertionForUUID:(id)arg1 ;
-(void)resetUSBHubOverCurrentSiphoning:(id)arg1 ;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(void)createEASleepAssertion;
-(void)createApplePencilSleepAssertion;
-(void)destroySleepAssertionForUUID:(id)arg1 ;
-(unsigned)getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1 ;
-(BOOL)getBatteryChargingTypeIsInductive;
-(int)getBatteryChargingState;
-(id)createSleepNotificationClient;
-(unsigned)getUSBHubSiphoningCurrentRequirementInmA:(id)arg1 ;
-(void)removeEASleepAssertion;
-(void)setMonitor:(USBFaultMonitor *)arg1 ;
-(void)initUSBCameraKitHubNotifications:(id)arg1 ;
-(unsigned char)getBatteryChargeLevel;
@end
