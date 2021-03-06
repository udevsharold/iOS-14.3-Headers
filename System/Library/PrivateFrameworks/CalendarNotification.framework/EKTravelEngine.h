/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CALNRouteHypothesizerProvider;
@class NSObject, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSDate, NSString;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _syncYieldTimer;
	BOOL _running;
	BOOL _needsRefresh;
	BOOL _databaseIsEncryptedAndUnreadable;
	BOOL _yieldingToSync;
	NSMutableDictionary* _eventExternalURLsToAgendaEntries;
	CLLocationManager* _locationManager;
	EKTimedEventStorePurger* _timedEventStorePurger;
	NSDate* _lastRefreshDate;
	BOOL _authorizedInternal;
	/*^block*/id _adviceBlock;
	/*^block*/id _authorizationChangedBlock;
	/*^block*/id _eventSignificantlyChangedBlock;
	id<CALNRouteHypothesizerProvider> _routeHypothesizerProvider;

}

@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;              //@synthesize routeHypothesizerProvider=_routeHypothesizerProvider - In the implementation block
@property (assign,nonatomic) BOOL authorizedInternal;                                                    //@synthesize authorizedInternal=_authorizedInternal - In the implementation block
@property (nonatomic,copy) id adviceBlock;                                                               //@synthesize adviceBlock=_adviceBlock - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,copy) id authorizationChangedBlock;                                                 //@synthesize authorizationChangedBlock=_authorizationChangedBlock - In the implementation block
@property (nonatomic,copy) id eventSignificantlyChangedBlock;                                            //@synthesize eventSignificantlyChangedBlock=_eventSignificantlyChangedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestedDarwinNotifications;
+(double)_periodicRefreshInterval;
+(id)travelEligibleEventsInEventStore:(id)arg1 ;
+(id)travelEligibleEvents:(id)arg1 fromStartDate:(id)arg2 untilEndDate:(id)arg3 ;
+(double)_travelAgendaTimeWindowInterval;
+(double)requestRefreshTimeInterval;
-(id)adviceBlock;
-(id)authorizationChangedBlock;
-(void)_uninstallSyncYieldTimer;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)_uninstallPeriodicRefreshTimer;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)_installLocationManager;
-(void)_refreshIfNeeded;
-(void)_uninstallLocationManager;
-(void)_calDatabaseChangedNotificationReceived;
-(void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)arg1 feedback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(BOOL)authorizedInternal;
-(void)_installSyncYieldTimer;
-(id)eventSignificantlyChangedBlock;
-(void)_significantTimeChangeNotificationReceived;
-(BOOL)authorized;
-(id)_eventStore;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(BOOL)_isProtectedDataAvailable;
-(void)_updateDatabaseEncryptionState;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
-(BOOL)isLocationManagerStatusAuthorized:(int)arg1 ;
-(id)alarmName;
-(void)_unregisterAllAgendaEntries;
-(void)start;
-(void)setAuthorizationChangedBlock:(id)arg1 ;
-(void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2 ;
-(void)_periodicRefreshTimerFired;
-(void)_stopInternal;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(void)_installPeriodicRefreshTimer;
-(void)setAuthorizedInternal:(BOOL)arg1 ;
-(id<CALNRouteHypothesizerProvider>)routeHypothesizerProvider;
-(void)_eventKitFeatureSetChanged;
-(void)setEventSignificantlyChangedBlock:(id)arg1 ;
-(void)_calSyncClientBeginningMultiSaveNotificationReceived;
-(void)stop;
-(void)_suggestEventLocationsSettingChanged;
-(BOOL)_authorizedToAcquireLocation;
-(void)_calSyncClientFinishedMultiSaveNotificationReceived;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)setAdviceBlock:(id)arg1 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
@end

