/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDate;

@interface CKFlowControl : NSObject {

	unsigned long long _budgetCap;
	double _regenerationPerSecond;
	unsigned long long _totalSamples;
	double _totalCost;
	double _budget;
	double _maximumThrottleTime;
	NSError* _lastReportableError;
	NSDate* _lastRegeneration;

}

@property (nonatomic,retain) NSError * lastReportableError;              //@synthesize lastReportableError=_lastReportableError - In the implementation block
@property (assign) double budget;                                        //@synthesize budget=_budget - In the implementation block
@property (retain) NSDate * lastRegeneration;                            //@synthesize lastRegeneration=_lastRegeneration - In the implementation block
@property (assign) unsigned long long budgetCap;                         //@synthesize budgetCap=_budgetCap - In the implementation block
@property (assign) double regenerationPerSecond;                         //@synthesize regenerationPerSecond=_regenerationPerSecond - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;                 //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
+(id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(double)budget;
-(void)setBudget:(double)arg1 ;
-(id)CKPropertiesDescription;
-(void)setBudgetCap:(unsigned long long)arg1 ;
-(void)regenerate;
-(NSError *)lastReportableError;
-(BOOL)attemptBudgetedExpenditureWithCost:(double)arg1 ;
-(void)setLastRegeneration:(NSDate *)arg1 ;
-(double)maximumThrottleTime;
-(id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(id)description;
-(BOOL)isLimited;
-(double)secondsUntilBudgetLimitationRemoved;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(void)expendWithCost:(double)arg1 reportableError:(id)arg2 ;
-(double)_secondsUntilBudgetLimitationRemovedNoRegen;
-(void)setLastReportableError:(NSError *)arg1 ;
-(NSDate *)lastRegeneration;
-(void)setRegenerationPerSecond:(double)arg1 ;
-(unsigned long long)budgetCap;
-(double)regenerationPerSecond;
@end
