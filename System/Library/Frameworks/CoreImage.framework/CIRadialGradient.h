/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius0;
	NSNumber* inputRadius1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius0; 
@property (nonatomic,retain) NSNumber * inputRadius1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(NSNumber *)inputRadius1;
-(void)setInputRadius1:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius0;
-(void)setInputRadius0:(NSNumber *)arg1 ;
-(id)_kernel;
-(id)outputImage;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
@end
