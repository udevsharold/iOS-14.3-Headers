/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {

	AB _isOpen;
	PLAssetsdClientSandboxExtensions* _sandboxExtensions;

}
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)pendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 error:(id*)arg2 ;
-(void)recoverFromCrashIfNeeded;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)getPhotoLibraryStoreXPCListenerEndpoint;
-(id)importFileSystemAssetsForce:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_consumeSandboxExtensions:(id)arg1 ;
-(BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)arg1 withError:(id*)arg2 ;
-(long long)getCurrentModelVersion;
-(BOOL)repairSingletonObjectsWithError:(id*)arg1 ;
-(void)launchAssetsd;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 sandboxExtensions:(id)arg4 ;
-(BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_assetURIStringsForPhotos:(id)arg1 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

