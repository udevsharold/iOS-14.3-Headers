/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary, MTLCommandQueue;
#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIResourceFactory : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)init;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 surface:(IOSurfaceRef)arg2 ;
-(void)loadShaderLibrary:(id)arg1 forObject:(id)arg2 ;
-(id)newComputePipelineStateWithName:(id)arg1 ;
-(id)newCubemapWithFormat:(SIImageFormat_struct)arg1 ;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 ;
-(id)newIOSurfaceBackedTexture:(SIImageFormat_struct)arg1 ;
-(id)newTextureWithFormat:(SIImageFormat_struct)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(id)textureFromDictionary:(id)arg1 ;
-(id)dictionaryFromTexture:(id)arg1 ;
@end

