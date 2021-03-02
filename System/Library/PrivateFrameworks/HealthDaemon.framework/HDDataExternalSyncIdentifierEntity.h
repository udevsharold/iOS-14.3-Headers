/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity
+(id)indices;
+(id)foreignKeys;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(BOOL)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(BOOL)arg4 database:(id)arg5 objectIDOut:(id*)arg6 errorOut:(id*)arg7 ;
+(BOOL)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(BOOL)arg8 errorOut:(id*)arg9 ;
+(BOOL)enumerateValuesWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
+(long long)protectionClass;
+(BOOL)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long*)arg3 externalSyncObjectCodeOut:(long long*)arg4 syncIdentifierOut:(id*)arg5 syncVersionOut:(id*)arg6 deletedOut:(BOOL*)arg7 errorOut:(id*)arg8 ;
@end
