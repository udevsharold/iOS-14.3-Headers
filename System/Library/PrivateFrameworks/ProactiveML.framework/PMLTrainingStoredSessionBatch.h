/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PMLSparseMatrix, PMLModelRegressor;

@interface PMLTrainingStoredSessionBatch : NSObject {

	PMLSparseMatrix* _covariates;
	PMLModelRegressor* _outcomes;
	unsigned long long _count;

}

@property (nonatomic,readonly) PMLSparseMatrix * covariates;              //@synthesize covariates=_covariates - In the implementation block
@property (nonatomic,readonly) PMLModelRegressor * outcomes;              //@synthesize outcomes=_outcomes - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(PMLModelRegressor *)outcomes;
-(unsigned long long)count;
-(id)minibatchStats;
-(PMLSparseMatrix *)covariates;
-(id)initWithCovariates:(id)arg1 outcomes:(id)arg2 ;
-(id)minibatchStatsForPositiveLabel:(unsigned long long)arg1 ;
-(id)minibatchStatsForPositiveLabels:(id)arg1 ;
@end

