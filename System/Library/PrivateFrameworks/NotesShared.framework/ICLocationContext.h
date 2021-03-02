/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLGeocoder, NSString;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	BOOL _requestedAuthorization;
	CLGeocoder* _geocoder;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                              //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,readonly) CLLocationManager * locationManager; 
@property (assign,nonatomic) BOOL requestedAuthorization;                        //@synthesize requestedAuthorization=_requestedAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL canGetLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContext;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)requestAuthorizationIfNeeded;
-(void)setRequestedAuthorization:(BOOL)arg1 ;
-(BOOL)requestedAuthorization;
-(BOOL)canGetLocation;
-(CLGeocoder *)geocoder;
@end
