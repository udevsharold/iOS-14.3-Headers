/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBlurmapRefinementThreshold : CIFilter {

	CIImage* inputImage;
	NSNumber* inputThreshold;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSNumber * inputThreshold; 
-(CIImage *)inputImage;
-(id)kernel;
-(id)outputImage;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end
