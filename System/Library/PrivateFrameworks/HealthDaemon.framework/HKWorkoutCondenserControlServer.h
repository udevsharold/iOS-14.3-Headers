/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKWorkoutCondenserControlServer
@required
-(void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_condensedWorkoutsWithCompletion:(/*^block*/id)arg1;
-(void)remote_condensableWorkoutsWithCompletion:(/*^block*/id)arg1;

@end
