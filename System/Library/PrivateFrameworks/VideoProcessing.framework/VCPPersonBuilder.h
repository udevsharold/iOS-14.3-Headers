/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPhotoLibrary, VCPFaceClusterer, PVContext, VCPPhotosPersistenceDelegate, NSMutableDictionary;

@interface VCPPersonBuilder : NSObject {

	PHPhotoLibrary* _photoLibrary;
	VCPFaceClusterer* _faceClusterer;
	PVContext* _context;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	NSMutableDictionary* _state;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
	BOOL _personBuilderMergeCandidatesEnabled;

}
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(BOOL)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_readFaceAnalysisState;
-(void)_setFaceAnalysisStateValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2 andContext:(id)arg3 ;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg1 ;
@end

