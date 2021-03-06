/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VTKeywordAnalyzerResults : NSObject {

	unsigned long long _detectorType;
	unsigned long long _numPhraseResults;
	NSArray* _phraseScores;

}

@property (assign,nonatomic) unsigned long long detectorType;                  //@synthesize detectorType=_detectorType - In the implementation block
@property (assign,nonatomic) unsigned long long numPhraseResults;              //@synthesize numPhraseResults=_numPhraseResults - In the implementation block
@property (nonatomic,retain) NSArray * phraseScores;                           //@synthesize phraseScores=_phraseScores - In the implementation block
-(id)init;
-(void)setDetectorType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)detectorType;
-(unsigned long long)numPhraseResults;
-(NSArray *)phraseScores;
-(void)setNumPhraseResults:(unsigned long long)arg1 ;
-(void)setPhraseScores:(NSArray *)arg1 ;
@end

