/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSyncEngine.h>

@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, HDProfile, NSObject, HDDaemonSyncEntityManager, NSString;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDDaemonSyncEntityManager* _entityManager;
	/*^block*/id _unitTest_didCompleteReadTransaction;

}

@property (nonatomic,copy) id unitTest_didCompleteReadTransaction;                           //@synthesize unitTest_didCompleteReadTransaction=_unitTest_didCompleteReadTransaction - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allOrderedSyncEntities; 
@property (nonatomic,copy,readonly) NSDictionary * allSyncEntitiesByIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(long long)session:(id)arg1 requiresSyncWithAnchors:(id)arg2 error:(id*)arg3 ;
-(BOOL)performSyncSession:(id)arg1 accessibilityAssertion:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetNextAnchorsForStore:(id)arg1 profile:(id)arg2 minimumElapsedTime:(double)arg3 error:(id*)arg4 ;
-(id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id*)arg3 ;
-(void)resetStore:(id)arg1 ;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_applySyncChange:(id)arg1 entity:(Class)arg2 store:(id)arg3 error:(id*)arg4 ;
-(long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id*)arg4 ;
-(long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(void)setUnitTest_didCompleteReadTransaction:(id)arg1 ;
-(id)unitTest_didCompleteReadTransaction;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 startAnchor:(long long*)arg3 finalAnchor:(long long)arg4 postTransactionBlocks:(id)arg5 error:(id*)arg6 ;
-(BOOL)_performSyncSession:(id)arg1 databaseAccessibilityAssertion:(id)arg2 error:(id*)arg3 ;
-(NSArray *)allOrderedSyncEntities;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(void)_resetStore:(id)arg1 ;
-(NSDictionary *)allSyncEntitiesByIdentifier;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2 ;
@end

