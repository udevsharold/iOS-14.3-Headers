/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor {

	BOOL _isScreenLocked;

}
+(id)sharedInstance;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_stopMonitoring;
-(id)init;
-(void)dealloc;
-(BOOL)isScreenLocked;
-(void)_notifyObserver:(id)arg1 isScreenLocked:(BOOL)arg2 ;
-(BOOL)_queryIsScreenLocked;
-(void)screenLockStateChanged;
@end

