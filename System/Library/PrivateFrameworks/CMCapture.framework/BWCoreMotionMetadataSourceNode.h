/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class CMMotionManager, NSObject;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {

	CMMotionManager* _motionManager;
	int _bufferGenerationRate;
	int _samplesPerBuffer;
	BOOL _running;
	BWCoreMotionMetadataSampleData* _sampleDataForBuffer;
	int _numSamplesInBuffer;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfCoreMotionMetadata_BE;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
+(int)extractBWCoreMotionMetadataFromBlockBuffer:(OpaqueCMBlockBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
+(int)extractBWCoreMotionMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
-(OpaqueCMClockRef)clock;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)start:(id*)arg1 ;
-(id)nodeSubType;
-(BOOL)stop:(id*)arg1 ;
-(void)dealloc;
-(void)_emitMetadataSampleBuffer;
-(id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2 ;
@end

