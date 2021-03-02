/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject {

	AVCameraCalibrationDataInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV32 intrinsicMatrix; 
@property (nonatomic,readonly) CGSize intrinsicMatrixReferenceDimensions; 
@property (nonatomic,readonly) SCD_Struct_AV33 extrinsicMatrix; 
@property (nonatomic,readonly) float pixelSize; 
@property (nonatomic,readonly) NSData * lensDistortionLookupTable; 
@property (nonatomic,readonly) NSData * inverseLensDistortionLookupTable; 
@property (nonatomic,readonly) CGPoint lensDistortionCenter; 
-(float)pixelSize;
-(id)cameraCalibrationDataWithExifOrientation:(unsigned)arg1 ;
-(id)initWithAuxiliaryMetadata:(CGImageMetadataRef)arg1 ;
-(void)dealloc;
-(id)initWithDepthMetadataDictionary:(id)arg1 ;
-(id)description;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(id)_initEmpty;
-(id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(CGSize)arg4 lookupTableLength:(int)arg5 ;
-(id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(SCD_Struct_AV32)intrinsicMatrix;
-(SCD_Struct_AV33)extrinsicMatrix;
-(CGSize)intrinsicMatrixReferenceDimensions;
-(CGPoint)lensDistortionCenter;
-(NSData *)lensDistortionLookupTable;
-(NSData *)inverseLensDistortionLookupTable;
-(id)cameraCalibrationDataDictionary;
@end
