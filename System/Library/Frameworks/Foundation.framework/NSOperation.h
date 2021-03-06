/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSOperation : NSObject {

	SCD_Struct_NS51* _iop;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isConcurrent,readonly) BOOL concurrent; 
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(id)currentOperation;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)keyPathsForValuesAffectingReady;
+(BOOL)_removesDependenciesAfterFinish;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setQueuePriority:(long long)arg1 ;
-(BOOL)isReady;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isExecuting;
-(id)init;
-(void)main;
-(void)dealloc;
-(id)completionBlock;
-(void)waitUntilFinished;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)dependencies;
-(BOOL)isFinished;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)isAsynchronous;
-(BOOL)isCancelled;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void*)observationInfo;
-(void)removeDependency:(id)arg1 ;
-(double)threadPriority;
-(void)addDependency:(id)arg1 ;
-(id)description;
-(id)_implicitObservationInfo;
-(long long)queuePriority;
-(/*^block*/id)_copyCompletionBlock;
-(void)cancel;
-(void)removeAllDependencies;
-(void)setThreadPriority:(double)arg1 ;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(void)start;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)name;
-(BOOL)isConcurrent;
-(long long)qualityOfService;
-(id)debugDescription;
@end

