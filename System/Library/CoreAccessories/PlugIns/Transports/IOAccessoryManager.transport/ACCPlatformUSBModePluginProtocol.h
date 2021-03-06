/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformUSBModePluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(int)USBModeForEndpointUUID:(id)arg1;
-(int)USBModeForConnectionUUID:(id)arg1;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2;
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2;

@end

