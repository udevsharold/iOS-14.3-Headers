/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate;
@class NSString, GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, GEOComposedETARoute, NSTimer, NSData, GEOCommonOptions, GEOApplicationAuditToken;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	GEOComposedETARoute* _etaRoute;
	long long _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	BOOL _shouldUpdateTrafficOnRoute;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	unsigned long long _maxAlternateRoutesCount;
	NSData* _directionsResponseID;
	GEOCommonOptions* _commonOptions;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,readonly) BOOL requestInProgress; 
@property (assign,nonatomic,__weak) id<GEOETAUpdaterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                              //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                   //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                      //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                        //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTrafficOnRoute;                         //@synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute - In the implementation block
@property (assign,nonatomic) double requestInterval;                                  //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                          //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
-(void)requestUpdate;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)startUpdateRequests;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(BOOL)shouldUseConditionalRequest;
-(BOOL)allowRequests;
-(void)cancelRequest;
-(id)init;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEOLocation *)userLocation;
-(BOOL)requestInProgress;
-(void)_startConditionalConnectionETARequest;
-(void)_updateRequest:(id)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedRoute *)route;
-(void)reset;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(BOOL)shouldUpdateTrafficOnRoute;
-(void)dealloc;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(NSString *)requestingAppIdentifier;
-(void)setRequestInterval:(double)arg1 ;
-(void)_clearTimer;
-(void)_sendRequest:(id)arg1 ;
-(GEORouteMatch *)routeMatch;
-(double)requestInterval;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)_continueUpdateRequests;
-(void)_addRouteAttributesToRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(id)_updateOrCreateRequest:(id)arg1 ;
-(double)_calculateNextTransitionTime;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(NSData *)directionsResponseID;
-(void)setShouldUpdateTrafficOnRoute:(BOOL)arg1 ;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(double)_currentTime;
-(double)debugTimeWindowDuration;
-(id)currentStep;
-(BOOL)_shouldStartConditionalETARequest;
-(void)setAllowRequests:(BOOL)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(id<GEOETAUpdaterDelegate>)delegate;
-(void)_trafficRequest:(id)arg1 finished:(id)arg2 ;
-(void)stopUpdateRequests;
@end
