/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DDataBuffer.h>

@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer {

	DataBuffer3DDimension mDimension;
	vector<unsigned char, std::__1::allocator<unsigned char> > mContainer;

}

@property (nonatomic,readonly) vector<unsigned char* container; 
+(id)bufferWithCapacity3DDimension:(const DataBuffer3DDimension*)arg1 ;
-(unsigned long long)components;
-(vector<unsigned char*)container;
-(const void*)data;
-(tvec3<int>)size;
-(unsigned long long)count;
-(int)componentType;
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)initWithCapacity3DDimension:(const DataBuffer3DDimension*)arg1 ;
@end
