/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandBuffer, MTLBuffer;
#import <UB/UB-Structs.h>
@class FigMetalContext, GrayGhostDetectionShaders;

@interface GrayGhostDetection : NSObject {

	FigMetalContext* _metal;
	GrayGhostDetectionShaders* _shaders;
	id<MTLCommandBuffer> _pendingResultCommandBuffer;
	id<MTLBuffer> _grayGhostCountBuffer;
	unsigned long long _totalPixels;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)runGrayGhostDetection:(id)arg1 ev0Bands:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 hasChromaBias:(BOOL)arg5 atBand:(int)arg6 params:(const GrayGhostParams*)arg7 ;
-(float)getGrayGhostResultSync;
@end

