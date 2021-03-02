/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class NSLock, CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSString, NSRunLoop;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {

	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	BOOL _alternate;
	CLLocationManager* _clLocationManager;
	MNLocationProviderCLParameters* _clParameters;
	id<MNLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	BOOL _coarseModeEnabled;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	NSRunLoop* _debug_initRunLoop;
	NSRunLoop* _debug_deinitRunLoop;
	BOOL _updatingLocations;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (assign,nonatomic) BOOL updatingLocations;                                                                                       //@synthesize updatingLocations=_updatingLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL coarseModeEnabled;                                                                                     //@synthesize coarseModeEnabled=_coarseModeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
-(int)headingOrientation;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)_createCLLocationManager;
-(void)stopUpdatingVehicleSpeed;
-(double)expectedGpsUpdateInterval;
-(void)startUpdatingVehicleHeading;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)requestLocation;
-(void)startUpdatingVehicleSpeed;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(id)authorizationRequestBlock;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(NSBundle *)effectiveBundle;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)startUpdatingHeading;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(int)authorizationStatus;
-(void)requestWhenInUseAuthorization;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)coarseModeEnabled;
-(double)desiredAccuracy;
-(void)stopUpdatingVehicleHeading;
-(void)stopUpdatingLocation;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(BOOL)matchInfoEnabled;
-(double)timeScale;
-(NSString *)effectiveBundleIdentifier;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(double)distanceFilter;
-(void)startUpdatingLocation;
-(id)init;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(BOOL)updatingLocations;
-(void)dealloc;
-(unsigned long long)traceVersion;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)_resetForNewEffectiveBundle;
-(void)setCLParameters:(id)arg1 ;
-(void)_updateForCLParameters:(id)arg1 ;
-(BOOL)isTracePlayer;
-(void)_sharedInit;
-(void)setUpdatingLocations:(BOOL)arg1 ;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(void)_updateAuthorizationStatus;
-(BOOL)usesCLMapCorrection;
-(void)resetForActiveTileGroupChanged;
-(BOOL)isSimulation;
-(CLLocationManager *)_clLocationManager;
-(id<MNLocationProviderDelegate>)delegate;
@end
