/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ADVector, APOdmlUnfairLock, NSMutableDictionary, APOdmlXpcLifecycleHandler, NSArray;

@interface ADAppUsageVectorManager : NSObject {

	BOOL _weightByDuration;
	NSString* _version;
	ADVector* _appUsageVector;
	double _vectorWeightTotal;
	APOdmlUnfairLock* _setVectorAndWeightLock;
	NSMutableDictionary* _adamIDtoBundleID;
	APOdmlXpcLifecycleHandler* _task;
	double _lookbackPeriod;
	long long _maxQueryElements;
	double _exponentialDecayConstant;
	NSArray* _appUsageEvents;

}

@property (nonatomic,retain) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) ADVector * appUsageVector;                              //@synthesize appUsageVector=_appUsageVector - In the implementation block
@property (assign,nonatomic) double vectorWeightTotal;                               //@synthesize vectorWeightTotal=_vectorWeightTotal - In the implementation block
@property (nonatomic,retain) APOdmlUnfairLock * setVectorAndWeightLock;              //@synthesize setVectorAndWeightLock=_setVectorAndWeightLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adamIDtoBundleID;                 //@synthesize adamIDtoBundleID=_adamIDtoBundleID - In the implementation block
@property (nonatomic,retain) APOdmlXpcLifecycleHandler * task;                       //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) double lookbackPeriod;                                  //@synthesize lookbackPeriod=_lookbackPeriod - In the implementation block
@property (assign,nonatomic) long long maxQueryElements;                             //@synthesize maxQueryElements=_maxQueryElements - In the implementation block
@property (assign,nonatomic) double exponentialDecayConstant;                        //@synthesize exponentialDecayConstant=_exponentialDecayConstant - In the implementation block
@property (assign,nonatomic) BOOL weightByDuration;                                  //@synthesize weightByDuration=_weightByDuration - In the implementation block
@property (nonatomic,retain) NSArray * appUsageEvents;                               //@synthesize appUsageEvents=_appUsageEvents - In the implementation block
-(void)setTask:(APOdmlXpcLifecycleHandler *)arg1 ;
-(NSString *)version;
-(APOdmlXpcLifecycleHandler *)task;
-(void)setVersion:(NSString *)arg1 ;
-(id)initWithVersion:(id)arg1 lookbackPeriod:(id)arg2 maxQueryElements:(id)arg3 task:(id)arg4 exponentialDecayConstant:(id)arg5 weightByDuration:(id)arg6 ;
-(void)updateUsageVectorsWithAppVector:(id)arg1 ;
-(id)normalizedAppUsageVector;
-(id)pullUsageEvents;
-(id)bundleIdForAdamId:(id)arg1 ;
-(NSArray *)appUsageEvents;
-(double)weightForEvents:(id)arg1 ;
-(ADVector *)appUsageVector;
-(id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(double)arg3 ;
-(APOdmlUnfairLock *)setVectorAndWeightLock;
-(void)setAppUsageVector:(ADVector *)arg1 ;
-(double)vectorWeightTotal;
-(void)setVectorWeightTotal:(double)arg1 ;
-(double)lookbackPeriod;
-(id)appUsageEventsForLookbackPeriod:(double)arg1 ;
-(void)buildBundleIDtoAdamIDCache:(id)arg1 ;
-(BOOL)weightByDuration;
-(double)exponentialDecayConstant;
-(long long)maxQueryElements;
-(id)appUsageEventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3 ;
-(id)adamIDForBundleID:(id)arg1 ;
-(NSMutableDictionary *)adamIDtoBundleID;
-(void)setSetVectorAndWeightLock:(APOdmlUnfairLock *)arg1 ;
-(void)setAdamIDtoBundleID:(NSMutableDictionary *)arg1 ;
-(void)setLookbackPeriod:(double)arg1 ;
-(void)setMaxQueryElements:(long long)arg1 ;
-(void)setExponentialDecayConstant:(double)arg1 ;
-(void)setWeightByDuration:(BOOL)arg1 ;
-(void)setAppUsageEvents:(NSArray *)arg1 ;
@end
