/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorDelegate.h>

@class HMFUnfairLock, HMFTimer, NSPointerArray, HMISystemResourceUsageMonitor, NSString;

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {

	HMFUnfairLock* _lock;
	HMFTimer* _tick;
	NSPointerArray* _internalAnalyzers;
	HMISystemResourceUsageMonitor* _usageMonitor;
	long long _usageLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(void)timerDidFire:(id)arg1 ;
-(void)systemResourceUsageDidChangeTo:(long long)arg1 ;
-(void)_compactInternalAnalyzers;
-(void)registerAnalyzer:(id)arg1 ;
-(id)_getAnalyzers;
-(void)_updateAnalyzer:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)_logState;
@end

