/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	unsigned _unknownStoreActions;
	atomic<unsigned long long> _attachmentWriteMask;
	MTLRenderPassDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)renderCommandEncoder;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(MTLRenderPassDescriptor *)descriptor;
-(void)endEncoding;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
-(void)mergeAttachmentWriteMask:(unsigned long long)arg1 ;
@end
