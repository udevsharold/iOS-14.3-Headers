/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary;

@interface BWCameraParameters : NSObject {

	NSDictionary* _cameraParameters;
	NSDictionary* _meteorParameters;
	NSDictionary* _motionAttachmentsParameters;
	NSDictionary* _videoStabilizationParameters;
	NSDictionary* _stereoDisparityParameters;
	NSDictionary* _landmarksParameters;
	NSDictionary* _learnedMattingParameters;
	NSDictionary* _coreImagePortraitFilterParameters;

}

@property (nonatomic,readonly) NSDictionary * cameraParameters;                          //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraTuningParameters; 
@property (nonatomic,readonly) NSDictionary * motionAttachmentsParameters;               //@synthesize motionAttachmentsParameters=_motionAttachmentsParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoStabilizationParameters;              //@synthesize videoStabilizationParameters=_videoStabilizationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * stereoDisparityParameters; 
@property (nonatomic,readonly) int meteorHeadroomProcessingType; 
+(void)initialize;
+(id)sharedInstance;
+(id)sensorIDStringFromMetadata:(id)arg1 ;
+(id)sensorIDStringFromModuleInfo:(id)arg1 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)sensorIDDictionaryForStream:(id)arg1 ;
-(id)init;
-(int)disparityRefinementTypeForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(void)dealloc;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)learnedMattingVersion;
-(NSDictionary *)motionAttachmentsParameters;
-(int)meteorHeadroomProcessingType;
-(NSDictionary *)cameraParameters;
-(int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)stereoDisparityParameters;
-(SCD_Struct_BW57)landmarksVersionForInferenceType:(int)arg1 ;
-(int)sdofRenderingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)disparityVersion;
-(id)focalLengthCharacterizationForStream:(id)arg1 ;
-(int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)videoStabilizationParameters;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(unsigned)landmarksConstellationPointCountForInferenceType:(int)arg1 ;
-(id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)coreImagePortraitFilterVersion;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
-(NSDictionary *)cameraTuningParameters;
-(id)_initWithModelSpecificName:(id)arg1 ;
@end
