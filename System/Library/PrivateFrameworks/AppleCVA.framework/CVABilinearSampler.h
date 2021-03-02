/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLRenderPipelineState;
#import <AppleCVA/AppleCVA-Structs.h>
@class MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;

@interface CVABilinearSampler : NSObject {

	id<MTLDevice> _device;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	MTLRenderPipelineDescriptor* _renderPipelineDescriptor;
	id<MTLRenderPipelineState> _renderPipelineState;
	SCD_Struct_CV0 _vertexData[4];
	unsigned long long _loadAction;
	unsigned long long _storeAction;
	SCD_Struct_CV1 _sourceQuad;
	SCD_Struct_CV1 _destinationQuad;

}

@property (assign) unsigned long long loadAction;               //@synthesize loadAction=_loadAction - In the implementation block
@property (assign) unsigned long long storeAction;              //@synthesize storeAction=_storeAction - In the implementation block
@property (assign) SCD_Struct_CV1 sourceQuad;                   //@synthesize sourceQuad=_sourceQuad - In the implementation block
@property (assign) SCD_Struct_CV1 destinationQuad;              //@synthesize destinationQuad=_destinationQuad - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(unsigned long long)storeAction;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(unsigned long long)loadAction;
-(void)setSourceQuad:(SCD_Struct_CV1)arg1 ;
-(void)setDestinationQuad:(SCD_Struct_CV1)arg1 ;
-(SCD_Struct_CV1)sourceQuad;
-(SCD_Struct_CV1)destinationQuad;
@end
