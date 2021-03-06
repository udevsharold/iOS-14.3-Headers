/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {

	CIImage* inputImage;
	CIVector* inputBlacks;
	NSNumber* inputRange;
	CIVector* inputFactors;
	NSNumber* inputPattern;
	NSNumber* inputDespeckle;
	CIVector* inputCropRect;
	NSNumber* inputRepresentativeNoise;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	CIVector* inputNoiseModel;
	NSNumber* inputBaselineExposure;
	NSNumber* inputVersion;

}
-(id)range;
-(id)crop;
-(id)blacks;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(int)sensorType;
-(id)phaseForBayer;
-(id)phaseForXtrans;
-(int)versionfor:(int)arg1 ;
-(id)phaseFor:(int)arg1 ;
-(int)forceVersion;
-(id)exposureFactor;
-(id)noiseModel;
@end

