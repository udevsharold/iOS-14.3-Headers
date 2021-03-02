/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {

	AVAsynchronousVideoCompositionRequestInternal* _internal;

}

@property (nonatomic,readonly) AVVideoCompositionRenderContext * renderContext; 
@property (nonatomic,readonly) SCD_Struct_AV6 compositionTime; 
@property (nonatomic,readonly) NSArray * sourceTrackIDs; 
@property (nonatomic,readonly) id<AVVideoCompositionInstruction> videoCompositionInstruction; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<AVVideoCompositionInstruction>)videoCompositionInstruction;
-(AVVideoCompositionRenderContext *)renderContext;
-(SCD_Struct_AV6)compositionTime;
-(void)finishWithComposedVideoFrame:(CVBufferRef)arg1 ;
-(void)finishCancelledRequest;
-(NSArray *)sourceTrackIDs;
-(CVBufferRef)sourceFrameByTrackID:(int)arg1 ;
-(id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg3 atTime:(SCD_Struct_AV6)arg4 usingSources:(id)arg5 instruction:(id)arg6 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(void)_willDeallocOrFinalize;
-(void)finishWithError:(id)arg1 ;
@end
