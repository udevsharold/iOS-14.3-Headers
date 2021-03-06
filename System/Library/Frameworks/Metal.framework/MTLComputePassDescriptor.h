/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLComputePassSampleBufferAttachmentDescriptorArray;

@interface MTLComputePassDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long dispatchType; 
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray * sampleBufferAttachments; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(id)computePassDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

