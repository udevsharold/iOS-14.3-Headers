/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class NSMutableDictionary, NSString, NSNumber, NSArray, NSHashTable;

@interface CBPeripheral : CBPeer {

	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
		unsigned didOpenL2CAPChannel : 1;
	}  _delegateFlags;
	NSMutableDictionary* _attributes;
	BOOL _canSendWriteWithoutResponse;
	BOOL _ancsAuthorized;
	BOOL _isConnectedToSystem;
	BOOL _visibleInSettings;
	BOOL _connectedToSystem;
	unsigned short _appearance;
	unsigned _writesPending;
	id<CBPeripheralDelegate> _delegate;
	NSString* _name;
	NSNumber* _RSSI;
	long long _state;
	NSArray* _services;
	NSHashTable* _l2capChannels;
	NSString* _BDAddress;

}

@property (retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign) unsigned short appearance;                                                  //@synthesize appearance=_appearance - In the implementation block
@property (retain) NSNumber * RSSI;                                                            //@synthesize RSSI=_RSSI - In the implementation block
@property (assign) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                                         //@synthesize services=_services - In the implementation block
@property (assign) unsigned writesPending;                                                     //@synthesize writesPending=_writesPending - In the implementation block
@property (assign) BOOL canSendWriteWithoutResponse;                                           //@synthesize canSendWriteWithoutResponse=_canSendWriteWithoutResponse - In the implementation block
@property (assign) BOOL ancsAuthorized;                                                        //@synthesize ancsAuthorized=_ancsAuthorized - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToSystem;                                       //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
@property (nonatomic,retain,readonly) NSHashTable * l2capChannels;                             //@synthesize l2capChannels=_l2capChannels - In the implementation block
@property (retain) NSString * BDAddress;                                                       //@synthesize BDAddress=_BDAddress - In the implementation block
@property (readonly) BOOL visibleInSettings;                                                   //@synthesize visibleInSettings=_visibleInSettings - In the implementation block
@property (getter=isConnectedToSystem,nonatomic,readonly) BOOL connectedToSystem;              //@synthesize connectedToSystem=_connectedToSystem - In the implementation block
@property (assign,nonatomic,__weak) id<CBPeripheralDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)handleVisibilityChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)setServices:(NSArray *)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)setBDAddress:(NSString *)arg1 ;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(id)initWithCentralManager:(id)arg1 info:(id)arg2 ;
-(void)setVisibleInSettings:(BOOL)arg1 ;
-(void)handleL2CAPChannelOpened:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(NSNumber *)RSSI;
-(void)setRSSI:(NSNumber *)arg1 ;
-(unsigned short)appearance;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)dealloc;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)setWritesPending:(unsigned)arg1 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(long long)state;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)discoverServices:(id)arg1 ;
-(unsigned long long)maximumWriteValueLengthForType:(long long)arg1 ;
-(void)getTimeSyncData;
-(void)invalidateAllAttributes;
-(void)setAncsAuthorized:(BOOL)arg1 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)setPeripheralName:(id)arg1 ;
-(NSHashTable *)l2capChannels;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(BOOL)isConnectedToSystem;
-(BOOL)isConnectedToSystem;
-(id)description;
-(void)handleDisconnection;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleL2CAPChannelClosed:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(BOOL)isConnected;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(BOOL)arg5 ;
-(void)handleFailedConnection;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(BOOL)visibleInSettings;
-(void)setAppearance:(unsigned short)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)handleConnectionStateUpdated:(BOOL)arg1 ;
-(NSString *)name;
-(void)openL2CAPChannel:(unsigned short)arg1 ;
-(BOOL)canSendWriteWithoutResponse;
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(void)removeAllL2CAPChannels;
-(void)setCanSendWriteWithoutResponse:(BOOL)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOrphan;
-(id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2 ;
-(void)openL2CAPChannel:(unsigned short)arg1 options:(id)arg2 ;
-(NSString *)BDAddress;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(NSArray *)services;
-(void)setHighPriorityStream:(BOOL)arg1 duration:(id)arg2 ;
-(BOOL)ancsAuthorized;
-(void)isReadyForUpdates;
-(void)readRSSI;
-(id<CBPeripheralDelegate>)delegate;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned)writesPending;
@end
