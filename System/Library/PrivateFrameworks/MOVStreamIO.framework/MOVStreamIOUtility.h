/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamIOUtility : NSObject
+(id)valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)audioNoneEncoderConfig;
+(id)monochrome8bitHEVCLosslessEncoderConfig;
+(id)monochrome8bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)monochrome8bitHEVCEncoderConfig;
+(id)slimEncoderConfig;
+(BOOL)isEncoderAvailableForEncoderType:(int)arg1 ;
+(id)colorH264EncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)colorH264EncoderConfig;
+(id)colorHEVCLosslessEncoderConfig;
+(id)colorHEVCEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)colorHEVCEncoderConfig;
+(opaqueCMFormatDescriptionRef)formatForPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)isEncoderAvailableWithEncoderName:(id)arg1 ;
+(double)transformAngleFromVideoOrientation:(int)arg1 ;
+(unsigned long long)getPreferredPlaneAlignmentSize;
+(unsigned long long)getPreferredBytesPerRowAlignmentSize;
+(unsigned long long)getDefaultBitrateForVideoDimension:(SCD_Struct_MO2)arg1 atExpectedFramerate:(double)arg2 forEncoderType:(int)arg3 ;
+(CGAffineTransform)CGAffineTransformValueFromNSValue:(id)arg1 ;
+(id)addTransform:(CGAffineTransform)arg1 toConfiguration:(id)arg2 ;
+(id)addTrackTypeInfo:(unsigned long long)arg1 toConfiguration:(id)arg2 ;
+(id)monochrome10bitHEVCLosslessEncoderConfig;
+(id)color8bitHEVCWithAlphaEncoderConfig;
+(id)color8bitHEVCWithAlphaEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)colorWithAlphaLossless8bitHEVCEncoderConfig;
+(id)slimXEncoderConfig;
+(id)noneEncoderConfig;
+(id)sampleBufferConfigWithPixelFormat:(unsigned)arg1 ;
+(id)customEncoderConfig;
+(id)customEncoderConfigWithEmbeddedConfiguration:(id)arg1 ;
+(id)monochrome10bitHEVCEncoderConfig;
+(id)monochrome10bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(BOOL)verifyExactBytesPerRow:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned)arg4 ;
+(id)getJsonFriendlyCopy:(id)arg1 ;
+(id)getPlistFriendlyCopyOf:(id)arg1 ;
+(BOOL)isValidJSONObject:(id)arg1 path:(id)arg2 ;
+(opaqueCMFormatDescriptionRef)createL010FormatDescriptionFromL016FormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(opaqueCMFormatDescriptionRef)createL010FormatDescriptionFromRawBayerFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(opaqueCMFormatDescriptionRef)createxf20FormatDescriptionFromRawBayerFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(opaqueCMFormatDescriptionRef)createL008FormatDescriptionFromCompandedRawBayerFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
@end

