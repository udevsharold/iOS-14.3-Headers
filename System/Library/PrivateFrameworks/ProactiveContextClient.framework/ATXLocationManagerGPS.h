/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation;


@protocol ATXLocationManagerGPS
@property (assign,nonatomic,__weak) id<ATXLocationManagerGPSDelegate> delegate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL locationEnabled; 
@property (nonatomic,readonly) BOOL preciseLocationEnabled; 
@required
-(BOOL)preciseLocationEnabled;
-(void)stopMonitoringRegionWithIdentifier:(id)arg1;
-(void)beginMonitoringRegion:(id)arg1;
-(id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(BOOL)arg2;
-(long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
-(BOOL)locationEnabled;
-(CLLocation *)location;
-(void)updateLocationWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id<ATXLocationManagerGPSDelegate>)delegate;

@end
