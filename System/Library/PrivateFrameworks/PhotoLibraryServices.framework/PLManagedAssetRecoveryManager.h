/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLVolumeInfo, NSMutableArray, PLLazyObject, PLPhotoLibrary, NSObject;

@interface PLManagedAssetRecoveryManager : NSObject {

	PLVolumeInfo* _volumeInfo;
	unsigned long long _fixedCount;
	unsigned long long _totalCount;
	unsigned long long _totalDownloadedResourceBytes;
	unsigned long long _resourceDownloadBytesLimit;
	NSMutableArray* _recoveryErrors;
	PLLazyObject* _imageClient;
	PLLazyObject* _videoClient;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _syncablePhotoLibrary;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _state;

}

@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * syncablePhotoLibrary;               //@synthesize syncablePhotoLibrary=_syncablePhotoLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
+(id)_irisesWithZeroVideoCpDuration;
+(id)_predicateForAdjustedAssetsFailedDeferredRendering;
+(id)_predicateForAdjustedAssetsWithMissingResources;
+(id)_assetsWithJPGFilenameAndRawPrimaryImageResourcePredicate;
+(id)_imagesWithZeroWidthHeightPredicate;
-(PLPhotoLibrary *)photoLibrary;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_startRecoveryUsingCloudPhotoLibraryManager:(id)arg1 transaction:(id)arg2 ;
-(void)_setCloudRecoveryState:(unsigned long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3 ;
-(id)_loadObjectWithObjectID:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)_recoveryStatesToProcessForAttributes:(id)arg1 ;
-(void)_recoverNextAssetWithEnumerator:(id)arg1 cloudPhotoLibraryManager:(id)arg2 transaction:(id)arg3 ;
-(void)_recoverNextRecoveryState:(id)arg1 forAsset:(id)arg2 cloudPhotoLibraryManager:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(unsigned long long)arg2 cloudPhotoLibraryManager:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_fixRawUTIForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id*)arg3 ;
-(PLPhotoLibrary *)syncablePhotoLibrary;
-(void)_performTransactionOnLibrary:(id)arg1 withObjectID:(id)arg2 usingBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_fixMissingFullSizeAdjustedResources:(id)arg1 cloudPhotoLibraryManager:(id)arg2 recoveryState:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setSyncablePhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)_generateMissingFullSizeAdjustedResourcesForAsset:(id)arg1 recipesToGenerate:(id)arg2 cloudPhotoLibraryManager:(id)arg3 recoveryState:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(long long)state;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)startRecoveryUsingCloudPhotoLibraryManager:(id)arg1 transaction:(id)arg2 shouldIdentifyInconsistentAssets:(BOOL)arg3 ;
-(void)setState:(long long)arg1 ;
@end
