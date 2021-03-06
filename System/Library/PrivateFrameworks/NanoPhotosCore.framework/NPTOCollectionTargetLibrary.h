/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NPTOLibraryInfo, NSDictionary, NRDevice;

@interface NPTOCollectionTargetLibrary : NSObject {

	NSHashTable* _observers;
	NPTOLibraryInfo* _libraryInfo;
	id _libraryCollectionTargetMapChangeObserver;
	id _syncingChangeObserver;
	NSDictionary* _libraryAssetCollections;
	long long _collectionTarget;
	NRDevice* _device;

}

@property (nonatomic,readonly) long long collectionTarget;              //@synthesize collectionTarget=_collectionTarget - In the implementation block
@property (nonatomic,readonly) NRDevice * device;                       //@synthesize device=_device - In the implementation block
-(void)removeObserver:(id)arg1 ;
-(NRDevice *)device;
-(void)addObserver:(id)arg1 ;
-(id)fetchAssetsWithOptions:(id)arg1 ;
-(id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(BOOL)_isSyncing;
-(id)assetCollections;
-(id)_libraryInfo;
-(long long)collectionTarget;
-(id)initWithCollectionTarget:(long long)arg1 device:(id)arg2 ;
-(void)_createLibraryCollectionTargetMapChangeObserverIfNeeded;
-(void)_createSyncingChangeObserverIfNeeded;
-(id)_libraryAssetCollections;
-(id)_libraryAssetUUIDs;
-(void)_handleLibraryCollectionTargetMapDidChange;
-(void)_handleSyncingDidChange;
-(unsigned long long)countOfAssetsWithOptions:(id)arg1 ;
-(unsigned long long)countOfAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
-(unsigned long long)expectedCountOfAssets;
-(unsigned long long)expectedCountOfAssetsInAssetCollection:(id)arg1 ;
-(BOOL)isSyncingAssets;
-(BOOL)isSyncingAssetsInAssetCollection:(id)arg1 ;
@end

