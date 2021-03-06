/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {

	unsigned long long histogramEntries;
	BOOL histogramAlpha;
	 minPixelValue;
	 maxPixelValue;
	BOOL optimized256BinsUseCase;
	id<MTLBuffer> specificationBuffer;
	BOOL encodeTransform;

}

@property (nonatomic,readonly) SCD_Struct_MP12 histogramInfo; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 histogramInfo:(const SCD_Struct_MP12*)arg2 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_MP12)histogramInfo;
-(void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned long long)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned long long)arg6 ;
@end

