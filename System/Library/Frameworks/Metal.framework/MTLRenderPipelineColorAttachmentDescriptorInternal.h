/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor {

	MTLRenderPipelineAttachmentDescriptorPrivate _private;

}
-(unsigned long long)pixelFormat;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceAlphaBlendFactor:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDestinationRGBBlendFactor:(unsigned long long)arg1 ;
-(unsigned long long)writeMask;
-(unsigned long long)destinationRGBBlendFactor;
-(unsigned long long)alphaBlendOperation;
-(void)setRgbBlendOperation:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(unsigned long long)sourceRGBBlendFactor;
-(id)description;
-(void)setWriteMask:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAlphaBlendOperation:(unsigned long long)arg1 ;
-(unsigned long long)destinationAlphaBlendFactor;
-(unsigned long long)sourceAlphaBlendFactor;
-(void)setDestinationAlphaBlendFactor:(unsigned long long)arg1 ;
-(const MTLRenderPipelineAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rgbBlendOperation;
-(BOOL)isBlendingEnabled;
-(void)setSourceRGBBlendFactor:(unsigned long long)arg1 ;
@end
