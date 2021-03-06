/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADJasperPointCloud : NSObject {

	JasperPointCloud* _pc;
	CVBufferRef _dataBuffer;

}

@property (readonly) int length; 
@property (readonly) const float* euclideanDistances; 
@property (readonly) const CGPoint* cameraPixels; 
@property (readonly) const CGPoint* undistortedCameraPixels; 
@property (readonly) const * points; 
@property (readonly) const float* intensities; 
@property (readonly) const float* confidences; 
@property (readonly) const float* signalToNoiseRatios; 
@property (readonly) const char* bankIds; 
@property (readonly) const char* spotIds; 
@property (readonly) const char* echoIds; 
@property (readonly) const unsigned* flags; 
+(unsigned)pixelFormat;
+(id)makeWithDataBuffer:(CVBufferRef)arg1 ;
+(BOOL)prepareDataBuffer:(CVBufferRef)arg1 forLength:(int)arg2 ;
+(unsigned long long)requiredStorageBytesForLength:(int)arg1 ;
+(id)pointCloudByMergingPointClouds:(id)arg1 ;
+(id)pointCloudFromCSV:(id)arg1 ;
+(id)pointCloudFromJSPP:(id)arg1 ;
+(id)pointCloudFromFile:(id)arg1 ;
+(id)pointCloudByMergingPointClouds:(id)arg1 applyingTransforms:(SCD_Struct_AD1*)arg2 projectingToCamera:(id)arg3 ;
-(const char*)spotIds;
-(int)length;
-(const char*)bankIds;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)reset;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)dealloc;
-(CVBufferRef)dataBuffer;
-(id)mutableCopy;
-(const float*)confidences;
-(int)size;
-(const *)points;
-(const char*)echoIds;
-(id)dictionaryRepresentation;
-(id)initWithDataBuffer:(CVBufferRef)arg1 ;
-(const unsigned*)flags;
-(id)initWithLength:(int)arg1 ;
-(id)initWithPointCloud:(id)arg1 ;
-(const CGPoint*)cameraPixels;
-(const float*)euclideanDistances;
-(const CGPoint*)undistortedCameraPixels;
-(const float*)intensities;
-(const float*)signalToNoiseRatios;
-(id)pointCloudByChangingPointOfViewFrom:(id)arg1 to:(id)arg2 ;
-(id)initByMergingPointClouds:(id)arg1 ;
-(BOOL)pointCloudToCSV:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)pointCloudToJSPP:(id)arg1 atomically:(BOOL)arg2 ;
-(id)pointCloudByChangingPointOfViewByTransform:(SCD_Struct_AD1)arg1 to:(id)arg2 ;
-(id)initWithLength:(int)arg1 storage:(CVBufferRef)arg2 ;
-(long long)projectJasperPointsFilteredBy:(id)arg1 croppedBy:(CGRect)arg2 rotatedBy:(long long)arg3 andScaledInto:(CVBufferRef)arg4 ;
-(long long)projectJasperPointsFilteredBy:(id)arg1 croppedBy:(CGRect)arg2 rotatedBy:(long long)arg3 andScaledMergingWith:(CVBufferRef)arg4 ;
-(long long)projectJasperPointsCroppedBy:(CGRect)arg1 rotatedBy:(long long)arg2 andScaledInto:(CVBufferRef)arg3 ;
-(id)pointCloudByApplyingFilter:(id)arg1 ;
@end

