/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSPSleepSessionManagerDelegate <NSObject>
@optional
-(void)sleepSessionManagerDidFinishSession:(id)arg1;
-(id)sleepSessionManager:(id)arg1 requestsProcessedSessionForSession:(id)arg2;
-(void)sleepSessionManager:(id)arg1 didSaveArchivedSessions:(id)arg2;

@required
-(void)sleepSessionManager:(id)arg1 didSaveSession:(id)arg2;

@end
