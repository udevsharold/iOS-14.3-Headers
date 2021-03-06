/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Platform-Bluetooth/Platform-Bluetooth-Structs.h>
#import <libobjc.A.dylib/ACCPlatformBluetoothStatusPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformBluetoothAccessoryInformationPluginProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface ACCPlatformPluginBluetooth : NSObject <ACCPlatformBluetoothStatusPluginProtocol, ACCPlatformBluetoothAccessoryInformationPluginProtocol> {

	BOOL _isRunning;
	BOOL _btUpdatesStarted;
	BTSessionImplRef _btSession;
	NSObject*<OS_dispatch_queue> _btEventQueue;
	NSMutableDictionary* _accessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                         //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) BOOL btUpdatesStarted;                                  //@synthesize btUpdatesStarted=_btUpdatesStarted - In the implementation block
@property (assign,nonatomic) BTSessionImplRef btSession;                             //@synthesize btSession=_btSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> btEventQueue;              //@synthesize btEventQueue=_btEventQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryList;                    //@synthesize accessoryList=_accessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(id)accessoryAttached:(id)arg1 ;
-(BOOL)isRunning;
-(NSString *)pluginName;
-(void)startPlugin;
-(BOOL)btUpdatesStarted;
-(void)stopPlugin;
-(void)initPlugin;
-(void)setIsRunning:(BOOL)arg1 ;
-(id)getAccessoryList;
-(void)pluginBTDevice:(id)arg1 btAccessoryManager:(BTAccessoryManagerImplRef)arg2 btDevice:(BTDeviceImplRef)arg3 ;
-(void)iterateRegisteredComponentsForKnownAddresses:(id)arg1 allOFF:(BOOL)arg2 ;
-(void)unplugBTDevice:(id)arg1 btAccessoryManager:(BTAccessoryManagerImplRef)arg2 btDevice:(BTDeviceImplRef)arg3 ;
-(void)setBtSession:(BTSessionImplRef)arg1 ;
-(void)setBtEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)accessoryList;
-(NSObject*<OS_dispatch_queue>)btEventQueue;
-(void)startCheckingForUpdates:(id)arg1 forAccessory:(id)arg2 ;
-(id)nameForMacAddress:(id)arg1 ;
-(int)updateBTComponent:(id)arg1 forAccessory:(id)arg2 withEnabledState:(BOOL)arg3 ;
-(void)performInit;
-(void)setBtUpdatesStarted:(BOOL)arg1 ;
-(BTSessionImplRef)btSession;
-(void)stopCheckingForUpdates:(id)arg1 forAccessory:(id)arg2 ;
-(void)setAccessoryList:(NSMutableDictionary *)arg1 ;
-(void)accessoryDetached:(id)arg1 ;
@end

