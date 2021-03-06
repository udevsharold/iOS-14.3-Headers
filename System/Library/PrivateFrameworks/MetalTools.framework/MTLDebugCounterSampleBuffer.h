/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCounterSampleBuffer.h>

@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer {

	MTLCounterSampleBufferDescriptor* _descriptor;
	unsigned long long _storageMode;

}

@property (nonatomic,readonly) MTLCounterSampleBufferDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long storageMode;                             //@synthesize storageMode=_storageMode - In the implementation block
-(unsigned long long)storageMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(MTLCounterSampleBufferDescriptor *)descriptor;
-(id)resolveCounterRange:(NSRange)arg1 ;
-(id)initWithCounterSampleBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 ;
@end

