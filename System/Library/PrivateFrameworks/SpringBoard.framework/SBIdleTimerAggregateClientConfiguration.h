/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBIdleTimerTimeoutRange, SBIdleTimerConfigurationDisablesTimerSetting, SBIdleTimerTimeoutPrecedenceSettings, NSString;

@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding> {

	SBIdleTimerTimeoutRange* _resolvedExpirationTimeoutRange;
	SBIdleTimerConfigurationDisablesTimerSetting* _disableTimerSetting;
	SBIdleTimerTimeoutPrecedenceSettings* _minExpirationTimeoutSettings;
	SBIdleTimerTimeoutPrecedenceSettings* _maxExpirationTimeoutSettings;

}

@property (nonatomic,readonly) SBIdleTimerConfigurationDisablesTimerSetting * disableTimerSetting;               //@synthesize disableTimerSetting=_disableTimerSetting - In the implementation block
@property (nonatomic,readonly) SBIdleTimerTimeoutPrecedenceSettings * minExpirationTimeoutSettings;              //@synthesize minExpirationTimeoutSettings=_minExpirationTimeoutSettings - In the implementation block
@property (nonatomic,readonly) SBIdleTimerTimeoutPrecedenceSettings * maxExpirationTimeoutSettings;              //@synthesize maxExpirationTimeoutSettings=_maxExpirationTimeoutSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resolvedExpirationTimeoutRange;
-(void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2 ;
-(SBIdleTimerTimeoutPrecedenceSettings *)maxExpirationTimeoutSettings;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2 ;
-(void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(void)setDisablesTimerWithPrecedence:(unsigned long long)arg1 ;
-(SBIdleTimerTimeoutPrecedenceSettings *)minExpirationTimeoutSettings;
-(SBIdleTimerConfigurationDisablesTimerSetting *)disableTimerSetting;
@end
