/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIFusionTwoImagesDelta : CIFilter {

	CIImage* inputImage;
	CIImage* inputSecondaryImage;
	NSNumber* inputProtectStrength;
	NSNumber* inputApertureScaling;
	CIVector* inputAdditive;
	CIVector* inputSubtractive;
	NSNumber* inputMaxBlur;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputSecondaryImage; 
@property (retain) NSNumber * inputProtectStrength; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) CIVector * inputAdditive; 
@property (retain) CIVector * inputSubtractive; 
@property (retain) NSNumber * inputMaxBlur; 
-(CIImage *)inputImage;
-(id)kernel;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(CIImage *)inputSecondaryImage;
-(NSNumber *)inputProtectStrength;
-(void)setInputSecondaryImage:(CIImage *)arg1 ;
-(void)setInputProtectStrength:(NSNumber *)arg1 ;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(CIVector *)inputAdditive;
-(CIVector *)inputSubtractive;
-(void)setInputAdditive:(CIVector *)arg1 ;
-(void)setInputSubtractive:(CIVector *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
@end
