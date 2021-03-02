/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(void)addScore:(float)arg1 ;
-(void)setMaxScore:(float)arg1 ;
-(float)minScore;
-(float)computeAverage;
-(float)computeStandardDeviation;
-(void)setMinScore:(float)arg1 ;
-(void)setNumScores:(int)arg1 ;
-(float)maxScore;
-(id)initWithScore:(float)arg1 ;
-(int)numScores;
@end
