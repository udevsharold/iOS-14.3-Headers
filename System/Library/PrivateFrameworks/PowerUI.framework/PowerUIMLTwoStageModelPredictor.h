/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDLocalContext;
@class MLModel, NSDate, NSString, NSObject, PowerUITrialManager;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _loadModelLock;
	MLModel* _engageModel;
	MLModel* _durationModel;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _lastEngagementResult;
	double _lastDurationResult;
	double _adjustedDuration;
	double _threshold;
	double _minInputChargeDuration;
	NSString* _defaultsDomain;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _statusLog;
	id<_DKKnowledgeQuerying> _store;
	id<_CDLocalContext> _context;
	PowerUITrialManager* _trialManager;
	NSDate* _deadline;

}

@property (nonatomic,retain) NSString * defaultsDomain;                       //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> statusLog;                  //@synthesize statusLog=_statusLog - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                  //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;              //@synthesize trialManager=_trialManager - In the implementation block
@property (nonatomic,retain) NSDate * deadline;                               //@synthesize deadline=_deadline - In the implementation block
@property (assign,nonatomic) double lastEngagementResult;                     //@synthesize lastEngagementResult=_lastEngagementResult - In the implementation block
@property (assign,nonatomic) double lastDurationResult;                       //@synthesize lastDurationResult=_lastDurationResult - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s loadModelLock;                  //@synthesize loadModelLock=_loadModelLock - In the implementation block
@property (nonatomic,retain,readonly) MLModel * engageModel;                  //@synthesize engageModel=_engageModel - In the implementation block
@property (nonatomic,retain,readonly) MLModel * durationModel;                //@synthesize durationModel=_durationModel - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                             //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                       //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (assign,nonatomic) double adjustedDuration;                         //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double minInputChargeDuration;                   //@synthesize minInputChargeDuration=_minInputChargeDuration - In the implementation block
-(NSObject*<OS_os_log>)statusLog;
-(MLModel *)engageModel;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_DKKnowledgeQuerying>)store;
-(void)setStatusLog:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)engagementModelBoltID;
-(PowerUITrialManager *)trialManager;
-(MLModel *)durationModel;
-(id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4 ;
-(void)setLastDurationResult:(double)arg1 ;
-(double)threshold;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(NSDate *)pluginDate;
-(double)adjustedDuration;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 forStatus:(BOOL)arg5 ;
-(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
-(id)durationModelBoltID;
-(void)setMinInputChargeDuration:(double)arg1 ;
-(double)lastDurationResult;
-(void)resetSavedDeadline;
-(void)setThreshold:(double)arg1 ;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(id)arrayWithShape:(id)arg1 values:(id)arg2 type:(long long)arg3 ;
-(double)loadThreshold;
-(void)setDeadline:(NSDate *)arg1 ;
-(void)setPluginDate:(NSDate *)arg1 ;
-(double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 withLog:(id)arg5 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(id)getMacRoutineModelInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(double)minInputChargeDuration;
-(id)timeStringFromDate:(id)arg1 ;
-(os_unfair_lock_s)loadModelLock;
-(unsigned long long)modelVersion;
-(NSDate *)deadline;
-(void)setLastEngagementResult:(double)arg1 ;
-(id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(void)deleteCompiledModels;
-(double)lastEngagementResult;
-(double)pluginBatteryLevel;
-(unsigned long long)engagementModelVersion;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(id<_CDLocalContext>)context;
-(void)setAdjustedDuration:(double)arg1 ;
-(double)loadAdjustedHours;
-(double)loadMinInputChargeDuration;
-(unsigned long long)durationModelVersion;
-(void)loadTrial;
-(void)setLoadModelLock:(os_unfair_lock_s)arg1 ;
-(NSString *)defaultsDomain;
@end

