/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSMutableDictionary;

@interface TAInterVisitMetricsSnapshot : NSObject <NSSecureCoding> {

	BOOL _isClosed;
	NSDate* _initialTime;
	NSDate* _lastUpdateTime;
	NSMutableDictionary* _accumulatedDeviceMetrics;
	NSMutableDictionary* _firstAssociatedLocationPerDevice;
	NSMutableDictionary* _lastAssociatedLocationPerDevice;
	NSMutableDictionary* _lastAdvPerDevice;

}

@property (nonatomic,readonly) BOOL isClosed;                                                       //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) NSDate * initialTime;                                                //@synthesize initialTime=_initialTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * accumulatedDeviceMetrics;                      //@synthesize accumulatedDeviceMetrics=_accumulatedDeviceMetrics - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * firstAssociatedLocationPerDevice;              //@synthesize firstAssociatedLocationPerDevice=_firstAssociatedLocationPerDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastAssociatedLocationPerDevice;               //@synthesize lastAssociatedLocationPerDevice=_lastAssociatedLocationPerDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastAdvPerDevice;                              //@synthesize lastAdvPerDevice=_lastAdvPerDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdateTime;
-(BOOL)isClosed;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)initialTime;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTime:(id)arg1 ;
-(NSMutableDictionary *)accumulatedDeviceMetrics;
-(void)updateInterVisitMetric:(id)arg1 withUpdatedTime:(id)arg2 andCloseSnapshot:(BOOL)arg3 ;
-(void)updateWithInterVisitMetricsSnapshot:(id)arg1 ;
-(NSMutableDictionary *)lastAdvPerDevice;
-(NSMutableDictionary *)firstAssociatedLocationPerDevice;
-(NSMutableDictionary *)lastAssociatedLocationPerDevice;
@end

