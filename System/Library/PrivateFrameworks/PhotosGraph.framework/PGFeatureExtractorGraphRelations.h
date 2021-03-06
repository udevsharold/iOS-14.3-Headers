/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@class PGGraph, MAFeatureExtractor;

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor {

	PGGraph* _graph;
	MAFeatureExtractor* _featureExtractor;

}

@property (nonatomic,readonly) PGGraph * graph;                                    //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) MAFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
-(PGGraph *)graph;
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
-(id)initWithGraph:(id)arg1 featureExtractor:(id)arg2 ;
-(id)floatVectorWithMoment:(id)arg1 error:(id*)arg2 ;
-(MAFeatureExtractor *)featureExtractor;
@end

