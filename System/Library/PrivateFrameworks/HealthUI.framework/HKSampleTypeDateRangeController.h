/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, _HKDateRangeQuery, NSHashTable, NSString, NSDictionary;

@interface HKSampleTypeDateRangeController : NSObject {

	HKHealthStore* _healthStore;
	_HKDateRangeQuery* _dateRangeQuery;
	NSHashTable* _observers;
	BOOL _applicationIsInForeground;
	BOOL _lastQuerySufferedError;
	NSString* _name;
	NSDictionary* _dateRangesBySampleType;

}

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * dateRangesBySampleType;              //@synthesize dateRangesBySampleType=_dateRangesBySampleType - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)_beginUpdates;
-(NSString *)name;
-(void)_applicationMovingToForeground:(id)arg1 ;
-(void)_applicationMovingToBackground:(id)arg1 ;
-(void)_alertObserverDidUpdateDateRanges:(id)arg1 ;
-(void)_resultsDidUpdate:(id)arg1 ;
-(void)_updateHandlerDidReceiveError:(id)arg1 ;
-(void)_alertObserversDidUpdateDateRanges;
-(id)dateRangeForSampleType:(id)arg1 ;
-(NSDictionary *)dateRangesBySampleType;
@end
