/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;
#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@class NSObject;

@interface CSAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioFileReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAudioFileReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopRecording;
-(BOOL)startRecording;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(void)setDelegate:(id<CSAudioFileReaderDelegate>)arg1 ;
-(void)close;
-(id<CSAudioFileReaderDelegate>)delegate;
-(void)_readAudioBufferAndFeed;
-(BOOL)prepareRecording:(id)arg1 ;
-(id)readSamplesFromChannelIdx:(unsigned)arg1 ;
@end

