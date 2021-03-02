/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDataCollector.h>

@protocol HDCoreMotionDataSource, OS_dispatch_queue;
@class NSSet, HDDataCollectorMultiplexer, NSMutableDictionary, HDDataCollectorState, NSObject, HDProfile, NSString;

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector> {

	NSSet* _quantityTypes;
	HDDataCollectorMultiplexer* _multiplexer;
	NSMutableDictionary* _lastCMDatumByType;
	id<HDCoreMotionDataSource> _dataSource;
	HDDataCollectorState* _state;
	long long _errorCount;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(id)persistentIdentifier;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(HDProfile *)profile;
-(void)dealloc;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
-(id)collectedTypes;
-(id)identifierForDataAggregator:(id)arg1 ;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1 ;
-(Class)coreMotionDatumClass;
-(id)queue_newDataSource;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerWithAggregators;
-(void)_accessToFitnessDataDidChange:(id)arg1 ;
-(id)_queue_diagnosticDescription;
-(void)_queue_beginUpdatesWithTargetCollectionType:(unsigned long long)arg1 ;
-(void)_queue_updateCollectionType:(unsigned long long)arg1 ;
-(id)coreMotionDatumFromSensorDatum:(id)arg1 ;
-(void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2 ;
-(void)_queue_forwardCoreMotionData:(id)arg1 ;
-(void)queue_recomputeCurrentState;
-(id)_migrateDataCollectionContextForType:(id)arg1 error:(id*)arg2 ;
-(id)_queue_lastPersistedSensorDatumForType:(id)arg1 ;
-(void)_queue_populateLastDatumDictionary;
-(void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3 ;
@end
