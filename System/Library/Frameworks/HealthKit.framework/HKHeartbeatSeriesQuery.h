/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKHeartbeatSeriesQueryClientInterface.h>

@class HKHeartbeatSeriesSample, NSString;

@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface> {

	/*^block*/id _dataHandler;
	HKHeartbeatSeriesSample* _heartbeatSeries;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)_enumerateHeartbeatsWithHandler:(/*^block*/id)arg1 ;
-(void)client_deliverHeartbeats;
-(id)initWithHeartbeatSeries:(id)arg1 dataHandler:(/*^block*/id)arg2 ;
@end

