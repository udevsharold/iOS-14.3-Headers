/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSHashTable;

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _clientIdentifier;
	NSHashTable* _stateUpdateListeners;
	BOOL _registeredForUpdates;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(BOOL)removeStateUpdateListener:(id)arg1 error:(id*)arg2 ;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(BOOL)addStateUpdateListener:(id)arg1 error:(id*)arg2 ;
-(id)queryCurrentStateWithError:(id*)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)addStateUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeStateUpdateListener:(id)arg1 ;
-(void)_handleLostXPCConnection;
-(BOOL)_queue_registerForStateUpdatesIfRequired;
-(NSString *)clientIdentifier;
-(void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
@end
