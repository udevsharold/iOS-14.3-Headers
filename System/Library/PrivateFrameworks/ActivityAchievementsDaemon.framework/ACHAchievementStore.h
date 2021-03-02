/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACHTemplateStoreObserving.h>
#import <libobjc.A.dylib/ACHEarnedInstanceStoreObserving.h>
#import <libobjc.A.dylib/ACHAchievementProgressEngineObserving.h>
#import <libobjc.A.dylib/ACHTemplateAssetRegistryDelegate.h>

@protocol OS_dispatch_queue;
@class ACHTemplateStore, ACHEarnedInstanceStore, ACHTemplateAssetRegistry, ACHAchievementProgressEngine, NSMutableDictionary, NSHashTable, NSObject, NSString;

@interface ACHAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate> {

	BOOL _templateStoreDidFinishInitialFetch;
	BOOL _earnedInstanceStoreDidFinishInitialFetch;
	ACHTemplateStore* _templateStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	ACHTemplateAssetRegistry* _templateAssetRegistry;
	ACHAchievementProgressEngine* _progressProvider;
	NSMutableDictionary* _achievementsByTemplateUniqueName;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,retain) ACHTemplateStore * templateStore;                                    //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                        //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) ACHTemplateAssetRegistry * templateAssetRegistry;                    //@synthesize templateAssetRegistry=_templateAssetRegistry - In the implementation block
@property (nonatomic,retain) ACHAchievementProgressEngine * progressProvider;                     //@synthesize progressProvider=_progressProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByTemplateUniqueName;              //@synthesize achievementsByTemplateUniqueName=_achievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                      //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;                   //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign,nonatomic) BOOL templateStoreDidFinishInitialFetch;                             //@synthesize templateStoreDidFinishInitialFetch=_templateStoreDidFinishInitialFetch - In the implementation block
@property (assign,nonatomic) BOOL earnedInstanceStoreDidFinishInitialFetch;                       //@synthesize earnedInstanceStoreDidFinishInitialFetch=_earnedInstanceStoreDidFinishInitialFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(void)addObserver:(id)arg1 ;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setTemplateAssetRegistry:(ACHTemplateAssetRegistry *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(ACHAchievementProgressEngine *)progressProvider;
-(ACHTemplateStore *)templateStore;
-(ACHTemplateAssetRegistry *)templateAssetRegistry;
-(void)_notifyObserversOfInitialFetchCompletion;
-(void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2 ;
-(void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2 ;
-(void)templateStoreDidFinishInitialFetch:(id)arg1 ;
-(void)templateAssetRegistry:(id)arg1 didUpdateResourcesForTemplatesWithSourceName:(id)arg2 ;
-(BOOL)templateStoreDidFinishInitialFetch;
-(BOOL)earnedInstanceStoreDidFinishInitialFetch;
-(NSMutableDictionary *)achievementsByTemplateUniqueName;
-(id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg1 earnedInstance:(id)arg2 ;
-(void)progressProviderDidUpdateProgressValues:(id)arg1 ;
-(void)_queue_addTemplatesToLocalStore:(id)arg1 ;
-(void)setTemplateStoreDidFinishInitialFetch:(BOOL)arg1 ;
-(void)_queue_removeTemplatesFromLocalStore:(id)arg1 ;
-(void)_queue_addEarnedInstancesToLocalStore:(id)arg1 ;
-(void)setEarnedInstanceStoreDidFinishInitialFetch:(BOOL)arg1 ;
-(void)_queue_removeEarnedInstancesFromLocalStore:(id)arg1 ;
-(BOOL)_queue_addProgressAndGoalToAchievement:(id)arg1 ;
-(void)_notifyObserversOfNewAchievements:(id)arg1 ;
-(void)_notifyObserversOfRemovedAchievements:(id)arg1 ;
-(void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg1 ;
-(void)_notifyObserversOfUpdatedAchievements:(id)arg1 ;
-(void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2 ;
-(void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2 ;
-(void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1 ;
-(id)initWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4 ;
-(void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)allAchievements;
-(id)achievementWithTemplateUniqueName:(id)arg1 ;
-(id)ephemeralAchievementWithTemplateUniqueName:(id)arg1 ;
-(void)recalculateProgressForAllAchievements;
-(void)setAchievementsByTemplateUniqueName:(NSMutableDictionary *)arg1 ;
@end
