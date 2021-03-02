/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBilateralConvolution : CIFilter {

	CIImage* _inputImage;
	NSArray* _inputPoints;
	NSArray* _inputWeights;
	NSNumber* _inputEdgeDetail;
	NSNumber* _inputVersion;

}

@property (retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) NSArray * inputPoints;                   //@synthesize inputPoints=_inputPoints - In the implementation block
@property (retain) NSArray * inputWeights;                  //@synthesize inputWeights=_inputWeights - In the implementation block
@property (retain) NSNumber * inputEdgeDetail;              //@synthesize inputEdgeDetail=_inputEdgeDetail - In the implementation block
@property (retain) NSNumber * inputVersion;                 //@synthesize inputVersion=_inputVersion - In the implementation block
+(id)bilateralKernels;
+(id)RGBToLabKernels;
+(id)bilateralAdd1Kernel;
+(id)bilateralAdd2Kernel;
+(id)bilateralAdd3Kernel;
+(id)bilateralAdd4Kernel;
+(id)bilateralAdd5Kernel;
+(id)bilateralAdd6Kernel;
+(id)bilateralAdd7Kernel;
+(id)bilateralAdd8Kernel;
+(id)bilateralAdd9Kernel;
+(id)bilateralFinalizeKernel;
+(id)RGBToLabKernel;
+(id)LabToRGBKernel;
-(CIImage *)inputImage;
-(NSNumber *)inputVersion;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSArray *)inputWeights;
-(void)setInputWeights:(NSArray *)arg1 ;
-(NSArray *)inputPoints;
-(unsigned long long)samplesPerPass;
-(void)setInputPoints:(NSArray *)arg1 ;
-(CGRect)boundsForPointArray:(id)arg1 ;
-(CGRect)enlargedBounds:(CGRect)arg1 withPoints:(id)arg2 ;
-(CGRect)bilateralAddROI:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5 ;
-(NSNumber *)inputEdgeDetail;
-(void)setInputEdgeDetail:(NSNumber *)arg1 ;
-(void)setInputVersion:(NSNumber *)arg1 ;
@end
