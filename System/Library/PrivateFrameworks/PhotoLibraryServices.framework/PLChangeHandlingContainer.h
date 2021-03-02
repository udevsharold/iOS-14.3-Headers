/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLChangePublisher;
@class PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor, NSURL, NSDictionary;

@interface PLChangeHandlingContainer : NSObject {

	PLChangeNode* _changeNode;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLPersistentHistoryChangeDistributor* _persistentHistoryChangeDistributor;
	NSURL* _libraryURL;

}

@property (copy,readonly) NSURL * libraryURL;                                                //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) BOOL isMergingCoalescedSaveNotification; 
@property (nonatomic,copy,readonly) NSDictionary * allDidSaveObjectIDsUserInfo; 
-(NSURL *)libraryURL;
-(id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4 ;
-(void)connectManagedObjectContext:(id)arg1 ;
-(void)dealloc;
-(void)pauseLaunchEventNotifications;
-(BOOL)isMergingCoalescedSaveNotification;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleUnknownMergeEvent;
-(void)registerToReceiveCoreDataChanges:(id)arg1 ;
-(void)start;
-(NSDictionary *)allDidSaveObjectIDsUserInfo;
-(void)unpauseLaunchEventNotifications;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)distributeChangesSinceLastCheckpoint;
-(void)stop;
@end
