/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>

@class CBXpcConnection, CBPairingAgent, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {

	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	BOOL _tccComplete;
	long long _state;
	NSData* _advertisingAddress;
	long long _advertisingAddressType;
	NSData* _nonConnectableAdvertisingAddress;
	long long _nonConnectableAdvertisingAddressType;
	NSString* _localAddressString;
	NSString* _localName;

}

@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL tccComplete;                                              //@synthesize tccComplete=_tccComplete - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (nonatomic,copy) NSData * advertisingAddress;                                     //@synthesize advertisingAddress=_advertisingAddress - In the implementation block
@property (nonatomic,readonly) long long advertisingAddressType;                            //@synthesize advertisingAddressType=_advertisingAddressType - In the implementation block
@property (nonatomic,copy) NSData * nonConnectableAdvertisingAddress;                       //@synthesize nonConnectableAdvertisingAddress=_nonConnectableAdvertisingAddress - In the implementation block
@property (nonatomic,readonly) long long nonConnectableAdvertisingAddressType;              //@synthesize nonConnectableAdvertisingAddressType=_nonConnectableAdvertisingAddressType - In the implementation block
@property (readonly) NSString * localAddressString;                                         //@synthesize localAddressString=_localAddressString - In the implementation block
@property (readonly) NSString * localName;                                                  //@synthesize localName=_localName - In the implementation block
@property (nonatomic,readonly) long long authorization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorization;
+(BOOL)tccAvailable;
-(id)peerWithInfo:(id)arg1 ;
-(NSString *)localAddressString;
-(BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)xpcConnectionIsInvalid;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(void)_handleAdvertisingAddressChanged:(id)arg1 ;
-(CBPairingAgent *)sharedPairingAgent;
-(void)doneWithTCC;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setTccComplete:(BOOL)arg1 ;
-(BOOL)tccComplete;
-(void)xpcConnectionDidReset;
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)initInternal;
-(void)setAdvertisingAddress:(NSData *)arg1 ;
-(NSData *)advertisingAddress;
-(unsigned)getAppSDKVersion;
-(long long)advertisingAddressType;
-(long long)authorization;
-(long long)nonConnectableAdvertisingAddressType;
-(void)setNonConnectableAdvertisingAddress:(NSData *)arg1 ;
-(NSString *)localName;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)triggerBTErrorReport:(long long)arg1 ;
-(NSData *)nonConnectableAdvertisingAddress;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)performTCCCheck:(id)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)extractLocalDeviceStatesDictionary:(id)arg1 ;
-(BOOL)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setState:(long long)arg1 ;
@end
