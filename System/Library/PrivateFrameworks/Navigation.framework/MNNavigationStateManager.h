/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationStateInterface.h>

@protocol MNNavigationSessionManagerDelegate;
@class MNNavigationState, MNObserverHashTable, GEOApplicationAuditToken, NSString;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface> {

	BOOL _isStarted;
	MNNavigationState* _currentState;
	MNObserverHashTable* _navigationStateObservers;
	GEOApplicationAuditToken* _auditToken;
	id<MNNavigationSessionManagerDelegate> _navigationDelegate;

}

@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                                       //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<MNNavigationSessionManagerDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isStarted;                                                              //@synthesize isStarted=_isStarted - In the implementation block
@property (nonatomic,readonly) MNNavigationState * currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) unsigned long long currentStateType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)setNavigationDelegate:(id<MNNavigationSessionManagerDelegate>)arg1 ;
-(void)resumeOriginalDestination;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
-(void)changeSettings:(id)arg1 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(BOOL)isStarted;
-(void)stopNavigation;
-(id<MNNavigationSessionManagerDelegate>)navigationDelegate;
-(void)setCurrentState:(MNNavigationState *)arg1 ;
-(void)switchToRoute:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(id)init;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)stopPredictingDestinations;
-(void)stopCurrentGuidancePrompt;
-(id)_initialState;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(void)dealloc;
-(MNNavigationState *)currentState;
-(void)addObserver:(id)arg1 ;
-(void)_changeToDesiredLocationProviderTypeForState:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(unsigned long long)_stateTypeForState:(id)arg1 ;
-(void)_replayStateForNewObserver:(id)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)start;
-(id)navSessionDestination;
-(unsigned long long)currentStateType;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
@end
