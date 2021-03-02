/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewInProcessAnimationManagerDriver.h>

@protocol _UIViewInProcessAnimationManagerDriver, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSMutableArray, NSObject, _UIAppCACommitFuture, CADisplayLink, NSHashTable, NSThread, NSRunLoop, NSString;

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver> {

	NSMutableArray* _preCommitBlocks;
	NSMutableArray* _entries;
	NSMutableArray* _newlyAddedEntries;
	NSMutableArray* _postTickBlocks;
	NSMutableArray* _preExitBlocks;
	NSMutableArray* _presentationModifierGroupRequestBlocks;
	id<_UIViewInProcessAnimationManagerDriver> _animatorAdvancer;
	double _time;
	double _deltaTime;
	double _refreshInterval;
	NSObject*<OS_dispatch_queue> _tickPrepQueue;
	NSObject*<OS_dispatch_queue> _tickQueue;
	NSObject*<OS_dispatch_queue> _entryLockingQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _displayLinkAccessQueue;
	NSObject*<OS_dispatch_queue> _backlightQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_semaphore> _postTicksDelaySemaphore;
	BOOL _processingPreCommits;
	BOOL _waitingForAnimatorAdvancerToStart;
	_UIAppCACommitFuture* _caCommitFuture;
	CADisplayLink* _displayLink;
	int _screenDimmingNotificationToken;
	BOOL _animationsSuspended;
	BOOL _animationsShouldCompleteImmediately;
	BOOL _skipNextFrame;
	BOOL _displayLinkInvalidated;
	BOOL _screenIsOff;
	unsigned long long _presentationModifierRequestCount;
	NSHashTable* _presentationGroups;
	BOOL _appSuspended;
	NSMutableArray* _observedWindowScenes;
	BOOL _usesMainThreadExecution;
	BOOL _advancingOnCommitDisabled;
	unsigned long long _executionMode;
	NSThread* _currentTickThread;
	NSThread* _animationThread;
	NSRunLoop* _animationThreadRunLoop;
	NSObject*<OS_dispatch_semaphore> _animationThreadKeepAliveSemaphore;

}

@property (assign,nonatomic) BOOL usesMainThreadExecution;                                          //@synthesize usesMainThreadExecution=_usesMainThreadExecution - In the implementation block
@property (assign,nonatomic) unsigned long long executionMode;                                      //@synthesize executionMode=_executionMode - In the implementation block
@property (assign,nonatomic) BOOL advancingOnCommitDisabled;                                        //@synthesize advancingOnCommitDisabled=_advancingOnCommitDisabled - In the implementation block
@property (__weak) NSThread * currentTickThread;                                                    //@synthesize currentTickThread=_currentTickThread - In the implementation block
@property (__weak) NSThread * animationThread;                                                      //@synthesize animationThread=_animationThread - In the implementation block
@property (__weak) NSRunLoop * animationThreadRunLoop;                                              //@synthesize animationThreadRunLoop=_animationThreadRunLoop - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> animationThreadKeepAliveSemaphore;              //@synthesize animationThreadKeepAliveSemaphore=_animationThreadKeepAliveSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
+(void)_dispatchAsyncOntoMainBeforeExit:(/*^block*/id)arg1 ;
+(id)sharedManager;
+(void)_setExternalAnimationDriver:(id)arg1 ;
+(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)_isInvalidated;
-(void)_updateAnimationSuspensionForAppStateChange;
-(NSRunLoop *)animationThreadRunLoop;
-(void)setUsesMainThreadExecution:(BOOL)arg1 ;
-(void)_performWhenInProcessAnimationsTransactionCommits:(/*^block*/id)arg1 ;
-(void)_setAnimationExecutionParameters;
-(void)_cancelPresentationModifierGroupRequest:(id)arg1 ;
-(void)_processPreCommitBlocks;
-(void)_setAnimationsSuspended:(BOOL)arg1 ;
-(id)init;
-(void)_screenBasedSceneDidDisconnect:(id)arg1 ;
-(void)setAnimationThreadRunLoop:(NSRunLoop *)arg1 ;
-(void)setAdvancingOnCommitDisabled:(BOOL)arg1 ;
-(void)startAdvancingAnimationManager:(id)arg1 ;
-(void)setAnimationThread:(NSThread *)arg1 ;
-(void)dealloc;
-(void)startAnimationAdvancerIfNeeded;
-(void)_processPostTicksDelayIfNecessary:(double)arg1 ;
-(void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(BOOL)arg2 ;
-(void)_displayLinkFire:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)animationThreadKeepAliveSemaphore;
-(void)_advanceWithTime:(double)arg1 ;
-(unsigned long long)executionMode;
-(BOOL)advancingOnCommitDisabled;
-(void)setAnimationThreadKeepAliveSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(double)refreshInterval;
-(BOOL)_shouldKeepAnimationThreadAlive;
-(void)finishAdvancingAnimationManager;
-(void)_applicationBecameActive;
-(void)_screenBasedSceneWillAttachWindow:(id)arg1 ;
-(BOOL)usesMainThreadExecution;
-(void)setExecutionMode:(unsigned long long)arg1 ;
-(void)performAfterTick:(/*^block*/id)arg1 ;
-(void)_commitSynchronously;
-(void)performBeforeExiting:(/*^block*/id)arg1 ;
-(void)_cancelAllAnimationsImmediately;
-(void)_performTick:(double)arg1 cancel:(BOOL)arg2 force:(BOOL)arg3 eventName:(id)arg4 entry:(/*^block*/id)arg5 exit:(/*^block*/id)arg6 ;
-(void)_registerBacklightChangedNotification;
-(void)setCurrentTickThread:(NSThread *)arg1 ;
-(void)addEntry:(/*^block*/id)arg1 ;
-(void)_processTickExitRemovingEntries:(id)arg1 ;
-(id)_requestPresentationModifierGroup:(/*^block*/id)arg1 ;
-(void)_setCurrentMediaTime:(double)arg1 ;
-(void)_processPostTicks;
-(void)_applicationResignedActive;
-(NSThread *)currentTickThread;
-(void)_prepareForTick;
-(void)scheduleAnimatorAdvancerToStart;
-(NSThread *)animationThread;
-(unsigned long long)_runPreCommitBlocks;
-(void)_processPresentationModifierRequestsAndFlush;
@end
