/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject {

	HKHealthStore* _healthStore;

}
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchMostRecentWeeklyGoalWithCompletion:(/*^block*/id)arg1 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 ;
-(void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveNewWeeklyGoals:(id)arg1 ;
@end

