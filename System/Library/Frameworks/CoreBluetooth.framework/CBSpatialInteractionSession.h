/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBDeviceReporting.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBStateReporting.h>
#import <libobjc.A.dylib/CBSystemOverridable.h>

@protocol OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSData, NSArray;

@interface CBSpatialInteractionSession : NSObject <CUXPCCodable, CBActivatable, CBDeviceReporting, CBLabelable, CBStateReporting, CBSystemOverridable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	NSObject*<OS_dispatch_source> _advertiseRateTimer;
	BOOL _changesPending;
	NSMutableDictionary* _deviceMap;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _peerMap;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	unsigned _systemOverrideFlags;
	int _advertiseRate;
	unsigned _controlFlags;
	int _scanRate;
	int _scanRateOverride;
	unsigned _uwbTokenFlags;
	unsigned _clientID;
	unsigned _internalFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _systemOverrideHandler;
	/*^block*/id _advertisingAddressChangedHandler;
	NSData* _advertisingAddressData;
	/*^block*/id _aopDataHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _measurementHandler;
	/*^block*/id _tokenChangedHandler;
	NSData* _tokenData;
	NSData* _uwbConfigData;
	NSData* _identifierData;
	NSData* _irkData;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSData * identifierData;                                      //@synthesize identifierData=_identifierData - In the implementation block
@property (assign,nonatomic) unsigned internalFlags;                                     //@synthesize internalFlags=_internalFlags - In the implementation block
@property (nonatomic,copy) NSData * irkData;                                             //@synthesize irkData=_irkData - In the implementation block
@property (assign,nonatomic) int scanRateOverride;                                       //@synthesize scanRateOverride=_scanRateOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                           //@synthesize tokenData=_tokenData - In the implementation block
@property (assign,nonatomic) int advertiseRate;                                          //@synthesize advertiseRate=_advertiseRate - In the implementation block
@property (nonatomic,copy) id advertisingAddressChangedHandler;                          //@synthesize advertisingAddressChangedHandler=_advertisingAddressChangedHandler - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisingAddressData;                     //@synthesize advertisingAddressData=_advertisingAddressData - In the implementation block
@property (nonatomic,copy) id aopDataHandler;                                            //@synthesize aopDataHandler=_aopDataHandler - In the implementation block
@property (assign,nonatomic) unsigned controlFlags;                                      //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy) id errorHandler;                                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                       //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id measurementHandler;                                        //@synthesize measurementHandler=_measurementHandler - In the implementation block
@property (assign,nonatomic) int scanRate;                                               //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,copy) id tokenChangedHandler;                                       //@synthesize tokenChangedHandler=_tokenChangedHandler - In the implementation block
@property (nonatomic,copy) NSData * uwbConfigData;                                       //@synthesize uwbConfigData=_uwbConfigData - In the implementation block
@property (assign,nonatomic) unsigned uwbTokenFlags;                                     //@synthesize uwbTokenFlags=_uwbTokenFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                        //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                         //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (copy,readonly) NSArray * discoveredDevices; 
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                              //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned systemOverrideFlags;                             //@synthesize systemOverrideFlags=_systemOverrideFlags - In the implementation block
@property (nonatomic,copy) id systemOverrideHandler;                                     //@synthesize systemOverrideHandler=_systemOverrideHandler - In the implementation block
-(void)setControlFlags:(unsigned)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_lostAllDevices;
-(id)deviceLostHandler;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)_activate;
-(unsigned)clientID;
-(unsigned)controlFlags;
-(id)_ensureXPCStarted;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setSystemOverrideHandler:(id)arg1 ;
-(id)init;
-(void)_xpcReceivedDeviceLost:(id)arg1 ;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activateXPCStart:(BOOL)arg1 ;
-(void)_xpcReceivedDeviceFound:(id)arg1 ;
-(void)setScanRate:(int)arg1 ;
-(int)scanRate;
-(id)systemOverrideHandler;
-(void)dealloc;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_activateDirectStart;
-(void)setClientID:(unsigned)arg1 ;
-(void)_update;
-(void)setInternalFlags:(unsigned)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(unsigned)uwbTokenFlags;
-(void)setUwbTokenFlags:(unsigned)arg1 ;
-(NSData *)uwbConfigData;
-(void)_activateXPCCompleted:(id)arg1 reactivate:(BOOL)arg2 ;
-(void)_reAddTokens;
-(void)_addPeerToken:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_xpcReceivedAdvertisingAddressChanged:(id)arg1 ;
-(void)_xpcReceivedAOPData:(id)arg1 ;
-(void)_xpcReceivedSystemOverrideChanged:(id)arg1 ;
-(BOOL)matchesWithDevice:(id)arg1 ;
-(BOOL)updateWithSession:(id)arg1 ;
-(void)setAdvertiseRate:(int)arg1 timeout:(double)arg2 ;
-(void)addPeerToken:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addPeerToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePeerToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)advertisingAddressChangedHandler;
-(void)setAdvertisingAddressChangedHandler:(id)arg1 ;
-(NSData *)advertisingAddressData;
-(id)aopDataHandler;
-(void)setAopDataHandler:(id)arg1 ;
-(id)tokenChangedHandler;
-(void)setTokenChangedHandler:(id)arg1 ;
-(void)setUwbConfigData:(NSData *)arg1 ;
-(NSData *)irkData;
-(id)bluetoothStateChangedHandler;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSData *)tokenData;
-(id)description;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(NSArray *)discoveredDevices;
-(void)setScanRateOverride:(int)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)setIrkData:(NSData *)arg1 ;
-(id)errorHandler;
-(id)interruptionHandler;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)setAdvertiseRate:(int)arg1 ;
-(long long)bluetoothState;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(int)advertiseRate;
-(void)_xpcReceivedPowerStateChanged:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)measurementHandler;
-(unsigned)internalFlags;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)identifierData;
-(void)setIdentifierData:(NSData *)arg1 ;
-(void)setMeasurementHandler:(id)arg1 ;
-(void)_invalidateDirect;
-(id)deviceFoundHandler;
-(void)_interrupted;
-(unsigned)systemOverrideFlags;
-(void)_invalidated;
-(NSString *)label;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)invalidate;
-(int)scanRateOverride;
-(id)invalidationHandler;
@end
