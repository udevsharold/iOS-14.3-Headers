/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ATXScreenRepresentation, NSMutableDictionary, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, ATXNotificationsLogger, NSMutableString;

@interface ATXNotificationRecorder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	ATXScreenRepresentation* _onLockScreen;
	ATXScreenRepresentation* _offScreen;
	NSMutableDictionary* _recordsTable;
	NSMutableDictionary* _relatedApps;
	_ATXAppLaunchCategoricalHistogram* _notificationsHistory;
	_ATXAppLaunchHistogram* _appHistory;
	ATXNotificationsLogger* _logger;
	NSMutableString* _logCache;

}
-(void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3 ;
-(id)init;
-(void)resetNotificationsHistory;
-(void)logRecordInAggd:(id)arg1 ;
-(void)reset;
-(id)flushLogCache;
-(void)expungeExpiredRecordsWithCacheOption:(BOOL)arg1 ;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 enableLogCache:(BOOL)arg4 ;
-(void)clearAllAtTimestamp:(id)arg1 ;
-(id)flushRecords;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)_appendRecordToCache:(id)arg1 ;
-(void)getPositionForId:(id)arg1 position:(unsigned long long*)arg2 onlockscreen:(BOOL*)arg3 ;
-(void)expungeExpiredRecords;
-(void)_addNotificationsRecord:(id)arg1 ;
@end

