/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSlaveFrameSynchronizerNode : BWNode {

	int _numEODMessagesReceived;
	os_unfair_lock_s _bufferServicingLock;
	opaqueCMSimpleQueue* _inputSampleBufferQueues;
	int _numBufferedFrames;
	BOOL _slaveStreamHasStarted;
	int _numSlaveFramesReceived;
	int _numSlaveFramesToSkip;
	BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;

}
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithDepthEnabled:(BOOL)arg1 numberOfInputs:(int)arg2 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 inputIndexesDrivingDepthOutput:(id)arg3 ;
-(void)_purgeAllBuffers;
-(void)_printState;
-(void)_purgeAllPurgeableBuffers;
-(void)_tryToEmitBuffers;
-(void)_emitIncomingFrameKtraces:(opaqueCMSampleBufferRef)arg1 withInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
@end

