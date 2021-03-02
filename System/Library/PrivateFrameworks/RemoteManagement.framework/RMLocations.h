/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RMLocations : NSObject
+(long long)currentDomain;
+(id)homeDirectoryURL;
+(id)managedObjectModelURL;
+(id)statusDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)defaultsOverrideFileURLCreateIfNeeded:(BOOL)arg1 ;
+(id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)applicationSupportDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)applicationSupportBaseDirectoryURLInDomain:(long long)arg1 error:(id*)arg2 ;
+(id)dataVaultDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)identityDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)_dataVaultChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 childName:(id)arg3 descriptor:(id)arg4 ;
+(id)persistentStoreDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)defaultsOverrideFileURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)httpLoggingDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)statusDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)URLWithResolvedSymlinksFromURL:(id)arg1 error:(id*)arg2 ;
+(id)applicationSupportDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)dataVaultDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)identityDirectoryURLCreateIfNeeded:(BOOL)arg1 ;
+(id)persistentStoreURLCreateIfNeeded:(BOOL)arg1 ;
+(id)darwinUserDirectoryURL;
+(id)darwinCacheDirectoryURL;
+(id)darwinTemporaryDirectoryURL;
+(id)_applicationSupportChildDirectoryURLInDomain:(long long)arg1 createIfNeeded:(BOOL)arg2 childName:(id)arg3 descriptor:(id)arg4 ;
@end
