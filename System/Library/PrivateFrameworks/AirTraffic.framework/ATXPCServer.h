/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSMutableDictionary, NSSet;

@interface ATXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	/*^block*/id _lockdownHandler;
	/*^block*/id _disconnectHandler;
	/*^block*/id _shutdownHandler;
	/*^block*/id _defaultMessageHandler;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _idleTimerSource;
	BOOL _timerHasFiredSinceLastMessage;

}

@property (nonatomic,copy) id lockdownHandler;                    //@synthesize lockdownHandler=_lockdownHandler - In the implementation block
@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id shutdownHandler;                    //@synthesize shutdownHandler=_shutdownHandler - In the implementation block
@property (nonatomic,readonly) NSSet * connections;               //@synthesize connections=_connections - In the implementation block
-(NSSet *)connections;
-(void)dealloc;
-(id)shutdownHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(BOOL)_doingWork;
-(id)lockdownHandler;
-(void)setLockdownHandler:(id)arg1 ;
-(void)_resetMessageFlag;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(void)_rescheduleIdleTimerSourceWithInterval:(double)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_runShutdownHandler;
-(void)setIdleTimerInterval:(double)arg1 ;
-(id)defaultMessageHandler;
-(id)disconnectHandler;
-(id)_connections;
-(void)setShutdownHandler:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 ;
@end

