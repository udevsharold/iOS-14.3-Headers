/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@protocol CoreTelephonyClientDataDelegate;
@class NSString, NSHashTable, NSMutableDictionary, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface IDSCellularLinkMonitor : NSObject <CoreTelephonyClientDataDelegate> {

	id<CoreTelephonyClientDataDelegate> _ctClientDataDelegate;
	BOOL _dataUsable;
	NSString* _dataIndicator;
	NSString* _cellularDataInterfaceName;
	unsigned _radioAccessTechnology;
	unsigned _cellularMTU;
	NSHashTable* _cellularLinkDelegates;
	NSMutableDictionary* _notificationRegInfo;
	unsigned _dataSoMaskBits;
	unsigned _remoteDeviceVersion;
	CTServerConnectionRef _ctServerConnection;
	CoreTelephonyClient* _ctClient;
	CTXPCServiceSubscriptionContext* _currentDataSubscriptionContextSync;

}

@property (nonatomic,retain) CoreTelephonyClient * _ctClient;                                                     //@synthesize ctClient=_ctClient - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                                           //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * currentDataSubscriptionContextSync;              //@synthesize currentDataSubscriptionContextSync=_currentDataSubscriptionContextSync - In the implementation block
@property (readonly) BOOL dataUsable;                                                                             //@synthesize dataUsable=_dataUsable - In the implementation block
@property (readonly) NSString * cellularDataInterfaceName;                                                        //@synthesize cellularDataInterfaceName=_cellularDataInterfaceName - In the implementation block
@property (readonly) unsigned radioAccessTechnology;                                                              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (readonly) unsigned cellularMTU;                                                                        //@synthesize cellularMTU=_cellularMTU - In the implementation block
@property (readonly) unsigned dataSoMaskBits;                                                                     //@synthesize dataSoMaskBits=_dataSoMaskBits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(void)_setupCTServerConnection;
-(id)init;
-(unsigned)cellularMTU;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(BOOL)_updateCellularDataInterface:(BOOL)arg1 ;
-(BOOL)_updateRadioAccessTechnology;
-(BOOL)_updateCellularMTU;
-(void)_updateDataStatus;
-(id)_getCurrentDataSimContext:(id)arg1 inContextArray:(id)arg2 ;
-(id)_getCTXPCServiceSubscriptionContext;
-(BOOL)_updateDataBearerSoMask;
-(unsigned)dataSoMaskBits;
-(BOOL)_updateCellularDataInterfaceNameByConnectionState:(int)arg1 isStateActiveRequired:(BOOL)arg2 interfaceName:(id)arg3 ;
-(void)_updateClientDataBearerSoMask;
-(BOOL)_dataContextUsable:(id)arg1 dataStatus:(id)arg2 ;
-(BOOL)dataUsable;
-(void)removePacketNotificationFilter;
-(void)processCTConnectionStateChangeNotification:(id)arg1 connectionStatus:(id)arg2 ;
-(void)_notifyClientDataBearerSoMask;
-(void)addCellularLinkDelegate:(id)arg1 ;
-(void)removeCellularLinkDelegate:(id)arg1 ;
-(NSString *)cellularDataInterfaceName;
-(BOOL)setPacketNotificationFilter:(const sockaddr*)arg1 remote:(const sockaddr*)arg2 uniqueTag:(unsigned)arg3 callType:(unsigned char)arg4 ;
-(void)setRemoteDeviceVersion:(unsigned)arg1 ;
-(BOOL)dropIPPackets:(id)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 isRelay:(BOOL)arg4 channelNumberMSB:(unsigned char)arg5 ;
-(void)updateProtocolQualityOfService:(BOOL)arg1 localAddress:(sockaddr*)arg2 ;
-(void)registerCellularDataStatusNotification:(BOOL)arg1 ;
-(void)set_ctClient:(CoreTelephonyClient *)arg1 ;
-(void)reset;
-(void)dealloc;
-(unsigned)radioAccessTechnology;
-(void)preferredDataSimChanged:(id)arg1 ;
-(CoreTelephonyClient *)_ctClient;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(CTXPCServiceSubscriptionContext *)currentDataSubscriptionContextSync;
@end
