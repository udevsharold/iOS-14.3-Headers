/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/WiFiSharing.platform/WiFiSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCPlatformWiFiSharingProtocol.h>
#import <libobjc.A.dylib/ACCPlatformPluginProtocol.h>

@class NSString;

@interface ACCPlatformPluginWiFiSharing : NSObject <ACCPlatformWiFiSharingProtocol, ACCPlatformPluginProtocol> {

	BOOL _hasWAPICapability;
	BOOL _isRunning;

}

@property (assign,nonatomic) BOOL isRunning;                        //@synthesize isRunning=_isRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(BOOL)isRunning;
-(NSString *)pluginName;
-(void)startPlugin;
-(void)stopPlugin;
-(void)initPlugin;
-(BOOL)handleAccessoryWiFiInformation:(id)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(id)copyDeviceWiFiNetworkInformation;
-(BOOL)isDeviceConnectedToWiFi;
-(BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)arg1 ;
-(BOOL)hasWAPICapability;
@end

