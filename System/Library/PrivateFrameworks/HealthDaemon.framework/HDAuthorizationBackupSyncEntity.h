/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
+(id)syncEntityIdentifier;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(id)excludedSyncStoresForSession:(id)arg1 ;
+(id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2 ;
+(void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1 ;
+(id)_backupInfoWithSyncStore:(id)arg1 ;
+(void)_setBackupInfo:(id)arg1 ;
+(id)backupInfoUserDefaultsKey;
+(void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2 ;
+(id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1 ;
+(id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1 ;
+(void)resetAuthorizationBackupIdentifiers;
@end

