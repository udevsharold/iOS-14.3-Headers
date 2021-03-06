/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, CLLocation, CLLocationManager;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _isLocationInitialized;
	BOOL _isUpdatingLocation;
	int _authorizationStatus;
	NSString* _bundleID;
	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _ISOcountryCode;
	NSString* _postalCode;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	CLLocation* _previousLocation;
	CLLocationManager* _locationManager;
	double _requestedLocationAccuracy;

}

@property (assign,nonatomic) BOOL isLocationInitialized;                               //@synthesize isLocationInitialized=_isLocationInitialized - In the implementation block
@property (nonatomic,retain) NSString * locality;                                      //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                            //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * subAdministrativeArea;                         //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,retain) NSString * ISOcountryCode;                                //@synthesize ISOcountryCode=_ISOcountryCode - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                  //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy) CLLocation * previousLocation;                              //@synthesize previousLocation=_previousLocation - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                      //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingLocation;                                  //@synthesize isUpdatingLocation=_isUpdatingLocation - In the implementation block
@property (assign,nonatomic) double requestedLocationAccuracy;                         //@synthesize requestedLocationAccuracy=_requestedLocationAccuracy - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(NSString *)subAdministrativeArea;
-(CLLocationManager *)locationManager;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)postalCode;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(int)authorizationStatus;
-(void)_startUpdatingLocation;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)ISOcountryCode;
-(NSString *)bundleID;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setRequestedLocationAccuracy:(double)arg1 ;
-(CLLocation *)previousLocation;
-(void)setPreviousLocation:(CLLocation *)arg1 ;
-(double)requestedLocationAccuracy;
-(void)setAuthorizationStatus:(int)arg1 ;
-(void)setLocation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)readWriteQueue;
-(void)_stopUpdatingLocation;
-(void)setISOcountryCode:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)_createLocationManager;
-(void)setIsLocationInitialized:(BOOL)arg1 ;
-(BOOL)locationEnabledFor:(int)arg1 ;
-(BOOL)isLocationInitialized;
-(void)_considerRefreshingLocation;
-(BOOL)isAdLocationServicesEnabled;
-(BOOL)isUpdatingLocation;
-(void)setIsUpdatingLocation:(BOOL)arg1 ;
-(void)setReadWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

