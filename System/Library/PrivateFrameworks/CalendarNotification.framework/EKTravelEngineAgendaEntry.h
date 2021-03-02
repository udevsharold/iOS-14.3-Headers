/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;
@class NSObject, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, CalGeocoder, EKTravelEngineHypothesis, CLLocation, NSData, NSString;

@interface EKTravelEngineAgendaEntry : NSObject {

	BOOL _dismissed;
	BOOL _geocodedEventEncountered;
	BOOL _hypothesizerSentAtLeastOneHypothesis;
	/*^block*/id _updateBlock;
	/*^block*/id _entrySignificantlyChangedBlock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	EKTravelEngineOriginalEvent* _originalEventInternal;
	EKTravelEngineThrottle* _throttle;
	CalGeocoder* _geocoder;
	id<CALNRouteHypothesizerProvider> _hypothesizerProvider;
	id<CALNRouteHypothesizer> _hypothesizer;
	EKTravelEngineHypothesis* _latestHypothesis;
	CLLocation* _geoLocation;
	NSData* _mapKitHandle;
	long long _travelTimeThresholdExceededState;
	double _maximumTravelDurationEncountered;
	NSString* _agendaEntryIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                            //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) EKTravelEngineOriginalEvent * originalEventInternal;                   //@synthesize originalEventInternal=_originalEventInternal - In the implementation block
@property (nonatomic,retain) EKTravelEngineThrottle * throttle;                                     //@synthesize throttle=_throttle - In the implementation block
@property (nonatomic,retain) CalGeocoder * geocoder;                                                //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,readonly) id<CALNRouteHypothesizerProvider> hypothesizerProvider;              //@synthesize hypothesizerProvider=_hypothesizerProvider - In the implementation block
@property (nonatomic,retain) id<CALNRouteHypothesizer> hypothesizer;                                //@synthesize hypothesizer=_hypothesizer - In the implementation block
@property (nonatomic,retain) EKTravelEngineHypothesis * latestHypothesis;                           //@synthesize latestHypothesis=_latestHypothesis - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                                              //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * mapKitHandle;                                                 //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL geocodedEventEncountered;                                         //@synthesize geocodedEventEncountered=_geocodedEventEncountered - In the implementation block
@property (assign,nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;                             //@synthesize hypothesizerSentAtLeastOneHypothesis=_hypothesizerSentAtLeastOneHypothesis - In the implementation block
@property (assign,nonatomic) long long travelTimeThresholdExceededState;                            //@synthesize travelTimeThresholdExceededState=_travelTimeThresholdExceededState - In the implementation block
@property (assign,nonatomic) double maximumTravelDurationEncountered;                               //@synthesize maximumTravelDurationEncountered=_maximumTravelDurationEncountered - In the implementation block
@property (nonatomic,retain) NSString * agendaEntryIdentifier;                                      //@synthesize agendaEntryIdentifier=_agendaEntryIdentifier - In the implementation block
@property (nonatomic,readonly) EKTravelEngineOriginalEvent * originalEvent; 
@property (nonatomic,copy) id updateBlock;                                                          //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id entrySignificantlyChangedBlock;                                       //@synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock - In the implementation block
@property (assign,nonatomic) BOOL dismissed;                                                        //@synthesize dismissed=_dismissed - In the implementation block
+(double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
-(EKTravelEngineOriginalEvent *)originalEvent;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)setHypothesizerSentAtLeastOneHypothesis:(BOOL)arg1 ;
-(void)setAgendaEntryIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(long long)travelTimeThresholdExceededState;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTravelTimeThresholdExceededState:(long long)arg1 ;
-(void)setMaximumTravelDurationEncountered:(double)arg1 ;
-(void)setGeocoder:(CalGeocoder *)arg1 ;
-(id)_createSyntheticHypothesis;
-(CLLocation *)geoLocation;
-(void)reset;
-(BOOL)hypothesizerSentAtLeastOneHypothesis;
-(void)dealloc;
-(void)_uninstallRequestHypothesisRefreshTimer;
-(void)_clearEverything;
-(void)cancelEmissionHypothesisRefresh;
-(id)emissionHypothesisRefreshAlarmName;
-(EKTravelEngineThrottle *)throttle;
-(EKTravelEngineHypothesis *)latestHypothesis;
-(id<CALNRouteHypothesizerProvider>)hypothesizerProvider;
-(void)_hypothesisRefreshTimerFired;
-(void)setDismissed:(BOOL)arg1 ;
-(void)setHypothesizer:(id<CALNRouteHypothesizer>)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotification;
-(NSString *)agendaEntryIdentifier;
-(void)_uninstallEmissionHypothesisRefreshTimer;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(void)setThrottle:(EKTravelEngineThrottle *)arg1 ;
-(NSData *)mapKitHandle;
-(id)initWithRouteHypothesizerProvider:(id)arg1 ;
-(void)_setUpRouteMonitoring;
-(id)requestHypothesisRefreshAlarmName;
-(void)removeAlarmWithName:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 ;
-(void)_requestHypothesisRefreshTimerFired;
-(void)setOriginalEventInternal:(EKTravelEngineOriginalEvent *)arg1 ;
-(void)_trackTTLCandidateEvent:(id)arg1 ;
-(void)_updateWithHypothesis:(id)arg1 ;
-(double)maximumTravelDurationEncountered;
-(id)_generateDestination;
-(void)cancelHypothesisRefreshRequest;
-(void)_createHypothesisRequestRefreshTimerWithDate:(id)arg1 ;
-(void)_accountForGeocodedEventEncounter;
-(void)createAlarmWithName:(id)arg1 atDate:(id)arg2 ;
-(CalGeocoder *)geocoder;
-(void)_enhanceLocation;
-(void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)arg1 ;
-(EKTravelEngineOriginalEvent *)originalEventInternal;
-(void)setUpdateBlock:(id)arg1 ;
-(void)_emissionHypothesisRefreshTimerFired;
-(id)updateBlock;
-(void)_createHypothesizerForDestination:(id)arg1 ;
-(BOOL)geocodedEventEncountered;
-(void)updateWithOriginalEvent:(id)arg1 ;
-(void)_performAnalyticsPostProcessing;
-(BOOL)dismissed;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(id<CALNRouteHypothesizer>)hypothesizer;
-(id)entrySignificantlyChangedBlock;
-(void)setLatestHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setGeocodedEventEncountered:(BOOL)arg1 ;
-(void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)arg1 ;
-(void)_createEmissionHypothesisRefreshTimerWithDate:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotification;
-(void)setEntrySignificantlyChangedBlock:(id)arg1 ;
@end
