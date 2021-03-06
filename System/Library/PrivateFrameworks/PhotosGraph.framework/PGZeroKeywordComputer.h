/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;

}

@property (readonly) PGGraph * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;              //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
+(id)zeroKeywordLog;
-(PGGraph *)graph;
-(id)eventZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(PGSearchComputationCache *)searchComputationCache;
-(id)contextualSeasonZeroKeywordsWithOptions:(id)arg1 ;
-(BOOL)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2 ;
-(id)contextualSceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(unsigned long long)arg2 ;
-(id)contextualPersonZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)peopleZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualLocationNodesWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_locationBasedContextualLocationNodeWithLocation:(id)arg1 date:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)locationZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2 ;
-(id)contextualHolidayZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSocialGroupZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_timeBasedContextualLocationNodeWithDate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1 ;
-(id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualDateZeroKeywordsWithOptions:(id)arg1 ;
-(id)sceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)socialGroupKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)tripRankedKeyword;
-(id)_tripZeroKeywordWithScore:(out double*)arg1 ;
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)tripZeroKeyword;
@end

