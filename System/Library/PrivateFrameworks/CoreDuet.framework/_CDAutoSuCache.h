/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject {

	NSDictionary* _predictedSleep;
	NSDate* _predictedSleepValidityStartDate;
	NSDate* _predictedSleepValidityEndDate;

}

@property (retain) NSDictionary * predictedSleep;                         //@synthesize predictedSleep=_predictedSleep - In the implementation block
@property (retain) NSDate * predictedSleepValidityStartDate;              //@synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate - In the implementation block
@property (retain) NSDate * predictedSleepValidityEndDate;                //@synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate - In the implementation block
+(id)sharedCache;
-(void)setPredictedSleepValidityStartDate:(NSDate *)arg1 ;
-(void)clear;
-(void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3 ;
-(void)setPredictedSleep:(NSDictionary *)arg1 ;
-(void)setPredictedSleepValidityEndDate:(NSDate *)arg1 ;
-(NSDictionary *)predictedSleep;
-(NSDate *)predictedSleepValidityStartDate;
-(NSDate *)predictedSleepValidityEndDate;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg1 ;
@end

