/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKFitnessMachineConnectionInitiatorServerInterface <NSObject>
@required
-(void)remote_simulateAccept;
-(void)remote_registerConnectionInitiatorClient:(id)arg1;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;

@end

