/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ASDServiceBroker, NSObject;

@interface ASDUpdatesService : NSObject {

	ASDServiceBroker* _serviceBroker;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _hasUpdatesEntitlement;
	int _storeChangedNotificationToken;

}
+(id)interface;
+(id)registerBadgeCountNotificationBlock:(/*^block*/id)arg1 ;
+(id)defaultService;
+(id)badgeCount;
-(id)init;
-(void)dealloc;
-(void)setAutoUpdateEnabled:(BOOL)arg1 ;
-(BOOL)autoUpdateEnabled;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_failedJobResultsForBundleIDs:(id)arg1 ;
-(BOOL)confirmAgentRequestedUpdateAll;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadForSettingsFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateAllWithJobResultsCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(BOOL)hasEntitlement;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)showApplicationBadgeForPendingUpdates;
@end

