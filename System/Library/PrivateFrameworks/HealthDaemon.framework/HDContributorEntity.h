/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDContributorEntity : HDHealthEntity
+(id)primaryUserContributorInDatabase:(id)arg1 error:(id*)arg2 ;
+(id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(id)_insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 deleted:(BOOL)arg4 modificationDate:(double)arg5 syncAnchor:(unsigned long long)arg6 syncProvenance:(long long)arg7 primaryUser:(BOOL)arg8 database:(id)arg9 error:(id*)arg10 ;
+(id)contributorEntityWithUUID:(id)arg1 profile:(id)arg2 includeDeleted:(BOOL)arg3 error:(id*)arg4 ;
+(id)_predicateForContributorWithUUID:(id)arg1 ;
+(BOOL)deleteContributorWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)contributorEntityForNoContributorWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)_predicateForNonDeletedContributor;
+(id)propertyForSyncAnchor;
+(id)_nextSyncAnchorInDatabase:(id)arg1 error:(id*)arg2 ;
+(id)propertyForSyncProvenance;
+(id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg1 error:(id*)arg2 ;
+(id)_contributorReferenceForEntityMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)noneContributorUUID;
+(id)externalReferenceForContributorReference:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(BOOL)arg4 syncProvenance:(long long)arg5 transaction:(id)arg6 error:(id*)arg7 ;
+(id)insertPrimaryUserWithAppleID:(id)arg1 callerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(long long)protectionClass;
+(id)_predicateForContributorReference:(id)arg1 ;
+(id)primaryUserContributorInProfile:(id)arg1 error:(id*)arg2 ;
-(id)appleIDInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAppleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)callerIDInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateCallerID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)modificationDateInProfile:(id)arg1 error:(id*)arg2 ;
-(id)syncAnchorInProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)deletedInProfile:(id)arg1 error:(id*)arg2 ;
@end
