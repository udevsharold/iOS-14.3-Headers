/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSBundle, CLAssertion, NSString;

@interface E911LocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	CLLocation* _goodEnoughLocation;
	BOOL _locationRequested;
	BOOL _locationAvailable;
	BOOL _locationServiceDenied;
	BOOL _locationServiceAuthorized;
	NSBundle* _bundle;
	ImsE911Location* _delegate;
	unsigned _desiredIntegrity;
	double _desiredLocationAccuracy;
	CLAssertion* _locationServicesAssertion;

}

@property (copy) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (copy) CLLocation * goodEnoughLocation;                                  //@synthesize goodEnoughLocation=_goodEnoughLocation - In the implementation block
@property (assign,nonatomic) BOOL locationRequested;                               //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) BOOL locationAvailable;                               //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (assign,nonatomic) BOOL locationServiceAuthorized;                       //@synthesize locationServiceAuthorized=_locationServiceAuthorized - In the implementation block
@property (assign) double desiredLocationAccuracy;                                 //@synthesize desiredLocationAccuracy=_desiredLocationAccuracy - In the implementation block
@property (assign) unsigned desiredIntegrity;                                      //@synthesize desiredIntegrity=_desiredIntegrity - In the implementation block
@property (assign,nonatomic) ImsE911Location* delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CLAssertion * locationServicesAssertion;              //@synthesize locationServicesAssertion=_locationServicesAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setDelegate:(ImsE911Location*)arg1 ;
-(ImsE911Location*)delegate;
-(void)stopLocationUpdates;
-(BOOL)isLocationServiceEnabled;
-(BOOL)locationRequested;
-(void)setLocationRequested:(BOOL)arg1 ;
-(void)shouldUpdateLocation:(BOOL)arg1 ;
-(CLLocation *)goodEnoughLocation;
-(CLAssertion *)locationServicesAssertion;
-(void)setLocationServicesAssertion:(CLAssertion *)arg1 ;
-(void)setGoodEnoughLocation:(CLLocation *)arg1 ;
-(unsigned)desiredIntegrity;
-(double)desiredLocationAccuracy;
-(void)startLocationUpdates;
-(void)setLocationServiceAuthorized:(BOOL)arg1 ;
-(id)copyLastKnownLocation;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceAuthorized;
-(void)emergencyLocationServicesAssertion:(BOOL)arg1 ;
-(BOOL)locationServiceAuthorized;
-(BOOL)locationAvailable;
-(void)setLocationAvailable:(BOOL)arg1 ;
-(void)setDesiredLocationAccuracy:(double)arg1 ;
-(void)setDesiredIntegrity:(unsigned)arg1 ;
@end
