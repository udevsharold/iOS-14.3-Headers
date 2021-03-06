/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HKObserverSet, NSObject, HKMCAnalysisQuery, HKMCAnalysis, HKHealthStore;

@interface HKMCAnalysisProvider : NSObject {

	HKObserverSet* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	HKMCAnalysisQuery* _analysisQuery;
	HKMCAnalysis* _analysis;
	BOOL _didUpdate;
	HKHealthStore* _healthStore;
	HKMCAnalysis* __test_analysis;

}

@property (nonatomic,retain) HKMCAnalysis * _test_analysis;              //@synthesize _test_analysis=__test_analysis - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 initialAnalysisForTest:(id)arg2 ;
-(void)_startAnalysisQuery;
-(HKMCAnalysis *)_test_analysis;
-(void)_updateAnalysis:(id)arg1 ;
-(void)set_test_analysis:(HKMCAnalysis *)arg1 ;
@end

