/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformIOKitPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(int)getExternalBatteryChargingType;
-(id)createBatteryNotificationClient;
-(void)destroySleepNotificationsForClient:(id)arg1;
-(void)destroyBatteryNotificationsForClient:(id)arg1;
-(BOOL)isExternalChargerConnected;
-(int)getBatteryChargingType;
-(void)clientHandledSleepNotification:(id)arg1;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(BOOL)getBatteryChargingTypeIsInductive;
-(int)getBatteryChargingState;
-(id)createSleepNotificationClient;
-(unsigned char)getBatteryChargeLevel;

@end

