/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureValidator.h>

@interface PGFeatureAggregationValidator : PGFeatureValidator {

	long long _featureExtractorType;

}

@property (nonatomic,readonly) long long featureExtractorType;              //@synthesize featureExtractorType=_featureExtractorType - In the implementation block
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureValidatorType;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureExtractorType:(long long)arg3 featureName:(id)arg4 ;
-(long long)isValidEntity:(id)arg1 graph:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4 ;
-(id)_composeFeatureExtractorWithGraph:(id)arg1 error:(id*)arg2 ;
-(long long)featureExtractorType;
@end

