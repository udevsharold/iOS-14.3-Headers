/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWVideoQualityMetrics : NSObject {

	long long _totalLux;
	int _frames;

}

@property (nonatomic,readonly) unsigned qualityScoringVersion; 
+(void)initialize;
+(double)_luxThreshold;
+(double)_luxTransition;
+(id)filterMetadata:(id)arg1 ;
-(void)reset;
-(double)_computeLuxScore;
-(void)processMetadata:(id)arg1 ;
-(double)computeQualityScore;
-(unsigned)qualityScoringVersion;
@end

