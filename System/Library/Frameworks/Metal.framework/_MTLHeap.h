/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLObjectWithLabel.h>

@interface _MTLHeap : _MTLObjectWithLabel {

	unsigned long long _heapResourceOptions;
	long long _heapType;
	unsigned long long _gpuAddress;

}

@property (readonly) long long type; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (nonatomic,readonly) unsigned long long gpuAddress;                   //@synthesize gpuAddress=_gpuAddress - In the implementation block
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceOptions;
-(unsigned long long)storageMode;
-(unsigned long long)cpuCacheMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)unfilteredResourceOptions;
-(id)description;
-(long long)type;
-(id)initWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2 ;
@end

