/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VNPersonsModel, PHPhotoLibrary, VCPFaceAnalyzer, NSObject;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {

	VNPersonsModel* _personsModel;
	PHPhotoLibrary* _photoLibrary;
	VCPFaceAnalyzer* _faceAnalyzer;
	NSObject*<OS_dispatch_queue> _management;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(int)_classifyFaces:(id)arg1 forAsset:(id)arg2 withResults:(id*)arg3 ;
-(id)fetchPersonsForFaceIDModel;
-(BOOL)_personsModelLastGenerationDidExceedTimeInterval;
-(id)init;
-(int)_loadPVImage:(id*)arg1 forAsset:(id)arg2 ;
-(BOOL)_persistPersonsModel:(id)arg1 error:(id*)arg2 ;
-(int)generatePersonsModelWithExtendTimeout:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(int)processAsset:(id)arg1 ;
-(int)_generatePersonsModelShouldForce:(BOOL)arg1 extendTimeoutBlock:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)_persistResults:(id)arg1 withFaces:(id)arg2 forAsset:(id)arg3 ;
-(int)_loadPersonsModel;
-(BOOL)_needToGeneratePersonsModel;
-(int)_detectFacesWithPVImage:(id)arg1 forAsset:(id)arg2 withAnalysis:(id*)arg3 ;
@end

