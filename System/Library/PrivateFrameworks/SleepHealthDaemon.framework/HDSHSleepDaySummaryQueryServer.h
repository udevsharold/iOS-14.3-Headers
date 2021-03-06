/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKSHSleepDaySummaryQueryConfiguration;

@interface HDSHSleepDaySummaryQueryServer : HDQueryServer {

	HKSHSleepDaySummaryQueryConfiguration* _configuration;

}
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(id)objectTypes;
-(void)_queue_start;
-(BOOL)_queue_surfaceDaySummariesWithError:(id*)arg1 ;
@end

