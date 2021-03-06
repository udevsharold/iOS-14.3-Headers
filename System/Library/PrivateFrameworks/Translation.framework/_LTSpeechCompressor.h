/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LTSpeechCompressorDelegate;
#import <Translation/Translation-Structs.h>
@class NSMutableData;

@interface _LTSpeechCompressor : NSObject {

	id<_LTSpeechCompressorDelegate> _delegate;
	OpaqueAudioConverterRef _audioConverter;
	NSMutableData* _bufferedAudio;
	unsigned long long _packetIndex;
	unsigned long long _bytesConsumed;

}
-(void)reset;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)startCompressionNarrowband:(BOOL)arg1 ;
-(void)addAudioSampleData:(id)arg1 ;
@end

