/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)indices;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)privateSubEntities;
+(id)databaseTable;
+(id)countOfObjectsAssociatedWithObjectUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementForObjectAssociationsWithTransaction:(id)arg1 ;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 permitPendingAssociations:(BOOL)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)deleteStatementForAssociationWithTransaction:(id)arg1 ;
+(BOOL)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)uniquedColumns;
+(id)propertyForSyncProvenance;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDatabase:(id)arg6 error:(id*)arg7 block:(/*^block*/id)arg8 ;
+(BOOL)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertPendingAssociationForParentUUID:(id)arg1 childUUIDBytes:(unsigned char)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6 ;
+(id)tableAliases;
+(BOOL)realizePendingAssociationsWithTransaction:(id)arg1 startingAnchor:(long long)arg2 error:(id*)arg3 ;
+(BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(long long)protectionClass;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(BOOL)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)associateSampleUUIDData:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

