/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>

@class NUGLBuffer, NSArray, NUGLVertexLayout;

@interface NUGLVertexArray : NUGLObject {

	NUGLBuffer* _buffer;
	NSArray* _locations;
	BOOL _needsUpdate;
	NUGLVertexLayout* _layout;
	long long _capacity;
	long long _count;
	NSArray* _attributeLocations;

}

@property (nonatomic,readonly) NUGLVertexLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long capacity;                     //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) long long count;                        //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * attributeLocations;               //@synthesize attributeLocations=_attributeLocations - In the implementation block
-(void)delete;
-(long long)capacity;
-(id)init;
-(void)reset;
-(void)ensure:(id)arg1 ;
-(NUGLVertexLayout *)layout;
-(long long)count;
-(void)generate:(id)arg1 ;
-(id)initWithLayout:(id)arg1 capacity:(long long)arg2 ;
-(void)setAttributeLocations:(NSArray *)arg1 ;
-(void)_updateAttributesWithContext:(id)arg1 ;
-(void)readVertexDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSRange)bufferRangeForVertexRange:(NSRange)arg1 ;
-(NSRange)writeVertexData:(long long)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_growToCapacity:(long long)arg1 context:(id)arg2 ;
-(NSArray *)attributeLocations;
@end

