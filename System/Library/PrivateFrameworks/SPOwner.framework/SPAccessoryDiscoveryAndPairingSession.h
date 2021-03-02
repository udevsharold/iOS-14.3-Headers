/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPAccessoryDiscoveryXPCClientProtocol.h>

@protocol OS_dispatch_queue, SPAccessoryDiscoveryXPCProtocol;
@class SPAccessoryDiscoverySessionState, NSObject, FMXPCServiceDescription, FMXPCSession, NSString;

@interface SPAccessoryDiscoveryAndPairingSession : NSObject <SPAccessoryDiscoveryXPCClientProtocol> {

	SPAccessoryDiscoverySessionState* _state;
	/*^block*/id _sessionInvalidatedCallback;
	/*^block*/id _accessoryDiscoveredCallback;
	/*^block*/id _accessoryDiscoveryErrorCallback;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPAccessoryDiscoveryXPCProtocol> _proxy;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPAccessoryDiscoveryXPCProtocol> proxy;                 //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,copy) SPAccessoryDiscoverySessionState * state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id sessionInvalidatedCallback;                               //@synthesize sessionInvalidatedCallback=_sessionInvalidatedCallback - In the implementation block
@property (nonatomic,copy) id accessoryDiscoveredCallback;                              //@synthesize accessoryDiscoveredCallback=_accessoryDiscoveredCallback - In the implementation block
@property (nonatomic,copy) id accessoryDiscoveryErrorCallback;                          //@synthesize accessoryDiscoveryErrorCallback=_accessoryDiscoveryErrorCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPAccessoryDiscoveryXPCProtocol>)arg1 ;
-(id<SPAccessoryDiscoveryXPCProtocol>)proxy;
-(FMXPCSession *)session;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)init;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)exportedInterface;
-(FMXPCServiceDescription *)serviceDescription;
-(SPAccessoryDiscoverySessionState *)state;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(id)remoteInterface;
-(id)initWithPreviousState:(id)arg1 ;
-(void)interruptionHandler:(id)arg1 ;
-(void)invalidationHandler:(id)arg1 ;
-(id)sessionInvalidatedCallback;
-(void)setAccessoryDiscoveredCallback:(id)arg1 ;
-(void)setSessionInvalidatedCallback:(id)arg1 ;
-(id)accessoryDiscoveredCallback;
-(id)accessoryDiscoveryErrorCallback;
-(void)setAccessoryDiscoveryErrorCallback:(id)arg1 ;
-(oneway void)discoveredAccessory:(id)arg1 ;
-(oneway void)lostAccessory:(id)arg1 ;
-(oneway void)accessoryDiscoveryError:(id)arg1 ;
-(void)startAccessoryDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)initiatePairingWith:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopAccessoryDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizePairingWith:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidatePairingWith:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(void)setState:(SPAccessoryDiscoverySessionState *)arg1 ;
@end
