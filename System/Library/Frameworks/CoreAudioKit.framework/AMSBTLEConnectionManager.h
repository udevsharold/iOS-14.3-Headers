/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol BTLEConnectionTable;
@class CBCentralManager, NSMutableArray, NSTimer, NSString;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* peripheralList;
	NSMutableArray* connectedBTPeripherals;
	NSMutableArray* connectedAMSPeripherals;
	NSTimer* refreshTimer;
	NSTimer* connectionTimer;
	id<BTLEConnectionTable> controller;
	long long centralState;
	BOOL isAdvertising;

}

@property (readonly) NSMutableArray * peripheralList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopScan;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)startScan;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)timerFired:(id)arg1 ;
-(long long)bluetoothState;
-(void)startTimer;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(BOOL)isLECapableHardware;
-(void)createPeripheralList;
-(void)updateAdvertisingState:(id)arg1 ;
-(unsigned)midiDeviceForUUID:(id)arg1 ;
-(id)amsPeripheralForCBPeripheral:(id)arg1 ;
-(void)checkAlreadyConnectedPeripherals;
-(void)connectionTimerFired:(id)arg1 ;
-(BOOL)peripheralIsConnectedCentral:(id)arg1 ;
-(id)initWithUIController:(id)arg1 ;
-(void)setUIController:(id)arg1 ;
-(void)killTimer;
-(void)removeAMSPeripheralForCBPeripheral:(id)arg1 ;
-(NSMutableArray *)peripheralList;
@end
