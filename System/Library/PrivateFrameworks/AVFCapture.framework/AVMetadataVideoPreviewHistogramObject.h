/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject <NSCopying> {

	NSData* _lumaHistogramData;

}

@property (readonly) NSData * lumaHistogramData;              //@synthesize lumaHistogramData=_lumaHistogramData - In the implementation block
+(id)videoPreviewHistogramObjectWithLumaHistogramData:(id)arg1 input:(id)arg2 time:(SCD_Struct_AV0)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithLumaHistogramData:(id)arg1 time:(SCD_Struct_AV0)arg2 sourceCaptureInput:(id)arg3 ;
-(NSData *)lumaHistogramData;
@end

