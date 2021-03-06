/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMSystemMonitorListener
@optional
-(void)systemDidWake;
-(void)systemDidBecomeUnidle;
-(void)systemDidBecomeIdle;
-(void)systemDidStartBackup;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)screenLocked;
-(void)systemDidEnterMemoryPressure;
-(void)screenUnlocked;
-(void)systemDidLock;
-(void)screenSaverDidStart;
-(void)screenSaverDidStop;
-(void)systemDidLeaveMemoryPressure;
-(void)systemWillShutdown;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemDidStopBackup;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)systemDidFinishMigration;
-(void)notificationCenterDidDisappear;
-(void)systemRestoreStateDidChange;
-(void)systemDidFastUserSwitchOut;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidLogout;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidResume;
-(void)systemDidUnlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemWillSleep;
-(void)systemApplicationDidSuspend;

@end

