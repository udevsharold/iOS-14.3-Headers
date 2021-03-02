/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _curatedAssetCountByMomentUUID;

}

@property (nonatomic,retain) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * curatedAssetCountByMomentUUID;              //@synthesize curatedAssetCountByMomentUUID=_curatedAssetCountByMomentUUID - In the implementation block
+(void)initialize;
+(BOOL)isEnabled;
+(void)restoreDefaultEnablement;
+(unsigned long long)maximumNumberOfAssetsPerMoment;
+(unsigned long long)maximumNumberOfDaysPerAggregation;
+(void)setEnabled:(BOOL)arg1 ;
+(unsigned long long)maximumNumberOfAssetsPerAggregation;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2 ;
-(BOOL)_shouldAggregateMoment:(id)arg1 ;
-(id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_aggregationMomentClustersForMomentClusters:(id)arg1 ;
-(NSMutableDictionary *)curatedAssetCountByMomentUUID;
-(void)setCuratedAssetCountByMomentUUID:(NSMutableDictionary *)arg1 ;
@end
