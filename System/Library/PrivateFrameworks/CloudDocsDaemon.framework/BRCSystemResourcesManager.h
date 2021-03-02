/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRReachabilityObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, BRReachabilityMonitor, NSDate, NSMutableSet, NSMutableDictionary, br_pacer, NSMapTable, NSString;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _invalidated;
	NSHashTable* _reachabilityObservers;
	BRReachabilityMonitor* _reachabilityMonitor;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_source> _reachabilityFlagsTimer;
	NSHashTable* _powerObservers;
	int _powerNotifyToken;
	BOOL _powerLevelOK;
	NSObject*<OS_dispatch_source> _powerLevelOKTimer;
	BOOL _connectedToPowerSource;
	NSDate* _connectedToPowerSourceCheckedDate;
	NSMutableSet* _lowDiskSet;
	NSMutableDictionary* _lowDiskDict;
	NSObject*<OS_dispatch_source> _lowDiskSource;
	NSObject*<OS_dispatch_source> _lowDiskTimer;
	NSHashTable* _lowMemoryObservers;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	br_pacer* _memoryNotificationCoalescePacer;
	NSMapTable* _processObservers;
	NSHashTable* _appListObservers;

}

@property (readonly) BOOL isNetworkReachable; 
@property (readonly) unsigned reachabilityFlags; 
@property (readonly) BOOL isPowerOK; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(void)addLowMemoryObserver:(id)arg1 ;
-(void)_invalidateProcessObservers;
-(void)removePowerObserver:(id)arg1 ;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
-(void)_invalidateLowMemory;
-(void)_initProcessObservers;
-(id)init;
-(void)removeProcessMonitor:(id)arg1 ;
-(void)_invalidatePowerManager;
-(void)_invalidateLowDiskManager;
-(void)addPowerObserver:(id)arg1 ;
-(void)_setReachabilityFlagsWithCoalescing:(unsigned)arg1 ;
-(void)__resetReachability;
-(void)reset;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityFlagsTo:(unsigned)arg2 ;
-(void)dealloc;
-(void)_initAppListObservers;
-(void)_resetReachability;
-(void)_setPowerLevelWithCoalescing:(BOOL)arg1 ;
-(void)_setReachabilityFlags:(unsigned)arg1 ;
-(void)_initPowerManager;
-(void)_didReceiveMemoryWarning;
-(void)removeLowMemoryObserver:(id)arg1 ;
-(void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(unsigned)reachabilityFlags;
-(void)_initLowMemory;
-(BOOL)connectedToPowerSource;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2 ;
-(void)_initReachability;
-(void)_processLowDiskNotification:(BOOL)arg1 ;
-(void)_resetLowDiskManager;
-(void)_invalidateAppListObservers;
-(void)removeAppListObserver:(id)arg1 ;
-(void)_initXPCFSEvents;
-(id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2 ;
-(BOOL)hasEnoughSpaceForDevice:(int)arg1 ;
-(void)_setPowerLevel:(BOOL)arg1 ;
-(BOOL)isNetworkReachable;
-(void)_initLowDiskManager;
-(void)suspend;
-(void)close;
-(void)addAppListObserver:(id)arg1 ;
-(void)_resetPowerManager;
-(BOOL)isPowerOK;
-(void)_invalidateProcessMonitorObject:(id)arg1 ;
-(void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2 ;
-(void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2 ;
-(void)_invalidateReachability;
-(void)resume;
@end
