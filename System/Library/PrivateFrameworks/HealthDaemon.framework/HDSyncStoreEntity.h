/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncStoreEntity : HDHealthEntity
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(id)allSyncStoreEntitiesOfType:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)existingSyncStoreEntityWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(long long)protectionClass;
+(id)_predicateWithStoreUUID:(id)arg1 type:(long long)arg2 ;
+(id)syncStoreEntityWithUUID:(id)arg1 type:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
-(long long)syncProvenance;
@end
