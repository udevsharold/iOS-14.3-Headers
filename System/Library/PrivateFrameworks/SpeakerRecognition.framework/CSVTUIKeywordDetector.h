/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSRTriggerPhraseDetectorNDAPI, CSAudioCircularBuffer;

@interface CSVTUIKeywordDetector : NSObject {

	SSRTriggerPhraseDetectorNDAPI* _keywordAnalyzer;
	float _lastKeywordScore;
	float _keywordThreshold;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _extraSamplesAtStart;

}
-(void)reset;
-(id)analyze:(id)arg1 ;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(id)initWithAsset:(id)arg1 ;
-(id)triggeredUtterance:(id)arg1 ;
@end

