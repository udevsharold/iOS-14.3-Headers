/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCarKitMonitoringClientService.h>

@protocol CRVehiclePolicyMonitoring;
@class NSData, NSXPCConnection;

@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService> {

	BOOL _monitoring;
	NSData* _vehicleCertificateSerial;
	id<CRVehiclePolicyMonitoring> _delegate;
	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSData * vehicleCertificateSerial;                          //@synthesize vehicleCertificateSerial=_vehicleCertificateSerial - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serviceConnection;                        //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                        //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic,__weak) id<CRVehiclePolicyMonitoring> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setVehicleCertificateSerial:(NSData *)arg1 ;
-(id)monitoringConnection;
-(void)willEnableCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)willDisableCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSData *)vehicleCertificateSerial;
-(id)initWithVehicleCertificateSerial:(id)arg1 ;
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(BOOL)isMonitoring;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setDelegate:(id<CRVehiclePolicyMonitoring>)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(id<CRVehiclePolicyMonitoring>)delegate;
@end

