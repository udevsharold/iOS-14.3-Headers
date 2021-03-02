/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol OS_dispatch_queue;
@class AVAudioFormat, NSObject, SNAudioRecordingQueue, SNAudioStreamAnalyzer, NSMutableArray;

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {

	AVAudioFormat* _recordFormat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SNAudioRecordingQueue* _recordingQueue;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	long long _recordingState;
	BOOL _clientStartedAnalysis;
	NSMutableArray* _requests;

}
-(void)removeAllRequests;
-(id)init;
-(void)_removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)start;
-(void)removeRequest:(id)arg1 ;
-(void)stop;
-(void)_removeRequest:(id)arg1 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)handleAVAudioSessionInterruption:(id)arg1 ;
-(void)handleAVAudioSessionRouteChange:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesLost:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesReset:(id)arg1 ;
-(BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)startAudio;
-(void)stopAudio;
-(void)handleAudioStreamInterrupted;
@end
