/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTKeywordDetectorPhraseScore : NSObject {

	float _score;
	unsigned long long _phraseId;

}

@property (assign,nonatomic) unsigned long long phraseId;              //@synthesize phraseId=_phraseId - In the implementation block
@property (assign,nonatomic) float score;                              //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(id)initWithPhraseId:(unsigned long long)arg1 withScore:(float)arg2 ;
@end

