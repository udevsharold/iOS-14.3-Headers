/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLKSettingsCloudUtilities : NSObject
+(id)_connection;
+(id)_queue;
+(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)cloudSyncEnabled;
+(void)deleteAllHistoryWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)synchronizeSettingsFromCloudIfNeeded:(id*)arg1 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)_syncDictionaryForLocalStore;
+(void)_postChangeDictionaryToCloud:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 removeEntry:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_syncDictionaryForAppSettings:(id)arg1 ;
+(void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_fetchSyncDictionary:(/*^block*/id)arg1 ;
+(void)synchronizeSettingsFromCloudIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreWithCompletion:(/*^block*/id)arg1 ;
+(void)resetAccountWithCompletion:(/*^block*/id)arg1 ;
+(void)updateLocalStoreWithCompletion:(/*^block*/id)arg1 ;
@end
