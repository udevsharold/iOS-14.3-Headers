/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTravelEngineDelegate.h>
#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitorDelegate.h>
#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataSource.h>

@protocol CALNTriggeredEventNotificationDataSourceDelegate, EKEventStoreProvider, CALNRemoteMutator, CALNDataSourceEventRepresentationProvider, CALNTTLEventTracker, CALNAlarmEngineMonitor, CALNTravelEngine, CALNFoundInAppsEventTracker, CALNSuggestionsServiceLogger, CALNRouteHypothesizerProvider, CALNTimeToLeaveRefreshMonitor, CALNDebugPreferences;
@class CALNCalendarCoreLocationManager, CALNTriggeredEventNotificationMailtoURLProvider, NSString;

@interface CALNTriggeredEventNotificationEKDataSource : NSObject <CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource> {

	id<CALNTriggeredEventNotificationDataSourceDelegate> _delegate;
	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNRemoteMutator> _remoteMutator;
	id<CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;
	CALNCalendarCoreLocationManager* _coreLocationManager;
	id<CALNTTLEventTracker> _ttlEventTracker;
	id<CALNAlarmEngineMonitor> _alarmEngineMonitor;
	id<CALNTravelEngine> _travelEngine;
	id<CALNFoundInAppsEventTracker> _foundInAppsEventTracker;
	id<CALNSuggestionsServiceLogger> _suggestionsServiceLogger;
	id<CALNRouteHypothesizerProvider> _routeHypothesizerProvider;
	id<CALNTimeToLeaveRefreshMonitor> _timeToLeaveRefreshMonitor;
	id<CALNDebugPreferences> _debugPreferences;
	CALNTriggeredEventNotificationMailtoURLProvider* _mailtoURLProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                      //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNRemoteMutator> remoteMutator;                                                              //@synthesize remoteMutator=_remoteMutator - In the implementation block
@property (nonatomic,readonly) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;              //@synthesize dataSourceEventRepresentationProvider=_dataSourceEventRepresentationProvider - In the implementation block
@property (nonatomic,readonly) CALNCalendarCoreLocationManager * coreLocationManager;                                            //@synthesize coreLocationManager=_coreLocationManager - In the implementation block
@property (nonatomic,readonly) id<CALNTTLEventTracker> ttlEventTracker;                                                          //@synthesize ttlEventTracker=_ttlEventTracker - In the implementation block
@property (nonatomic,readonly) id<CALNAlarmEngineMonitor> alarmEngineMonitor;                                                    //@synthesize alarmEngineMonitor=_alarmEngineMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNTravelEngine> travelEngine;                                                                //@synthesize travelEngine=_travelEngine - In the implementation block
@property (nonatomic,readonly) id<CALNFoundInAppsEventTracker> foundInAppsEventTracker;                                          //@synthesize foundInAppsEventTracker=_foundInAppsEventTracker - In the implementation block
@property (nonatomic,readonly) id<CALNSuggestionsServiceLogger> suggestionsServiceLogger;                                        //@synthesize suggestionsServiceLogger=_suggestionsServiceLogger - In the implementation block
@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;                                      //@synthesize routeHypothesizerProvider=_routeHypothesizerProvider - In the implementation block
@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshMonitor> timeToLeaveRefreshMonitor;                                      //@synthesize timeToLeaveRefreshMonitor=_timeToLeaveRefreshMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNDebugPreferences> debugPreferences;                                                        //@synthesize debugPreferences=_debugPreferences - In the implementation block
@property (nonatomic,readonly) CALNTriggeredEventNotificationMailtoURLProvider * mailtoURLProvider;                              //@synthesize mailtoURLProvider=_mailtoURLProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CALNTriggeredEventNotificationDataSourceDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
+(id)_alarmForEvent:(id)arg1 withAlarmID:(id)arg2 ;
+(id)_alarmDateForAlarm:(id)arg1 eventStartDate:(id)arg2 ;
+(id)_sourceClientIdentifierForAlertInfo:(id)arg1 ;
+(double)snoozeInterval;
-(void)_handleNotificationActionForSourceClientIdentifier:(id)arg1 acknowledgeAlarm:(BOOL)arg2 eventActions:(/*^block*/id)arg3 ;
-(void)removeTimeToLeaveRefreshTimerForEventID:(id)arg1 ;
-(id<CALNRemoteMutator>)remoteMutator;
-(void)_alertFiredForAlertInfo:(id)arg1 ;
-(id<CALNTravelEngine>)travelEngine;
-(void)travelEngine:(id)arg1 receivedHypothesis:(id)arg2 eventExternalURL:(id)arg3 ;
-(void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg1 ;
-(void)snoozeEventWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationExpirationDateForNullableAlarmDate:(id)arg1 eventEndDate:(id)arg2 ;
-(BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)arg1 ;
-(id)notificationExpirationDateForEventID:(id)arg1 alarmID:(id)arg2 ;
-(BOOL)_shouldTriggerForAlertInfo:(id)arg1 ;
-(id<CALNAlarmEngineMonitor>)alarmEngineMonitor;
-(id<CALNTimeToLeaveRefreshMonitor>)timeToLeaveRefreshMonitor;
-(void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 ;
-(void)travelEngine:(id)arg1 eventSignificantlyChangedWithEventExternalURL:(id)arg2 ;
-(BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2 ;
-(void)ceaseRouteMonitoringEventWithEventID:(id)arg1 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 eventID:(id)arg2 ;
-(id<CALNSuggestionsServiceLogger>)suggestionsServiceLogger;
-(id<CALNDataSourceEventRepresentationProvider>)dataSourceEventRepresentationProvider;
-(void)timeToLeaveRefreshMonitor:(id)arg1 refreshTimerFiredForEventExternalURL:(id)arg2 ;
-(double)_requestHypothesisRefreshInterval;
-(CALNCalendarCoreLocationManager *)coreLocationManager;
-(BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(BOOL)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1 event:(id)arg2 alarmID:(id)arg3 ;
-(void)travelEngine:(id)arg1 authorizationChanged:(BOOL)arg2 ;
-(void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)arg1 triggerDate:(id)arg2 ;
-(void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1 ;
-(id)_filterDuplicateAlerts:(id)arg1 ;
-(void)acknowledgeEventWithSourceClientIdentifier:(id)arg1 shouldMarkAsHavingReceivedLocation:(BOOL)arg2 ;
-(void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)setDelegate:(id<CALNTriggeredEventNotificationDataSourceDelegate>)arg1 ;
-(void)_alertsFired:(id)arg1 ;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg1 isProtectedDataAvailable:(BOOL)arg2 ;
-(void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 ;
-(id<CALNRouteHypothesizerProvider>)routeHypothesizerProvider;
-(id)_notificationExpirationDateForAlarmDate:(id)arg1 eventEndDate:(id)arg2 ;
-(id)eventObjectIDForEventID:(id)arg1 ;
-(id<CALNTTLEventTracker>)ttlEventTracker;
-(id<CALNDebugPreferences>)debugPreferences;
-(CALNTriggeredEventNotificationMailtoURLProvider *)mailtoURLProvider;
-(id)_eventForSourceClientIdentifier:(id)arg1 ;
-(id<CALNTriggeredEventNotificationDataSourceDelegate>)delegate;
-(id)_eventForEventID:(id)arg1 ;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(id)initWithEventStoreProvider:(id)arg1 remoteMutator:(id)arg2 dataSourceEventRepresentationProvider:(id)arg3 coreLocationProvider:(id)arg4 ttlEventTracker:(id)arg5 alarmEngineMonitor:(id)arg6 travelEngine:(id)arg7 foundInAppsEventTracker:(id)arg8 suggestionsServiceLogger:(id)arg9 routeHypothesizerProvider:(id)arg10 timeToLeaveRefreshMonitor:(id)arg11 debugPreferences:(id)arg12 mailtoURLProvider:(id)arg13 ;
-(void)handleDirectionsActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 ;
-(id<CALNFoundInAppsEventTracker>)foundInAppsEventTracker;
@end

