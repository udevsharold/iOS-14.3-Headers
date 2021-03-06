/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGDejunkerDeduper_CLSInvestigationItem.h>

@class NSDictionary, PHPhotoLibrary, NSSet;

@interface PGDejunkerDeduper_PHAsset : PGDejunkerDeduper_CLSInvestigationItem {

	NSDictionary* _personLocalIdentifiersByAssetUUID;
	NSDictionary* _peopleScenesByAssetUUID;
	NSDictionary* _averageFaceQualityByAssetUUID;
	PHPhotoLibrary* _photoLibrary;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)verifiedPersonLocalIdentifiers;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(void)setVerifiedPersonLocalIdentifiers:(id)arg1 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 ;
-(id)dejunkedDedupedAssetsInAssets:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)_buildCachesWithAssets:(id)arg1 options:(id)arg2 ;
@end

