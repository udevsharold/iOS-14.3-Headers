/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, HDApplicationStateMonitorProvider;
@class NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject, NSString;

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {

	NSMutableDictionary* _processObserversByBundleID;
	NSHashTable* _foregroundClientProcessObservers;
	BKSApplicationStateMonitor* _applicationMonitor;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSMutableDictionary* _processInfoByBundleID;
	id<HDApplicationStateMonitorProvider> _applicationStateMonitorProvider;

}

@property (nonatomic,__weak,readonly) id<HDApplicationStateMonitorProvider> applicationStateMonitorProvider;              //@synthesize applicationStateMonitorProvider=_applicationStateMonitorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(BOOL)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)arg1 ;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)_lock_registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(int)processIdentifierForApplicationIdentifier:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)unregisterForegroundClientProcessObserver:(id)arg1 ;
-(id)diagnosticDescription;
-(id<HDApplicationStateMonitorProvider>)applicationStateMonitorProvider;
-(BOOL)applicationIsForeground:(id)arg1 ;
-(void)_lock_handleBackboardApplicationInfoChanged:(id)arg1 ;
-(id)initWithApplicationStateMonitorProvider:(id)arg1 ;
-(void)registerForegroundClientProcessObserver:(id)arg1 ;
-(unsigned)applicationStateForBundleIdentifier:(id)arg1 ;
-(BOOL)isApplicationStateForegroundForBundleIdentifier:(id)arg1 ;
-(BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1 ;
-(void)_lock_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned)arg3 previousApplicationState:(unsigned)arg4 ;
@end

