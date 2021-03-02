/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <Proximity/Proximity-Structs.h>
@class NSObject, NSMutableDictionary, NSData, NSArray, NSSortDescriptor;

@interface PRSharingChoice : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _scores;
	double _lastScoreReportMachContinuousTime;
	double _lastBigHeadFirstReportTime;
	NSData* _lastBigHeadMacAddress;
	NSArray* _lastReportedScores;
	SharingImportanceMeasurements* _measurements;
	NSSortDescriptor* _scoreSortDescriptor;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeOnly;
	unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager> >* _estimatorRangeAndAngle;
	BOOL _useRegionBasedEstimator;
	BOOL _outputScoreCalculatedWithAngle;
	BOOL _currentlyInitiating;
	/*^block*/id _newScoresHandler;
	double _halfPointingAngleDegrees;
	NSObject*<OS_os_log> _logger;

}

@property (copy) id newScoresHandler;                                  //@synthesize newScoresHandler=_newScoresHandler - In the implementation block
@property (assign) BOOL useRegionBasedEstimator;                       //@synthesize useRegionBasedEstimator=_useRegionBasedEstimator - In the implementation block
@property (assign) BOOL outputScoreCalculatedWithAngle;                //@synthesize outputScoreCalculatedWithAngle=_outputScoreCalculatedWithAngle - In the implementation block
@property (assign) double halfPointingAngleDegrees;                    //@synthesize halfPointingAngleDegrees=_halfPointingAngleDegrees - In the implementation block
@property (assign) BOOL currentlyInitiating;                           //@synthesize currentlyInitiating=_currentlyInitiating - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> logger;              //@synthesize logger=_logger - In the implementation block
-(void)createEstimators;
-(void)addRoseSolutions:(id)arg1 currentMachContTime:(double)arg2 ;
-(id)init;
-(id)newScoresHandler;
-(id)initWithQueue:(id)arg1 ;
-(void)updateScoresWithNewMeasurement:(const NeighborMeasurements*)arg1 ;
-(BOOL)useRegionBasedEstimator;
-(BOOL)outputScoreCalculatedWithAngle;
-(void)setCurrentlyInitiating:(BOOL)arg1 ;
-(void)setOutputScoreCalculatedWithAngle:(BOOL)arg1 ;
-(void)setNewScoresHandler:(id)arg1 ;
-(void)updateScoresForTime:(double)arg1 ;
-(void)heartbeatTimeout:(double)arg1 currentMachContTime:(double)arg2 useUpdatedScores:(BOOL)arg3 ;
-(void)setUseRegionBasedEstimator:(BOOL)arg1 ;
-(NSObject*<OS_os_log>)logger;
-(void)setHalfPointingAngleDegrees:(double)arg1 ;
-(BOOL)currentlyInitiating;
-(void)reportScoresToClientAlways:(BOOL)arg1 useUpdatedScoreList:(BOOL)arg2 currentMachContTime:(double)arg3 ;
-(void)setLogger:(NSObject*<OS_os_log>)arg1 ;
-(void)addBluetoothProximityEstimate:(NeighborMeasurements)arg1 currentMachContTime:(double)arg2 ;
-(double)halfPointingAngleDegrees;
@end
