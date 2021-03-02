/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICheapBilateral : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	NSNumber* inputSigmaSpace;
	NSNumber* inputSigmaRange;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) NSNumber * inputSigmaSpace; 
@property (nonatomic,retain) NSNumber * inputSigmaRange; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputSigmaSpace;
-(void)setInputSigmaSpace:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRange;
-(void)setInputSigmaRange:(NSNumber *)arg1 ;
@end
