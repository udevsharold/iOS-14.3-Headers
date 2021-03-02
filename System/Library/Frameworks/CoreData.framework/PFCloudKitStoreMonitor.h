/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <CoreData/CoreData-Structs.h>
@class NSObject, NSPersistentStoreCoordinator, NSPersistentStore, NSString;

@interface PFCloudKitStoreMonitor : NSObject {

	NSObject*<OS_dispatch_group> _monitorGroup;
	os_unfair_lock_s _aliveLock;
	BOOL _storeIsAlive;
	BOOL _declaredDead;
	int _retryCount;
	int _timeoutSeconds;
	NSPersistentStoreCoordinator* _monitoredCoordinator;
	NSPersistentStore* _monitoredStore;
	NSString* _storeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> monitorGroup;                               //@synthesize monitorGroup=_monitorGroup - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * monitoredCoordinator;              //@synthesize monitoredCoordinator=_monitoredCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * monitoredStore;                               //@synthesize monitoredStore=_monitoredStore - In the implementation block
@property (nonatomic,readonly) int retryCount;                                                          //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) int timeoutSeconds;                                                      //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                                              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL declaredDead;                                                       //@synthesize declaredDead=_declaredDead - In the implementation block
-(id)instantiateNewBackgroundContext;
-(int)retryCount;
-(int)timeoutSeconds;
-(NSPersistentStoreCoordinator *)monitoredCoordinator;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)retainedMonitoredStore;
-(void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
-(BOOL)declaredDead;
-(NSString *)storeIdentifier;
-(id)newBackgroundContextForMonitoredCoordinator;
-(id)retainedMonitoredCoordinator;
-(id)initForStore:(id)arg1 ;
-(void)declareStoreDead;
-(NSObject*<OS_dispatch_group>)monitorGroup;
-(NSPersistentStore *)monitoredStore;
@end
