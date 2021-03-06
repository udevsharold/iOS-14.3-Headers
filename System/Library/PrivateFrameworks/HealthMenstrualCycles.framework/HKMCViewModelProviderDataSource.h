/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKMCViewModelProviderDataSourceDelegate, OS_dispatch_queue;
#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
@class HKHealthStore, NSObject, NSMutableSet, HKMCDaySummaryObserverQuery, HKMultiTypeSampleQuery, _HKDatabaseChangesQuery, NSMutableIndexSet, HKCalendarCache;

@interface HKMCViewModelProviderDataSource : NSObject {

	HKHealthStore* _healthStore;
	id<HKMCViewModelProviderDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _summaryQueries;
	HKMCDaySummaryObserverQuery* _summaryObserverQuery;
	HKMultiTypeSampleQuery* _factorQuery;
	_HKDatabaseChangesQuery* _factorObserverQuery;
	NSMutableIndexSet* _canceledDayIndexes;
	HKCalendarCache* _calendarCache;

}

@property (assign,nonatomic,__weak) id<HKMCViewModelProviderDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<HKMCViewModelProviderDataSourceDelegate>)arg1 ;
-(id<HKMCViewModelProviderDataSourceDelegate>)delegate;
-(void)_startObservingDaySummaryUpdates;
-(void)_startObservingCycleFactorsUpdates;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 calendarCache:(id)arg3 queue:(id)arg4 ;
-(void)fetchDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
-(void)cancelFetchForDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
-(void)fetchCycleFactorsInDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end

