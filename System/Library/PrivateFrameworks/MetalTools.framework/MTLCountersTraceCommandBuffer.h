/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalTools/MetalTools-Structs.h>
@class NSMutableArray;

@interface MTLCountersTraceCommandBuffer : NSObject {

	BinaryBuffer* _commands;
	NSMutableArray* _encoders;
	AppendBuffer* _samples;
	unsigned long long _flags;
	unsigned long long _timestamp;

}
-(id)renderCommandEncoder;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilScheduled;
-(void)dealloc;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)waitUntilCompleted;
-(id)resourceStateCommandEncoder;
-(id)init:(BOOL)arg1 ;
-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(void)appendSamples:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)saveCommandBuffer:(const void*)arg1 queue:(id)arg2 profilingResults:(id)arg3 ;
@end

