/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNodeMessage.h>

@class FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {

	opaqueCMSampleBufferRef _sampleBuffer;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 recordingSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(FigCaptureRecordingSettings *)recordingSettings;
-(void)dealloc;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
@end
