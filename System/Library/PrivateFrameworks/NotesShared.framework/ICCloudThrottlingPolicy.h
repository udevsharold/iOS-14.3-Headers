/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSTimer, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject {

	NSArray* _throttlingLevels;
	double _resetInterval;
	unsigned long long _currentBatchCount;
	unsigned long long _currentLevelIndex;
	NSDate* _policyStartDate;
	NSTimer* _policyResetTimer;

}

@property (assign,nonatomic) unsigned long long currentBatchCount;                 //@synthesize currentBatchCount=_currentBatchCount - In the implementation block
@property (nonatomic,retain) NSArray * throttlingLevels;                           //@synthesize throttlingLevels=_throttlingLevels - In the implementation block
@property (assign,nonatomic) unsigned long long currentLevelIndex;                 //@synthesize currentLevelIndex=_currentLevelIndex - In the implementation block
@property (nonatomic,readonly) ICCloudThrottlingLevel * currentLevel; 
@property (assign) double resetInterval;                                           //@synthesize resetInterval=_resetInterval - In the implementation block
@property (retain) NSDate * policyStartDate;                                       //@synthesize policyStartDate=_policyStartDate - In the implementation block
@property (retain) NSTimer * policyResetTimer;                                     //@synthesize policyResetTimer=_policyResetTimer - In the implementation block
@property (nonatomic,readonly) double batchInterval; 
+(void)resetSavedPolicyState;
-(void)setCurrentLevelIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)setPolicyStartDate:(NSDate *)arg1 ;
-(void)loadSavedPolicyState;
-(void)resetPolicy;
-(void)dealloc;
-(id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2 ;
-(unsigned long long)currentLevelIndex;
-(void)startPolicyResetTimer;
-(unsigned long long)currentBatchCount;
-(NSTimer *)policyResetTimer;
-(void)setCurrentBatchCount:(unsigned long long)arg1 ;
-(NSDate *)policyStartDate;
-(void)incrementBatchCount;
-(void)changeLevelIfNecessary;
-(void)setResetInterval:(double)arg1 ;
-(void)setThrottlingLevels:(NSArray *)arg1 ;
-(ICCloudThrottlingLevel *)currentLevel;
-(double)batchInterval;
-(void)savePolicyState;
-(NSArray *)throttlingLevels;
-(void)setPolicyResetTimer:(NSTimer *)arg1 ;
-(double)resetInterval;
@end

