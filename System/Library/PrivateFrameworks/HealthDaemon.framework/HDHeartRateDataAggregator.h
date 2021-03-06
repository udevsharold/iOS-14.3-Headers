/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataAggregator.h>

@interface HDHeartRateDataAggregator : HDDataAggregator
-(id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2 ;
-(void)dealloc;
-(void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4 ;
-(void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3 ;
-(id)configurationForCollector:(id)arg1 ;
-(BOOL)_shouldRequestActiveCollectionForConfiguration:(id)arg1 ;
-(id)initWithDataCollectionManager:(id)arg1 ;
-(void)workoutManagerStateChanged:(id)arg1 ;
-(id)objectType;
@end

