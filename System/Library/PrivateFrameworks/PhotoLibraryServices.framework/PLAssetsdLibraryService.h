/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdLibraryServiceProtocol.h>

@class PLXPCPhotoLibraryStoreContainer, PLAssetsdConnectionAuthorization, NSMutableArray, PLPhotoLibraryBundleController, PLAssetsdService, NSString;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {

	PLXPCPhotoLibraryStoreContainer* _xpcPhotoLibraryStoreContainer;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSMutableArray* _preRunningProgressFollowers;
	NSMutableArray* _postRunningProgressFollowers;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLAssetsdService* _assetsdService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)requiredLibraryServicesStateForURL:(id)arg1 ;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(/*^block*/id)arg1 ;
-(void)repairSingletonObjectsWithReply:(/*^block*/id)arg1 ;
-(id)_returnValueForProgress:(id)arg1 addTo:(id)arg2 ;
-(void)_sendClientReply:(/*^block*/id)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3 ;
-(void)pendingEventsForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)recoverFromCrashIfNeeded;
-(id)sandboxExtensionsByPath;
-(id)importFileSystemAssetsWithReason:(id)arg1 force:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)getCurrentModelVersionWithReply:(/*^block*/id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4 ;
-(void)launchAssetsd;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)createPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_postRunningProgress;
-(id)_preRunningProgress;
-(void)openPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)libraryBundle;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)newLibraryOpener;
-(id)postOpenProgressWithReply:(/*^block*/id)arg1 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
