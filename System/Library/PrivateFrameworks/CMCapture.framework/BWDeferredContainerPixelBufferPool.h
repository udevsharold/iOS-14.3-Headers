/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {

	BWVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(BWVideoFormat *)videoFormat;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 providesBackPressure:(BOOL)arg6 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flush;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(int)preallocate;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
@end
