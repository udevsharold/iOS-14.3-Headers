/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(id)queryDescription;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(/*^block*/id)_mappingFunctionForDurationChartWithContext:(id)arg1 ;
-(/*^block*/id)_mappingFunctionForConsistencyChartWithContext:(id)arg1 ;
-(id)userInfoCreationBlock;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
@end
