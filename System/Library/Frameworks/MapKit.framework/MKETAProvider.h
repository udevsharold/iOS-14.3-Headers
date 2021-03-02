/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKQuickRouteTransportTypeFinding.h>

@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;
@class _MKQuickRouteManager, NSNumber, MKMapItem, NSString, NSTimer, CLLocation, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, NSHashTable, NSLock;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {

	_MKQuickRouteManager* _quickRouteManager;
	NSNumber* _lastTransportTypeFound;
	MKMapItem* _nearestStationItem;
	BOOL _distanceOrETAIsSuppressed;
	BOOL _distanceOrETAWasFound;
	NSString* _distanceTextItem;
	unsigned long long _etaTransportType;
	double _etaTravelTime;
	BOOL _active;
	BOOL _paused;
	BOOL _inactiveInBackground;
	NSTimer* _refreshTimer;
	CLLocation* _currentLocation;
	id<MKETAProviderDelegate> _delegate;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	NSHashTable* _observers;
	NSLock* _observersLock;

}

@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                            //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                       //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                  //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                          //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MKETAProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions;                      //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,readonly) NSString * distanceString; 
@property (nonatomic,readonly) unsigned long long etaTransportType; 
@property (nonatomic,readonly) double etaTravelTime; 
@property (nonatomic,readonly) NSNumber * transportTypePreferenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(GEOAutomobileOptions *)automobileOptions;
-(void)_commonInit;
-(GEOTransitOptions *)transitOptions;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)pause;
-(id)initWithPlaceItem:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)dealloc;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(void)addObserver:(id)arg1 ;
-(void)restart;
-(NSNumber *)transportTypePreferenceNumber;
-(void)findDirectionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(CLLocation *)currentLocation;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setObserversLock:(NSLock *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)_startTimer;
-(void)cancel;
-(void)_configureETAForMapItem:(id)arg1 ;
-(id)currentMapItem;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)_updateETAHandler:(id)arg1 ;
-(void)_willEnterForeground;
-(void)_notifyETAAllObservers;
-(void)_updateETA;
-(BOOL)_areDistanceAndETAInformationAvailable;
-(BOOL)_shouldUpdateETAForMapView:(id)arg1 ;
-(void)_notifyLocationAllObservers;
-(void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3 ;
-(unsigned long long)etaTransportType;
-(double)etaTravelTime;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithLineItem:(id)arg1 ;
-(void)_didEnterBackground;
-(id<GEOTransitLineItem>)lineItem;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(NSString *)distanceString;
-(void)start;
-(NSLock *)observersLock;
-(void)setDelegate:(id<MKETAProviderDelegate>)arg1 ;
-(void)_refreshTimer;
-(void)_cancelTimer;
-(void)configureWithNearestStationMapItem:(id)arg1 ;
-(id<MKETAProviderDelegate>)delegate;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
@end
