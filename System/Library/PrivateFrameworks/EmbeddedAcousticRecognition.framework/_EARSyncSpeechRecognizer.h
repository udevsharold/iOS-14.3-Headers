/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARFormatter, NSString;

@interface _EARSyncSpeechRecognizer : NSObject {

	NSObject*<OS_dispatch_queue> _formatterQueue;
	_EARFormatter* _formatter;
	shared_ptr<quasar::SyncSpeechRecognizer>* _syncRecognizer;
	NSString* _configPath;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(void)resetWithSamplingRate:(unsigned)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(BOOL)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned)arg9 ;
-(id)resultsWithEndedAudio;
-(id)resultsWithAddedFloatAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3 ;
-(id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3 ;
-(id)getSpeechRecognitionResultFromTokens:(vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >*)arg1 taskName:(id)arg2 ;
@end

