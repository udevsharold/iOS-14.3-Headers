/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLDataMigrationController : NSObject
+(id)sharedController;
-(BOOL)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2 ;
-(void)ensureSocialUserDataDirectory;
-(BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2 ;
-(void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2 ;
@end
