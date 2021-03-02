/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKCPUUsageMonitor : _DKMonitor {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _lastUserTick;
	unsigned long long _lastIdleTick;
	unsigned long long _lastSysTick;
	unsigned long long _lastCPUUsageLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long lastUserTick;                   //@synthesize lastUserTick=_lastUserTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastIdleTick;                   //@synthesize lastIdleTick=_lastIdleTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastSysTick;                    //@synthesize lastSysTick=_lastSysTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastCPUUsageLevel;              //@synthesize lastCPUUsageLevel=_lastCPUUsageLevel - In the implementation block
+(id)eventStream;
+(id)entitlements;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)saveState;
-(unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1 ;
-(id)loadState;
-(void)setLastIdleTick:(unsigned long long)arg1 ;
-(unsigned long long)lastIdleTick;
-(void)synchronouslyReflectCurrentValue;
-(void)setLastCPUUsageLevel:(unsigned long long)arg1 ;
-(unsigned long long)getCurrentCPUUsageLevel;
-(void)setLastSysTick:(unsigned long long)arg1 ;
-(void)setCurrentCPUUsageLevel:(unsigned long long)arg1 ;
-(void)getCPUTicksForUser:(unsigned long long*)arg1 system:(unsigned long long*)arg2 idle:(unsigned long long*)arg3 ;
-(void)start;
-(unsigned long long)lastSysTick;
-(BOOL)updateCPUUsagePercentage:(unsigned long long*)arg1 ;
-(unsigned long long)lastCPUUsageLevel;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setLastUserTick:(unsigned long long)arg1 ;
-(void)stop;
-(unsigned long long)lastUserTick;
@end
