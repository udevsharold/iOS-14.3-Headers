/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICLegacyAccountUtilities : NSObject
+(id)legacyAccountForLegacyAccountType:(long long)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateLegacyAccountType:(long long)arg1 ;
+(BOOL)didChooseToMigrateAccountsForContext:(id)arg1 forAccountPassingTest:(/*^block*/id)arg2 ;
+(id)legacyAccountForPrimaryICloudAccountWithContext:(id)arg1 ;
+(id)legacyAccountForLocalAccountWithContext:(id)arg1 ;
+(id)legacyAccountForICloudACAccount:(id)arg1 context:(id)arg2 ;
+(id)accountForAccountIdentifier:(id)arg1 context:(id)arg2 ;
+(BOOL)didChooseToMigrateAccount:(id)arg1 context:(id)arg2 ;
+(id)legacyAccountForICloudAccount:(id)arg1 context:(id)arg2 ;
+(BOOL)isLegacyLocalAccount:(id)arg1 ;
+(id)accountIdentifierForAccount:(id)arg1 ;
@end

