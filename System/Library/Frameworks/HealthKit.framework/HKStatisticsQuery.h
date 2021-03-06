/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKStatisticsQueryClientInterface.h>

@class NSDateInterval, NSString;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface> {

	BOOL _requireQuantityType;
	/*^block*/id _completionHandler;
	unsigned long long _options;
	unsigned long long _mergeStrategy;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,readonly) id completionHandler;                                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                                                         //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (setter=_setDateInterval:,getter=_dateInterval,nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(Class)configurationClass;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_validate;
-(void)_setDateInterval:(id)arg1 ;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dateInterval;
-(id)completionHandler;
-(void)client_deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(id)_filterForDateInterval:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)mergeStrategy;
-(id)_filter;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

