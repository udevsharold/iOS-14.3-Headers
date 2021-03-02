/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RETrainingContext.h>

@class NSMutableArray, RERemoteTrainingServer;

@interface RERemoteTrainingContext : RETrainingContext {

	NSMutableArray* _trainingElements;
	NSMutableArray* _trainingEvents;
	NSMutableArray* _trainingInteractions;
	RERemoteTrainingServer* _trainingServer;

}
-(BOOL)isCurrent;
-(void)becomeCurrent;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)trainWithElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)_willSetAttributeForRemoteTraining;
-(void)_queue_setRemoteAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)_willPerformRemoteTraining;
-(void)_didPerformRemoteTraining;
-(void)_didSetAttributeForRemoteTraining;
-(id)initWithProcessName:(id)arg1 ;
-(void)_queue_enqueueRemoteTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
-(void)_queue_performRemoteTraining;
-(void)trainWithPredictionElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 ;
@end
