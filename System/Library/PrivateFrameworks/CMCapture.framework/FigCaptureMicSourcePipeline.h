/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWAudioSourceNode, BWFanOutNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {

	BWAudioSourceNode* _sourceNode;
	BWFanOutNode* _splitterNodesByMicSourcePosition[3];
	unsigned _nextOutputIndexByMicSourcePosition[3];
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BWAudioSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(void)dealloc;
-(BWAudioSourceNode *)sourceNode;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 cmSession:(opaqueCMSessionRef)arg4 renderDelegate:(id)arg5 isMultiCamSession:(BOOL)arg6 ;
-(id)nextOutputForMicSourcePosition:(int)arg1 ;
-(int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(opaqueCMSessionRef)arg3 renderDelegate:(id)arg4 isMultiCamSession:(BOOL)arg5 ;
@end
