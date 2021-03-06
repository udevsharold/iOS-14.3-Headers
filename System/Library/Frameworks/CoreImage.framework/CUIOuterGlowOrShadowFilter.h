/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIOuterGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSpread;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSpread; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(CIImage *)inputImage;
-(id)_kernel;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputRange;
-(NSNumber *)inputSpread;
-(CIVector *)inputOffset;
-(void)setInputOffset:(CIVector *)arg1 ;
-(void)setInputRange:(NSNumber *)arg1 ;
-(void)setInputSpread:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(id)outputImage;
-(CIColor *)inputColor;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
@end

