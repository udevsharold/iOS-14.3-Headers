/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class AUAudioUnitBusArray, AVAudioEngine, AVAudioMixerNode, AVAudioPlayerNode, NSObject;

@interface REPlayerAudioUnit : AUAudioUnit {

	AUAudioUnitBusArray* _outputBusArray;
	AVAudioEngine* _engine;
	AVAudioMixerNode* _sampleRateConverter;
	AVAudioPlayerNode* _playingNode;
	atomic<bool> _didHitStop;
	atomic<bool> _looping;
	id _resource;
	mutex _engineConfigurationMutex;
	shared_ptr<AudioStreamRecordingManager::StreamWriter>* _recordingStreamWriter;
	/*^block*/id _playingNodeRenderBlock;
	/*^block*/id _sampleRateConverterRenderBlock;
	OpaqueAudioComponentInstanceRef _playingNodeAudioUnit;
	double _startTime;
	double _pauseTime;
	atomic<double> _renderSampleTime;
	unsigned long long _currentPlayTimeParamAddress;
	atomic<REAudioPlaybackState> _playbackState;
	atomic<unsigned int> _playedFrames;
	BOOL _isScheduled;
	atomic<bool> _shouldDispatchCompletion;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;
	/*^block*/id _streamPlaybackDidComplete;

}

@property (readonly) BOOL isPrepared; 
@property (readonly) double assetDuration; 
@property (assign) double playbackPosition; 
@property (retain) NSObject*<OS_dispatch_queue> serialWorkQueue;              //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (copy) id streamPlaybackDidComplete;                                //@synthesize streamPlaybackDidComplete=_streamPlaybackDidComplete - In the implementation block
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(BOOL)isPrepared;
-(void)pause;
-(double)outputSampleRate;
-(void)setPlaybackPosition:(double)arg1 ;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)play;
-(/*^block*/id)internalRenderBlock;
-(id)channelCapabilities;
-(void)deallocateRenderResources;
-(double)playbackPosition;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)stop;
-(void)resume;
-(void)scheduleCurrentResourceOnPlayer:(id)arg1 ;
-(id)streamPlaybackDidComplete;
-(void)scheduleCurrentResourceOnPlayer:(id)arg1 startingProgress:(double)arg2 ;
-(void)_playbackCompletionCallback;
-(double)assetDuration;
-(void)prepareToPlayFile:(id)arg1 withLayoutTag:(unsigned)arg2 looping:(BOOL)arg3 ;
-(void)prepareToPlayBuffer:(id)arg1 withLayoutTag:(unsigned)arg2 looping:(BOOL)arg3 ;
-(void)setStreamPlaybackDidComplete:(id)arg1 ;
@end

