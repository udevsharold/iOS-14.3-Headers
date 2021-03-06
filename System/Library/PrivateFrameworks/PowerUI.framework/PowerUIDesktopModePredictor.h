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

@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _loadModelLock;
	MLModel* _model;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _desktopEntryThreshold;
	NSString* _defaultsDomain;
	NSObject*<OS_os_log> _log;
	double _threshold;
	id<_DKKnowledgeQuerying> _store;
	id<_CDLocalContext> _context;
	PowerUITrialManager* _trialManager;

}

@property (nonatomic,retain) NSString * defaultsDomain;                       //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                  //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                           //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s loadModelLock;                  //@synthesize loadModelLock=_loadModelLock - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;              //@synthesize trialManager=_trialManager - In the implementation block
@property (nonatomic,retain,readonly) MLModel * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                             //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                       //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (assign,nonatomic) double desktopEntryThreshold;                    //@synthesize desktopEntryThreshold=_desktopEntryThreshold - In the implementation block
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_DKKnowledgeQuerying>)store;
-(NSObject*<OS_os_log>)log;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(PowerUITrialManager *)trialManager;
-(id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4 ;
-(double)threshold;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(NSDate *)pluginDate;
-(MLModel *)model;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(void)setPluginDate:(NSDate *)arg1 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)loadModelLock;
-(unsigned long long)modelVersion;
-(double)pluginBatteryLevel;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(id<_CDLocalContext>)context;
-(os_unfair_lock_s)lock;
-(void)setLoadModelLock:(os_unfair_lock_s)arg1 ;
-(NSString *)defaultsDomain;
-(double)desktopEntryThreshold;
-(void)setDesktopEntryThreshold:(double)arg1 ;
@end

