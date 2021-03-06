/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioDecoderDelegate;
#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioDecoderDelegate> _delegate;

}

@property (__weak) id<CSAudioDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)speexDecoder;
+(id)opusDecoder;
-(void)setDelegate:(id<CSAudioDecoderDelegate>)arg1 ;
-(id<CSAudioDecoderDelegate>)delegate;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned)arg5 ;
@end

