/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIContrastEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;
	NSNumber* inputScale;
	NSNumber* inputLocal;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputLocal; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(id)outputImage;
-(NSNumber *)inputIntensity;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(NSNumber *)inputLocal;
-(void)setInputLocal:(NSNumber *)arg1 ;
@end
