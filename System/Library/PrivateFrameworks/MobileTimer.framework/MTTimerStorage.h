/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTTimerSchedulerDelegate.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTTimerStorage.h>
@class NSArray, MTTimer, NSDate;


@protocol MTTimerStorage <NSObject>
@property (nonatomic,readonly) NSArray * timers; 
@property (nonatomic,readonly) MTTimer * nextTimer; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@required
-(void)registerObserver:(id)arg1;
-(NSArray *)timers;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(MTTimer *)nextTimer;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)setAllTimers:(id)arg1 source:(id)arg2;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3;
-(NSDate *)lastModifiedDate;
-(void)getTimersWithCompletion:(/*^block*/id)arg1;

@end


@protocol NAScheduler, MTPersistence;
@class NSArray, MTTimer, NSDate, MTTimerScheduler, NSMutableArray, MTTimerMigrator, MTObserverStore, NSString;

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage> {

	MTTimerScheduler* _scheduler;
	NSMutableArray* _orderedTimers;
	NSDate* _lastModifiedDate;
	/*^block*/id _currentDateProvider;
	MTTimerMigrator* _migrator;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	id<MTPersistence> _persistence;

}

@property (nonatomic,retain) NSMutableArray * orderedTimers;                   //@synthesize orderedTimers=_orderedTimers - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                          //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) id currentDateProvider;                    //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,retain) MTTimerMigrator * migrator;                       //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                       //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) id<MTPersistence> persistence;                    //@synthesize persistence=_persistence - In the implementation block
@property (assign,nonatomic,__weak) MTTimerScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * timers; 
@property (nonatomic,readonly) MTTimer * nextTimer; 
+(id)_diagnosticDictionaryForTimer:(id)arg1 ;
-(id<MTPersistence>)persistence;
-(void)handleMigrationFinish;
-(void)setMigrator:(MTTimerMigrator *)arg1 ;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg1 ;
-(id)currentDateProvider;
-(void)_queue_persistTimers;
-(id)_diagnosticTimerDictionary;
-(MTTimerMigrator *)migrator;
-(void)scheduler:(id)arg1 didFireTimer:(id)arg2 ;
-(id)gatherDiagnostics;
-(BOOL)_queue_hasMatchingTimer:(id)arg1 ;
-(id)init;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2 ;
-(void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2 ;
-(NSArray *)timers;
-(MTObserverStore *)observers;
-(void)setOrderedTimers:(NSMutableArray *)arg1 ;
-(void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2 ;
-(id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2 ;
-(void)handleF5Reset;
-(void)dealloc;
-(void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(MTTimer *)nextTimer;
-(void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2 ;
-(void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(id<NAScheduler>)serializer;
-(void)_queue_removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2 ;
-(id)_queue_updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)updateTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(id)initWithPersistence:(id)arg1 ;
-(id)_queue_timerMatchingTimerIdentifier:(id)arg1 ;
-(MTTimerScheduler *)scheduler;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2 ;
-(void)addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2 ;
-(void)setAllTimers:(id)arg1 source:(id)arg2 ;
-(void)_loadTimersWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_addTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setPersistence:(id<MTPersistence>)arg1 ;
-(void)removeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)setScheduler:(MTTimerScheduler *)arg1 ;
-(void)_queue_sortTimers;
-(void)_queue_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)loadTimersSync;
-(void)_queue_setAllTimers:(id)arg1 source:(id)arg2 ;
-(void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2 ;
-(void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 source:(id)arg3 ;
-(void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)_createDefaultTimerIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)getTimersWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)orderedTimers;
-(void)_queue_removeAllTimersForSource:(id)arg1 ;
-(void)loadTimers;
@end

