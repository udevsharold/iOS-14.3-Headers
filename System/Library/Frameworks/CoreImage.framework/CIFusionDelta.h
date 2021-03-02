/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIFusionDelta : CIFilter {

	CIImage* inputImage;
	CIVector* inputAddBlur;
	CIVector* inputRemoveBlur;
	NSNumber* inputApertureScaling;
	NSNumber* inputMaxBlur;

}
+(id)customAttributes;
-(id)kernel;
-(id)outputImage;
-(BOOL)_isIdentity;
@end
