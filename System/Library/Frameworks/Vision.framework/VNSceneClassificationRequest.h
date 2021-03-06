/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class VNSceneObservation, VNClassificationCustomHierarchy, NSArray, NSString;

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic,retain,readonly) VNSceneObservation * sceneObservation; 
@property (assign,nonatomic) unsigned long long maximumLeafObservations; 
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations; 
@property (nonatomic,copy,readonly) VNClassificationCustomHierarchy * customHierarchy; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageAnalyzerMultiDetectorLoadedInSession:(id)arg1 forRevision:(unsigned long long)arg2 detectionLevel:(unsigned long long)arg3 processingDevice:(id)arg4 requestBackingStore:(unsigned long long)arg5 appliedDetectorOptions:(id*)arg6 error:(id*)arg7 ;
+(id)_sceneClassifierLoadedInSession:(id)arg1 forRevision:(unsigned long long)arg2 requestBackingStore:(unsigned long long)arg3 appliedDetectorOptions:(id*)arg4 error:(id*)arg5 ;
+(id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)knownSceneClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)_knownVNImageAnalyzerMultiDetectorSceneClassificationObservationsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)knownSceneClassifications;
+(Class)configurationClass;
+(const SCD_Struct_VN12*)dependentRequestCompatability;
+(const SCD_Struct_VN2*)revisionAvailability;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(VNSceneObservation *)sceneObservation;
-(id)_applicableDetectorAndOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3 ;
-(void)setSceneObservation:(VNSceneObservation *)arg1 ;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(id)initWithSceneObservation:(id)arg1 ;
-(id)initWithSceneObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorForUnimplementedSelector:(SEL)arg1 forRevision:(unsigned long long)arg2 ;
-(void)_setCustomHierarchy:(id)arg1 ;
-(BOOL)defineCustomHierarchy:(id)arg1 error:(id*)arg2 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(/*^block*/id)resultsSortingComparator;
@end

