/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IXClientDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSString;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _coordinatorInstances;
	NSMutableDictionary* _promiseInstances;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * coordinatorInstances;              //@synthesize coordinatorInstances=_coordinatorInstances - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * promiseInstances;                  //@synthesize promiseInstances=_promiseInstances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)retrySynchronousIPC:(/*^block*/id)arg1 ;
+(id)sharedConnection;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1 ;
-(NSMutableDictionary *)coordinatorInstances;
-(void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(id)init;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(void)unregisterAppInstallCoordinatorForUpdates:(id)arg1 ;
-(id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)promiseInstances;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 ;
-(void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(id)_onQueue_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 ;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4 ;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1 ;
-(void)_onQueue_reSetupObserversAfter:(id)arg1 ;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1 ;
-(void)unregisterDataPromiseForUpdates:(id)arg1 ;
-(BOOL)_onQueue_createXPCConnectionIfNecessary;
@end
