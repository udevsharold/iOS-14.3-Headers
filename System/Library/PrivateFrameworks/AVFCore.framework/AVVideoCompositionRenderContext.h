/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVVideoCompositionRenderContextInternal, AVVideoComposition;

@interface AVVideoCompositionRenderContext : NSObject {

	AVVideoCompositionRenderContextInternal* _internal;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform renderTransform; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,readonly) SCD_Struct_AV73 pixelAspectRatio; 
@property (nonatomic,readonly) NSEdgeInsets edgeWidths; 
@property (nonatomic,readonly) BOOL highQualityRendering; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
+(id)renderContextPropertiesFromFigCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(SCD_Struct_AV73)pixelAspectRatio;
-(void)dealloc;
-(NSEdgeInsets)edgeWidths;
-(CGSize)size;
-(CVBufferRef)newPixelBuffer;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(CGAffineTransform)renderTransform;
-(id)initWithFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(CVPixelBufferPoolRef)arg4 ;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(OpaqueFigVideoCompositorRef)arg1 ;
-(BOOL)isBufferYCbCr:(CVBufferRef)arg1 ;
-(BOOL)highQualityRendering;
-(void)_willDeallocOrFinalize;
-(float)renderScale;
-(AVVideoComposition *)videoComposition;
@end

