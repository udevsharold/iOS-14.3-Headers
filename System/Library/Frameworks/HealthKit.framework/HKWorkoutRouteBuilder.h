/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSeriesBuilder.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@class NSString;

@interface HKWorkoutRouteBuilder : HKSeriesBuilder <HKSeriesBuilderClientInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskServerIdentifier;
+(id)serverInterface;
+(void)configureClientInterface:(id)arg1 ;
+(id)clientInterface;
+(void)configureServerInterface:(id)arg1 ;
-(id)init;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg1 identifier:(id)arg2 device:(id)arg3 workoutBuilderID:(id)arg4 ;
-(void)addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(void)_resourceQueue_insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 device:(id)arg2 ;
-(void)insertRouteData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

