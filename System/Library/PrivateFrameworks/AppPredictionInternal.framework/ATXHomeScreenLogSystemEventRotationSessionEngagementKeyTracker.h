/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ATXHomeScreenLogSystemEventRotationSessionEngagementKeyTracker : NSObject {

	NSString* _statusAggregationKey;
	NSString* _proactiveStatusAggregationKey;
	NSString* _proactiveStatusBooleanKey;
	NSString* _userScrollStatusBooleanKey;
	NSString* _userScrollFinalOutcomeKey;

}

@property (nonatomic,readonly) NSString * statusAggregationKey;                       //@synthesize statusAggregationKey=_statusAggregationKey - In the implementation block
@property (nonatomic,readonly) NSString * proactiveStatusAggregationKey;              //@synthesize proactiveStatusAggregationKey=_proactiveStatusAggregationKey - In the implementation block
@property (nonatomic,readonly) NSString * proactiveStatusBooleanKey;                  //@synthesize proactiveStatusBooleanKey=_proactiveStatusBooleanKey - In the implementation block
@property (nonatomic,readonly) NSString * userScrollStatusBooleanKey;                 //@synthesize userScrollStatusBooleanKey=_userScrollStatusBooleanKey - In the implementation block
@property (nonatomic,readonly) NSString * userScrollFinalOutcomeKey;                  //@synthesize userScrollFinalOutcomeKey=_userScrollFinalOutcomeKey - In the implementation block
+(id)keyTrackerForRotationSessionStackEngagementStatus:(unsigned long long)arg1 ;
-(id)initWithStatusAggregationKey:(id)arg1 proactiveStatusAggregationKey:(id)arg2 proactiveStatusBooleanKey:(id)arg3 userScrollStatusBooleanKey:(id)arg4 userScrollFinalOutcomeKey:(id)arg5 ;
-(NSString *)statusAggregationKey;
-(NSString *)proactiveStatusAggregationKey;
-(NSString *)proactiveStatusBooleanKey;
-(NSString *)userScrollStatusBooleanKey;
-(NSString *)userScrollFinalOutcomeKey;
@end

