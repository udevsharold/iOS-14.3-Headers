/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXUpdatePredictionsSource.h>

@protocol ATXUpdatePredictionsDelegate, ATXLocationManagerProtocol;
@class NSUserDefaults, NSDate;

@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource> {

	id<ATXUpdatePredictionsDelegate> _delegate;
	id<ATXLocationManagerProtocol> _locationManager;
	NSUserDefaults* _userDefaults;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;                                                  //@synthesize now=_now - In the implementation block
@property (assign,nonatomic,__weak) id<ATXUpdatePredictionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<ATXLocationManagerProtocol> locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                               //@synthesize userDefaults=_userDefaults - In the implementation block
-(id<ATXLocationManagerProtocol>)locationManager;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(NSDate *)now;
-(void)setDelegate:(id<ATXUpdatePredictionsDelegate>)arg1 ;
-(void)_start;
-(void)setNow:(NSDate *)arg1 ;
-(id<ATXUpdatePredictionsDelegate>)delegate;
-(id)initWithLocationManager:(id)arg1 userDefaults:(id)arg2 ;
-(void)updateMonitoredRegionsIfNecessaryWithReply:(/*^block*/id)arg1 ;
-(void)_registerNotificationListeners;
-(void)locationManagerDidEnterRegion:(id)arg1 ;
-(void)locationManagerDidExitRegion:(id)arg1 ;
-(id)_regionIdentifierForLocationOfInterestType:(long long)arg1 ;
@end
