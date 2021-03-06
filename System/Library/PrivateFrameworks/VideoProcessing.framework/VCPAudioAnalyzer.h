/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVoiceDetector, VCPAudioClassifier, VCPLoudnessAnalyzer, VCPSongDetector;

@interface VCPAudioAnalyzer : NSObject {

	void* _inputBuffer;
	AudioTimeStamp _audioTimestamp;
	AudioBufferList* _audioBufferList;
	int _sampleBatchSize;
	VCPVoiceDetector* _voiceDetector;
	VCPAudioClassifier* _audioClassifier;
	VCPLoudnessAnalyzer* _loudnessAnalyzer;
	VCPSongDetector* _songDetector;
	int _bufferedSamples;
	BOOL _initialized;

}
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC4*)arg1 ;
-(void)dealloc;
-(id)audioFormatRequirements;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 ;
-(id)voiceDetections;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(BOOL)arg2 ;
-(int)analyzeAsset:(id)arg1 cancel:(/*^block*/id)arg2 results:(id*)arg3 ;
-(int)analyzeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

