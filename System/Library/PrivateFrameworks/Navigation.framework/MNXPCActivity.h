/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MNXPCActivity : NSObject {

	/*^block*/id _codeBlock;
	BOOL _repeat;
	BOOL _shouldWakeDevice;
	BOOL _useCoreDuetPowerBudgeting;
	BOOL _runOnBattery;
	NSString* _identifier;
	double _tolerance;
	unsigned long long _qualityOfService;
	unsigned long long _networkRequirements;
	NSDate* _scheduledDate;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL repeat;                                         //@synthesize repeat=_repeat - In the implementation block
@property (nonatomic,readonly) BOOL shouldWakeDevice;                               //@synthesize shouldWakeDevice=_shouldWakeDevice - In the implementation block
@property (nonatomic,readonly) BOOL useCoreDuetPowerBudgeting;                      //@synthesize useCoreDuetPowerBudgeting=_useCoreDuetPowerBudgeting - In the implementation block
@property (nonatomic,readonly) BOOL runOnBattery;                                   //@synthesize runOnBattery=_runOnBattery - In the implementation block
@property (nonatomic,readonly) double tolerance;                                    //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,readonly) unsigned long long qualityOfService;                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequirements;              //@synthesize networkRequirements=_networkRequirements - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledDate;                              //@synthesize scheduledDate=_scheduledDate - In the implementation block
+(void)checkInActivity:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(double)tolerance;
-(id)init;
-(double)remainingTime;
-(NSDate *)scheduledDate;
-(BOOL)repeat;
-(NSString *)identifier;
-(id)description;
-(unsigned long long)qualityOfService;
-(id)debugDescription;
-(void)invalidate;
-(void)scheduleForDate:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 repeat:(BOOL)arg2 shouldWakeDevice:(BOOL)arg3 useCoreDuetPowerBudgeting:(BOOL)arg4 runOnBattery:(BOOL)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8 ;
-(BOOL)_needsNetworkRequirement:(unsigned long long)arg1 ;
-(BOOL)shouldWakeDevice;
-(BOOL)useCoreDuetPowerBudgeting;
-(BOOL)runOnBattery;
-(unsigned long long)networkRequirements;
@end
