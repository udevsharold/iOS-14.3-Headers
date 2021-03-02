/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	double _idleTimerInterval;
	BOOL _shutdown;
	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned _qos;
	BOOL hadConnection;
	/*^block*/id _disconnectHandler;
	/*^block*/id _defaultMessageHandler;
	/*^block*/id _firstConnectionBlock;

}

@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id firstConnectionBlock;               //@synthesize firstConnectionBlock=_firstConnectionBlock - In the implementation block
-(BOOL)shutdown;
-(void)startListening;
-(id)firstConnectionBlock;
-(void)setFirstConnectionBlock:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 qos:(unsigned)arg2 ;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 qos:(unsigned)arg3 ;
-(void)dealloc;
-(void)setDisconnectHandler:(id)arg1 ;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultMessageHandler;
-(id)disconnectHandler;
@end
