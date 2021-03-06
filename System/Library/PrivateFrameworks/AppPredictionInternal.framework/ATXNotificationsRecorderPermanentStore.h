/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>

@protocol OS_dispatch_source;
@class NSObject, ATXNotificationRecorder, ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate;

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase {

	NSObject*<OS_dispatch_source> _timer;
	ATXNotificationRecorder* _internalRecorder;
	ATXLockscreenTracker* _lockscreenTracker;
	ATXNotificationsDedupeTracker* _dedupeTracker;
	NSDate* _lastUpdate;

}

@property (retain) NSDate * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
-(void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3 ;
-(id)init;
-(BOOL)migrate;
-(void)resetNotificationsHistory;
-(long long)latestVersion;
-(void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(void)replay;
-(id)createCustomSchema;
-(void)replayWithCallback:(/*^block*/id)arg1 ;
-(void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4 ;
-(void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(id)getLockscreenBundleIds;
-(NSDate *)lastUpdate;
@end

