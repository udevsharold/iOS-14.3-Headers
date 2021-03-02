/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSState : NSObject {

	MPSStateResource* _resources;
	unsigned long long _resourceCount;
	unsigned long long _readCount;
	NSString* _label;
	unsigned short _flags;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long resourceCount;              //@synthesize resourceCount=_resourceCount - In the implementation block
@property (assign,nonatomic) unsigned long long readCount;                    //@synthesize readCount=_readCount - In the implementation block
@property (nonatomic,readonly) BOOL isTemporary; 
@property (copy) NSString * label; 
@property (nonatomic,retain,readonly) id<MTLResource> resource; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 ;
-(BOOL)isTemporary;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)bufferSizeAtIndex:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)resourceSize;
-(unsigned long long)resourceTypeAtIndex:(unsigned long long)arg1 ;
-(MPSStateTextureInfo)textureInfoAtIndex:(unsigned long long)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 allocateMemory:(BOOL)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLResource>)resource;
-(unsigned long long)resourceCount;
-(id)initWithResource:(id)arg1 ;
-(id)initWithDevice:(id)arg1 textureDescriptor:(id)arg2 ;
-(id)debugDescription;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(NSString *)label;
-(unsigned long long)readCount;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
@end
