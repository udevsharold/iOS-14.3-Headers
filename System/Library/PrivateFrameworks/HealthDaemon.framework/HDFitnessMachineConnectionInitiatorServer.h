/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKFitnessMachineConnectionInitiatorServerInterface.h>

@protocol HDFitnessMachineConnectionInitiatorProtocol;
@class NSString;

@interface HDFitnessMachineConnectionInitiatorServer : HDStandardTaskServer <HKFitnessMachineConnectionInitiatorServerInterface> {

	id<HDFitnessMachineConnectionInitiatorProtocol> _connectionInitiatorServer;

}

@property (nonatomic,readonly) id<HDFitnessMachineConnectionInitiatorProtocol> connectionInitiatorServer;              //@synthesize connectionInitiatorServer=_connectionInitiatorServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
-(void)connectionInterrupted;
-(id<HDFitnessMachineConnectionInitiatorProtocol>)connectionInitiatorServer;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)remote_simulateAccept;
-(void)remote_registerConnectionInitiatorClient:(id)arg1 ;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 ;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(id)remoteInterface;
@end
