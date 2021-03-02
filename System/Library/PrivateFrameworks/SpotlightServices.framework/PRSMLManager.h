/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRSCoreDuet, NSMutableDictionary, NSArray;

@interface PRSMLManager : NSObject {

	PRSCoreDuet* _coreDuet;
	NSMutableDictionary* _mapPredictionEnginesToClasses;
	NSMutableDictionary* _mapPredictionEnginesToCounts;
	NSMutableDictionary* _mapPredictionEnginesToCountFiles;
	NSMutableDictionary* _mapPredictionEnginesToPredictedTopHit;
	NSMutableDictionary* _dictCoreDuetInfo;
	NSArray* _categoryList;
	NSMutableDictionary* _combinedTopScoreOrder;
	NSMutableDictionary* _combinedBottomScoreOrder;

}

@property (retain) PRSCoreDuet * coreDuet;                                                   //@synthesize coreDuet=_coreDuet - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToClasses;                      //@synthesize mapPredictionEnginesToClasses=_mapPredictionEnginesToClasses - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCounts;                       //@synthesize mapPredictionEnginesToCounts=_mapPredictionEnginesToCounts - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCountFiles;                   //@synthesize mapPredictionEnginesToCountFiles=_mapPredictionEnginesToCountFiles - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToPredictedTopHit;              //@synthesize mapPredictionEnginesToPredictedTopHit=_mapPredictionEnginesToPredictedTopHit - In the implementation block
@property (retain) NSMutableDictionary * dictCoreDuetInfo;                                   //@synthesize dictCoreDuetInfo=_dictCoreDuetInfo - In the implementation block
@property (retain) NSArray * categoryList;                                                   //@synthesize categoryList=_categoryList - In the implementation block
@property (retain) NSMutableDictionary * combinedTopScoreOrder;                              //@synthesize combinedTopScoreOrder=_combinedTopScoreOrder - In the implementation block
@property (retain) NSMutableDictionary * combinedBottomScoreOrder;                           //@synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder - In the implementation block
+(id)createPathToSpotlightPrefFile;
+(id)getSPMLSharedInstance;
-(NSMutableDictionary *)mapPredictionEnginesToCounts;
-(NSMutableDictionary *)combinedTopScoreOrder;
-(id)getLastSavedCategoryRankings;
-(NSMutableDictionary *)mapPredictionEnginesToCountFiles;
-(void)saveLastRankingForCategories:(id)arg1 ;
-(void)setMapPredictionEnginesToCounts:(NSMutableDictionary *)arg1 ;
-(unsigned long long)getCountForCategory:(id)arg1 ;
-(NSMutableDictionary *)dictCoreDuetInfo;
-(id)initManager;
-(PRSCoreDuet *)coreDuet;
-(unsigned long long)getTotalResultsUsedCountForDuet;
-(NSArray *)categoryList;
-(NSMutableDictionary *)mapPredictionEnginesToPredictedTopHit;
-(void)setCoreDuet:(PRSCoreDuet *)arg1 ;
-(void)setDictCoreDuetInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapPredictionEnginesToClasses;
-(NSMutableDictionary *)combinedBottomScoreOrder;
-(void)setCategoryList:(NSArray *)arg1 ;
-(void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2 ;
-(void)setCombinedBottomScoreOrder:(NSMutableDictionary *)arg1 ;
-(void)setCombinedTopScoreOrder:(NSMutableDictionary *)arg1 ;
-(void)setMapPredictionEnginesToCountFiles:(NSMutableDictionary *)arg1 ;
-(void)dumpPredictionStatsToFlatFiles;
-(void)setMapPredictionEnginesToPredictedTopHit:(NSMutableDictionary *)arg1 ;
-(id)getRankedCategoriesAsDictionaryForDays:(long long)arg1 ;
-(void)setMapPredictionEnginesToClasses:(NSMutableDictionary *)arg1 ;
@end
