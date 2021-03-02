/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLInUseAssertion, CLLocationManager, GEOLocationShifter, NSMutableArray, CLLocation, NSString;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	CLInUseAssertion* _inUseAssertion;
	CLLocationManager* _locationProvider;
	GEOLocationShifter* _locationShifter;
	NSMutableArray* _requests;

}

@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setLocationProviderClass:(Class)arg1 ;
-(id)locationProvider;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(CLLocation *)lastLocation;
-(id)init;
-(void)_processPendingRequests;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)_processError:(id)arg1 ;
-(void)_addRequest:(id)arg1 ;
-(void)getLocationWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setupLocationProvider;
-(void)_requestTimedOut:(id)arg1 ;
-(void)_removeRequest:(id)arg1 ;
-(void)_processLocation:(id)arg1 ;
@end
