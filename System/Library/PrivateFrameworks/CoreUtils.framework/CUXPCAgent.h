/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableSet, NSXPCListener, NSObject, NSString, NSXPCListenerEndpoint, NSXPCInterface;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	NSMutableSet* _xpcCnxSet;
	NSXPCListener* _xpcListener;
	/*^block*/id _connectionStartedHandler;
	/*^block*/id _connectionEndedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSXPCInterface* _remoteObjectInterface;

}

@property (nonatomic,copy) id connectionStartedHandler;                               //@synthesize connectionStartedHandler=_connectionStartedHandler - In the implementation block
@property (nonatomic,copy) id connectionEndedHandler;                                 //@synthesize connectionEndedHandler=_connectionEndedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                      //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                  //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInvalidationHandler:(id)arg1 ;
-(id)exportedObject;
-(id)remoteObjectProxy;
-(id)connectionStartedHandler;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSXPCInterface *)remoteObjectInterface;
-(id)init;
-(void)setExportedObject:(id)arg1 ;
-(NSXPCInterface *)exportedInterface;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)connectionEndedHandler;
-(id)interruptionHandler;
-(void)setLabel:(NSString *)arg1 ;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_connectionInvalidated:(id)arg1 ;
-(NSString *)label;
-(void)invalidate;
-(id)invalidationHandler;
@end

