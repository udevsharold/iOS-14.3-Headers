/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec2DataBuffer : TSCH3DFloatVectorDataBuffer {

	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mContainer;

}

@property (nonatomic,readonly) vector<glm::detail::tvec2<float>* container; 
-(void)clear;
-(unsigned long long)components;
-(vector<glm::detail::tvec2<float>*)container;
-(const void*)data;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
@end

