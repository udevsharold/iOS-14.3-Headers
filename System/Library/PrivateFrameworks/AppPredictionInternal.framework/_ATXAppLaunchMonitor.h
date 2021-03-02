/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;
@class NSObject, _PASQueueLock, _PASLock, PETScalarEventTracker, NSUserDefaults, ATXAppClipUsageDuetContextUpdateListener, _ATXAppIconState;

@interface _ATXAppLaunchMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _appLaunchHistoryQueue;
	NSObject*<OS_dispatch_queue> _logQueue;
	_PASQueueLock* _history;
	_PASLock* _cdContext;
	PETScalarEventTracker* _updateLaunchHistoryTracker;
	NSUserDefaults* _userDefaults;
	ATXAppClipUsageDuetContextUpdateListener* _appClipChangeListener;
	id<ATXPETEventTracker2Protocol> _tracker;
	_ATXAppIconState* _appIconState;

}
+(int)petClipCaptureTypeFromDuetClipLaunchReason:(int)arg1 ;
+(void)_logAppLaunch:(id)arg1 from:(unsigned long long)arg2 ;
+(void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(/*^block*/id)arg3 ;
+(void)_logPredictionForBundleId:(id)arg1 poweringAppClipBundleId:(id)arg2 urlHash:(id)arg3 isClip:(BOOL)arg4 appLaunchReason:(id)arg5 appClipLaunchReason:(int)arg6 consumerType:(unsigned long long)arg7 consumerSubType:(unsigned char)arg8 context:(id)arg9 ;
-(void)clearHistory;
-(void)_syncForTests;
-(id)init;
-(void)_logAppPanelCaptureRateForBundleId:(id)arg1 ;
-(void)_logAppLaunchOverallCaptureRateForBundleId:(id)arg1 launchReason:(id)arg2 ;
-(void)handleBacklightChangeNotificationWithValue:(int)arg1 date:(id)arg2 ;
-(void)processDonationsForPreviousAppSessionEndIfNeeded;
-(id)stopDeltaRecording;
-(void)dealloc;
-(BOOL)isValidAppLaunchBundleId:(id)arg1 ;
-(void)registerForAppClipLaunch;
-(id)dailyDose;
-(id)appInfoManager;
-(void)_addLaunchWithLockWitness:(id)arg1 bundleId:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reason:(id)arg5 context:(id)arg6 ;
-(void)logAppLaunchForBundleId:(id)arg1 launchReason:(id)arg2 ;
-(void)_updateAppIconStateForTests:(id)arg1 ;
-(void)_logAppPanelLaunchRatioForBundleId:(id)arg1 launchReason:(id)arg2 ;
-(id)appLaunchSequenceManager;
-(void)swapDuetHelper:(id)arg1 ;
-(void)clearIntentHistogramHistory;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;
-(id)initWithInMemoryStore;
-(void)updateLaunchHistoryFromDuet:(double)arg1 callback:(/*^block*/id)arg2 ;
-(void)start;
-(void)registerForAppChange;
-(void)registerForBacklightChange;
-(void)startDeltaRecording;
-(id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 contextBuilder:(id)arg6 tracker:(id)arg7 ;
-(id)appIconState;
-(void)handleAppOrClipLaunchNotificationForBundleId:(id)arg1 poweringAppClipBundleId:(id)arg2 urlHash:(id)arg3 isClip:(BOOL)arg4 appLaunchReason:(id)arg5 appClipLaunchReason:(int)arg6 date:(id)arg7 ;
-(void)stop;
-(id)appLaunchHistogramManager;
@end
