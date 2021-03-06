/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBBluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;

}
+(id)sharedInstance;
-(BOOL)canReportBatteryLevel;
-(void)addDeviceNotification:(id)arg1 ;
-(int)batteryLevel;
-(void)dealloc;
-(id)firstBTDeviceToReportBatteryLevel;
-(void)updateTetheringConnected;
-(void)iapDeviceChanged:(id)arg1 ;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)startWatchingForDevices;
-(void)noteDevicesChanged;
-(id)deviceForAudioRoute:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)updateBattery;
-(void)stopWatchingForDevices;
-(void)batteryChanged:(id)arg1 ;
-(void)connectionChanged:(id)arg1 ;
-(BOOL)tetheringConnected;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
@end

