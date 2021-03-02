/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceOverServices/VoiceOverServices-Structs.h>
@class NSMutableDictionary, NSDictionary, NSArray;

@interface VOSBluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	long long _available;
	unsigned _authorizedServices;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
	BOOL _wantsScanningEnabled;
	BOOL _wantsDiscoveryEnabled;
	NSDictionary* _brailleDriverDeviceDetectionInfo;

}

@property (assign,nonatomic) unsigned authorizedServices;                   //@synthesize authorizedServices=_authorizedServices - In the implementation block
@property (nonatomic,readonly) NSArray * connectingDevices; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (nonatomic,readonly) NSArray * pairedBrailleDevices; 
+(id)sharedInstance;
+(int)lastInitError;
-(BOOL)available;
-(void)unpairDevice:(id)arg1 ;
-(long long)powerState;
-(void)_restartScan;
-(BOOL)audioConnected;
-(void)cancelPairing;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(id)init;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)_attach:(id)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)_connectabilityChanged;
-(BOOL)enabled;
-(void)_discoveryStateChanged;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)isDiscoverable;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)dealloc;
-(BOOL)deviceScanningEnabled;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(BOOL)isAnyoneScanning;
-(BOOL)connectable;
-(void)resetDeviceScanning;
-(void)setAudioConnected:(BOOL)arg1 ;
-(NSArray *)connectingDevices;
-(BOOL)connected;
-(BOOL)devicePairingEnabled;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)connectDevice:(id)arg1 ;
-(BOOL)powered;
-(void)postNotification:(id)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(void)_powerChanged;
-(void)setConnectable:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(NSArray *)pairedDevices;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(void)_connectedStatusChanged;
-(void)_removeDevice:(id)arg1 ;
-(BOOL)setPowered:(BOOL)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_setDiscoveryAgentScanning:(BOOL)arg1 ;
-(BOOL)isValidBrailleDevice:(id)arg1 ;
-(unsigned)authorizedServices;
-(BOOL)_onlySensorsConnected;
-(id)deviceForAddressString:(id)arg1 ;
-(NSArray *)pairedBrailleDevices;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(id)alertControllerWithVOSBluetoothResult:(unsigned long long)arg1 device:(id)arg2 buttonHandler:(/*^block*/id)arg3 ;
-(void)setAuthorizedServices:(unsigned)arg1 ;
@end
