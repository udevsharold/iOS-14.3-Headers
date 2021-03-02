/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, _PASLock;

@interface _ATXScoreInterpreterCoreMLModel : NSObject {

	NSString* _coreMLModelOutputName;
	NSArray* _coreMLInputFeatures;
	_PASLock* _lock;
	BOOL _hasOutputIndexedSubscript;

}

@property (nonatomic,readonly) BOOL hasOutputIndexedSubscript;                   //@synthesize hasOutputIndexedSubscript=_hasOutputIndexedSubscript - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatures; 
+(id)coreMLModelForCoreMLModelName:(id)arg1 ;
+(double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2 ;
-(id)init;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(id)initWithModelName:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3 ;
-(id)getArgumentsToEvaluateByInitializingInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2 ;
-(BOOL)hasOutputIndexedSubscript;
-(unsigned long long)numberOfFeatures;
-(double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2 ;
@end
