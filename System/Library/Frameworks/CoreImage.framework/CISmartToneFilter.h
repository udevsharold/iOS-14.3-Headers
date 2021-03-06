/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData, CIContext;

@interface CISmartToneFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputExposure;
	NSNumber* inputContrast;
	NSNumber* inputBrightness;
	NSNumber* inputShadows;
	NSNumber* inputHighlights;
	NSNumber* inputBlack;
	NSNumber* inputRawHighlights;
	NSNumber* inputLocalLight;
	NSData* _inputLightMap;
	NSNumber* inputUseCube;
	id inputUseCubeColorSpace;
	CIImage* _cubeImage;
	NSData* _cubeData;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputExposure; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputShadows; 
@property (nonatomic,retain) NSNumber * inputHighlights; 
@property (nonatomic,retain) NSNumber * inputBlack; 
@property (nonatomic,retain) NSNumber * inputRawHighlights; 
@property (nonatomic,retain) NSNumber * inputLocalLight; 
@property (nonatomic,retain) NSData * inputLightMap;                     //@synthesize inputLightMap=_inputLightMap - In the implementation block
@property (nonatomic,retain) NSNumber * inputUseCube; 
@property (nonatomic,retain) id inputUseCubeColorSpace; 
+(id)customAttributes;
-(CIImage *)inputImage;
-(NSData *)inputLightMap;
-(NSNumber *)inputLocalLight;
-(void)dealloc;
-(id)_kernelBneg;
-(id)_kernelC;
-(NSNumber *)inputUseCube;
-(id)inputUseCubeColorSpace;
-(id)_kernelBpos;
-(NSNumber *)inputExposure;
-(void)setInputExposure:(NSNumber *)arg1 ;
-(NSNumber *)inputShadows;
-(void)setInputShadows:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlights;
-(void)setInputHighlights:(NSNumber *)arg1 ;
-(NSNumber *)inputBlack;
-(void)setInputBlack:(NSNumber *)arg1 ;
-(NSNumber *)inputRawHighlights;
-(void)setInputRawHighlights:(NSNumber *)arg1 ;
-(void)setInputLocalLight:(NSNumber *)arg1 ;
-(void)setInputLightMap:(NSData *)arg1 ;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(void)setInputUseCubeColorSpace:(id)arg1 ;
-(id)_kernelH;
-(id)outputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputContrast;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelRH;
@end

