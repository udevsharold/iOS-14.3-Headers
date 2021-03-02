/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLTexture;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARMeshPrimitive : NSObject {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _uvBuffer;
	unsigned long long _nVertices;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _nIndices;
	id<MTLTexture> _texture;
	SCD_Struct_AR1 _transform_world_from_primitive;

}

@property (readonly) SCD_Struct_AR1 transform_world_from_primitive;              //@synthesize transform_world_from_primitive=_transform_world_from_primitive - In the implementation block
@property (readonly) id<MTLBuffer> vertexBuffer;                                 //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (readonly) id<MTLBuffer> uvBuffer;                                     //@synthesize uvBuffer=_uvBuffer - In the implementation block
@property (readonly) unsigned long long nVertices;                               //@synthesize nVertices=_nVertices - In the implementation block
@property (readonly) id<MTLBuffer> indexBuffer;                                  //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (readonly) unsigned long long nIndices;                                //@synthesize nIndices=_nIndices - In the implementation block
@property (readonly) id<MTLTexture> texture;                                     //@synthesize texture=_texture - In the implementation block
+(id)planeWithTransform:(SCD_Struct_AR1)arg1 min:(id)arg2 ;
-(id<MTLTexture>)texture;
-(id<MTLBuffer>)vertexBuffer;
-(id<MTLBuffer>)indexBuffer;
-(id<MTLBuffer>)uvBuffer;
-(SCD_Struct_AR1)transform_world_from_primitive;
-(unsigned long long)nIndices;
-(id)initAsPlaneWithTransform:(SCD_Struct_AR1)arg1 min:(id)arg2 ;
-(unsigned long long)nVertices;
@end
