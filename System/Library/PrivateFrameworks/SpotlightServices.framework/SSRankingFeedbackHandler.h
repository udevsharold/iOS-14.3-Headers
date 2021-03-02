/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface SSRankingFeedbackHandler : NSObject {

	NSMutableDictionary* _mapProtectionClassToBundleIdToItem;
	NSMutableArray* _sectionCSItems;
	NSObject*<OS_dispatch_queue> _countQueue;

}

@property (retain) NSMutableDictionary * mapProtectionClassToBundleIdToItem;              //@synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem - In the implementation block
@property (retain) NSMutableArray * sectionCSItems;                                       //@synthesize sectionCSItems=_sectionCSItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> countQueue;                               //@synthesize countQueue=_countQueue - In the implementation block
+(id)sharedInstance;
+(id)copyRenderEngagementCounts;
-(void)fetchBundleRenderAndEngagementInfo:(id)arg1 ;
-(NSMutableDictionary *)mapProtectionClassToBundleIdToItem;
-(id)init;
-(void)testCountsUptoYear;
-(void)testCountsUptoOneDay;
-(void)testCountsMovingYearInPast;
-(NSMutableArray *)sectionCSItems;
-(void)setSectionCSItems:(NSMutableArray *)arg1 ;
-(void)stressTestCounts;
-(void)testCountsUptoQuarter;
-(void)testCountsAfterYear;
-(void)testCountsUptoWeek;
-(void)testCountsMovingDaysInPast;
-(id)getSyntheticTestRankingItemsForStressTest;
-(void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4 ;
-(void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3 ;
-(id)getSyntheticTestRankingItem;
-(void)fetchBundleRenderAndEngagementInfo;
-(void)setCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)testForDurationWithIntervals:(int*)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4 ;
-(void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3 ;
-(void)testCountsMovingCoupleOfYearsInPast;
-(id)fetchResults;
-(void)testCountsAfterCoupleYears;
-(void)writeRenderAndEngagementInfo;
-(NSObject*<OS_dispatch_queue>)countQueue;
-(void)testCountsForRegularEngagement;
-(void)testCountsUptoHalfYear;
-(void)resetResultWithRankingItems:(id)arg1 ;
-(void)setMapProtectionClassToBundleIdToItem:(NSMutableDictionary *)arg1 ;
-(void)testForDummyEntry;
-(void)testCountsUptoMonth;
@end
