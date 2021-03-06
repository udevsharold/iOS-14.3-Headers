/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(CIImage *)inputImage;
-(void)setInputPoint:(CIVector *)arg1 ;
-(CIVector *)inputPoint;
-(Rectangle)computeDOD:(vec2)arg1 tst:(vec3)arg2 off:(vec4)arg3 mtx:(vec4)arg4 ;
-(id)_kernel;
-(id)outputImage;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

