/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <PencilKit/PencilKit-Structs.h>
@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject {

	id<MTLBuffer> _strokePointBuffer;
	unsigned long long _strokePointBufferOffset;
	id<MTLBuffer> _liveStrokePointBuffer;
	unsigned long long _liveStrokePointBufferOffset;
	unsigned long long _numVertices;
	unsigned long long _numPoints;

}

@property (nonatomic,readonly) id<MTLBuffer> strokePointBuffer;                             //@synthesize strokePointBuffer=_strokePointBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long strokePointBufferOffset;                  //@synthesize strokePointBufferOffset=_strokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> liveStrokePointBuffer;                         //@synthesize liveStrokePointBuffer=_liveStrokePointBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long liveStrokePointBufferOffset;              //@synthesize liveStrokePointBufferOffset=_liveStrokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;                              //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long numPoints;                                //@synthesize numPoints=_numPoints - In the implementation block
-(unsigned long long)numVertices;
-(id)init;
-(unsigned long long)numPoints;
-(id<MTLBuffer>)strokePointBuffer;
-(unsigned long long)strokePointBufferOffset;
-(id<MTLBuffer>)liveStrokePointBuffer;
-(unsigned long long)liveStrokePointBufferOffset;
-(id)initWithPoints:(const PKMetalPaintStrokePoint*)arg1 liveStrokePoints:(const PKMetalLiveStrokePaintStrokePoint*)arg2 numPoints:(unsigned long long)arg3 numVertices:(unsigned long long)arg4 resourceHandler:(id)arg5 ;
@end

