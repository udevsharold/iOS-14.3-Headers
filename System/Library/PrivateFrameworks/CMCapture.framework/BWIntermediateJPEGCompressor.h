/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSObject, NSMutableDictionary, BWStats, BWMovingWindowStats;

@interface BWIntermediateJPEGCompressor : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;
	unsigned long long _compressedBufferSize;
	unsigned long long _compressedBufferPoolAllocationTimeoutMS;
	float _compressionQuality;
	float _compressionRate;
	int _numberOfTimesWaitedOnBackPressureSemaphore;
	int _jpegSurfacePoolLowWaterBufferCount;
	int _jpegSurfacePoolHighWaterBufferCount;
	BOOL _setupIsComplete;
	FigPhotoSurfacePoolRef _surfacePool;
	FigPhotoCompressionSessionRef _compressionSession;
	CFDictionaryRef _containerOptions;
	NSMutableDictionary* _qualityControllerParameters;
	CFDictionaryRef _compressionOptions;
	opaqueCMFormatDescriptionRef _jpegFormatDescription;
	BWStats* _overallWaitStats;
	BWMovingWindowStats* _recentWaitStats;

}
+(void)initialize;
-(opaqueCMSampleBufferRef)newJPEGSampleBufferFromUncompressedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(void)_releaseResources;
-(int)_setupJPEGFormatDescriptionFromSourceBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupJPEGSurfacePool;
-(int)_setupJPEGCompressionOptions;
-(int)_setupJPEGCompressionSession;
-(id)initWithCompressionQuality:(float)arg1 compressionRate:(float)arg2 jpegSurfacePoolLowWaterBufferCount:(int)arg3 jpegSurfacePoolHighWaterBufferCount:(int)arg4 compressedBufferPoolAllocationTimeoutMS:(unsigned long long)arg5 name:(id)arg6 ;
-(int)_setupJPEGContainerOptions;
@end

