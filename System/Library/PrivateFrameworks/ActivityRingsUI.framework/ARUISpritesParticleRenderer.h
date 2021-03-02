/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class ARUISpriteParticleRenderState;

@interface ARUISpritesParticleRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	id<MTLBuffer> _vertexAttributesBuffer;
	id<MTLBuffer> _uniformsBuffer;
	ARUISpriteParticleRenderState* _spriteRenderState;
	unsigned long long _bufferSize;

}
-(void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 ;
-(void)_sharedInitWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 bufferSize:(unsigned long long)arg3 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 bufferSize:(unsigned long long)arg3 ;
@end
