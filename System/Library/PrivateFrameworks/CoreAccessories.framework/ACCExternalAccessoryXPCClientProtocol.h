/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>
@required
-(void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)ExternalAccessoryArrived:(id)arg1;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)accessoryCloseExternalAccessorySession:(id)arg1;
-(void)ExternalAccessoryLeft:(id)arg1;
-(void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;

@end

