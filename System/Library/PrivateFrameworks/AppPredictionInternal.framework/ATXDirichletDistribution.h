/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXDirichletDistribution : NSObject {

	double kGlobalScoreMultiplier;
	double kBlendedScoreNormalizationConstant;

}
+(id)sharedInstance;
+(double)getGammaDistributionShapeParameterForComputingGlobalAppScoresWithAlpha:(double)arg1 andNormalizationConstant:(double)arg2 ;
-(id)init;
-(id)getBlendedLocalAndGlobalScoresWithLocalCounts:(id)arg1 andGlobalScores:(id)arg2 withSamplingEnabled:(BOOL)arg3 ;
-(id)sampleProbabilitiesFromDirichletWithNormalizedParameters:(id)arg1 andNormalizationConstant:(double)arg2 ;
@end

