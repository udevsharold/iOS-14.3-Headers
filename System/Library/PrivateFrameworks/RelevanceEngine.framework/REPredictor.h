/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REObservableSingleton.h>
#import <libobjc.A.dylib/REPredictorProperties.h>

@protocol OS_dispatch_queue;
@class NSObject, REObserverStore, REUpNextScheduler, NSCountedSet;

@interface REPredictor : REObservableSingleton <REPredictorProperties> {

	NSObject*<OS_dispatch_queue> _queue;
	REObserverStore* _engines;
	REUpNextScheduler* _refreshScheduler;
	NSCountedSet* _activities;
	os_unfair_lock_s _predictorLock;
	BOOL __isRunning;
	long long _beginUpdatesCount;

}

@property (nonatomic,readonly) NSCountedSet * outstandingActivities; 
@property (setter=_setIsRunning:) BOOL _isRunning;                                //@synthesize _isRunning=__isRunning - In the implementation block
@property (assign,nonatomic) long long beginUpdatesCount;                         //@synthesize beginUpdatesCount=_beginUpdatesCount - In the implementation block
@property (nonatomic,readonly) BOOL running; 
+(double)updateInterval;
+(id)supportedFeatures;
+(id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2 ;
+(id)availablePredictors;
-(void)endUpdates;
-(BOOL)isRunning;
-(void)beginUpdates;
-(void)pause;
-(void)dealloc;
-(BOOL)_isRunning;
-(BOOL)running;
-(void)_performUpdate;
-(void)_setRunning:(BOOL)arg1 ;
-(id)engines;
-(void)updateObservers;
-(id)description;
-(void)update;
-(id)_init;
-(id)queue;
-(void)invalidate;
-(void)onQueue:(/*^block*/id)arg1 ;
-(void)resume;
-(void)beginActivity:(id)arg1 ;
-(void)enumerateInflectionFeatureValues:(/*^block*/id)arg1 ;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)finishActivity:(id)arg1 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(void)onQueueSync:(/*^block*/id)arg1 ;
-(long long)beginUpdatesCount;
-(void)setBeginUpdatesCount:(long long)arg1 ;
-(void)_setIsRunning:(BOOL)arg1 ;
-(NSCountedSet *)outstandingActivities;
@end
