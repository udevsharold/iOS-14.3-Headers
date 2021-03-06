/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_predicateForBundleID:(id)arg1 ;
+(id)databaseTable;
+(id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)tableAliases;
+(long long)protectionClass;
@end

