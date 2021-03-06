/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARParentTechnique.h>
#import <ARKitCore/ARTechniqueDelegate.h>

@protocol ARMLDepthDataSourceProvider, ARTechniqueForwardingStrategy;
@class ARTechnique, NSArray, NSString;

@interface ARPersonOcclusionParentTechnique : ARParentTechnique <ARTechniqueDelegate> {

	double _lastDetectedPersonTimeStamp;
	BOOL _detectedPerson;
	long long _optimizationStrategy;
	Class _detectionTechniqueClass;
	BOOL _shouldSkipFramesWhenBusy;
	ARTechnique*<ARMLDepthDataSourceProvider> _depthTechnique;
	CVBufferRef _placeholderDepthBuffer;
	id<ARTechniqueForwardingStrategy> _depthTechniqueProcessingStrategy;
	NSArray* _allTechniques;
	NSArray* _personDetectionTechniques;

}

@property (copy) NSArray * allTechniques;                                                                     //@synthesize allTechniques=_allTechniques - In the implementation block
@property (copy) NSArray * personDetectionTechniques;                                                         //@synthesize personDetectionTechniques=_personDetectionTechniques - In the implementation block
@property (nonatomic,retain) id<ARTechniqueForwardingStrategy> depthTechniqueProcessingStrategy;              //@synthesize depthTechniqueProcessingStrategy=_depthTechniqueProcessingStrategy - In the implementation block
@property (assign,nonatomic) long long optimizationStrategy;                                                  //@synthesize optimizationStrategy=_optimizationStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)setOptimizationStrategy:(long long)arg1 ;
-(id)initWithTechniques:(id)arg1 delegate:(id)arg2 ;
-(void)setDepthTechniqueProcessingStrategy:(id<ARTechniqueForwardingStrategy>)arg1 ;
-(NSArray *)personDetectionTechniques;
-(long long)optimizationStrategy;
-(id<ARTechniqueForwardingStrategy>)depthTechniqueProcessingStrategy;
-(id)techniquesToRunWithForwardedDepth:(BOOL)arg1 ;
-(NSArray *)allTechniques;
-(void)setAllTechniques:(NSArray *)arg1 ;
-(void)setPersonDetectionTechniques:(NSArray *)arg1 ;
@end

