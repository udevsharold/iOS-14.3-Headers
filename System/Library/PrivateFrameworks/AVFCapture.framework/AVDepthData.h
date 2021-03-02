/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVDepthDataInternal, NSArray, AVCameraCalibrationData;

@interface AVDepthData : NSObject {

	AVDepthDataInternal* _internal;

}

@property (readonly) NSArray * availableDepthDataTypes; 
@property (readonly) unsigned depthDataType; 
@property (readonly) CVBufferRef depthDataMap; 
@property (readonly) long long depthDataQuality; 
@property (getter=isDepthDataFiltered,readonly) BOOL depthDataFiltered; 
@property (readonly) long long depthDataAccuracy; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
+(void)initialize;
+(id)_allSupportedDepthDataPixelFormatTypes;
+(id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(float)depthBlurEffectSimulatedAperture;
-(BOOL)portraitScoreIsHigh;
-(id)depthBlurEffectRenderingParameters;
-(NSArray *)availableDepthDataTypes;
-(CVBufferRef)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(long long)depthDataQuality;
-(id)depthDataByApplyingExifOrientation:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthMetadataDictionary:(id)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(BOOL)isDepthDataFiltered;
-(id)description;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(CFStringRef)auxiliaryImageType;
-(id)debugDescription;
-(float)portraitLightingEffectStrength;
-(unsigned)depthDataType;
-(id)depthDataByConvertingToDepthDataType:(unsigned)arg1 ;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)depthDataMap;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(float)portraitScore;
-(long long)depthDataAccuracy;
@end
