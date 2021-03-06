/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class MTLIOAccelDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {

	IOAccelCommandQueueRef _commandQueue;
	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned long long _priority;
	unsigned long long _backgroundPriority;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)setCompletionQueue:(id)arg1 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id<MTLDevice>)device;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(unsigned long long)getGPUPriority;
-(unsigned long long)getBackgroundGPUPriority;
-(void)setLabel:(id)arg1 ;
-(BOOL)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
@end

