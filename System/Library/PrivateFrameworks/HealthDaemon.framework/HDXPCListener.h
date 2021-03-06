/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, HDXPCListenerDelegate, HDXPCListenerClientProvider;
@class NSXPCListener, NSObject, NSMapTable, NSString, NSArray, NSXPCListenerEndpoint;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _underlyingListener;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMapTable* _exportedObjectsByClient;
	id<HDXPCListenerDelegate> _delegate;
	id<HDXPCListenerClientProvider> _clientProvider;
	NSString* _label;

}

@property (copy,readonly) NSArray * allClients; 
@property (assign,nonatomic,__weak) id<HDXPCListenerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDXPCListenerClientProvider> clientProvider;              //@synthesize clientProvider=_clientProvider - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (copy,readonly) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceListener;
-(void)setConnectionQueue:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)initWithUnderlyingListener:(id)arg1 label:(id)arg2 ;
-(id)initWithLabel:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)init;
-(void)_handleConnectionInvalidationForClient:(id)arg1 exportedObject:(id)arg2 ;
-(void)dealloc;
-(void)_handleInterruptionWithClient:(id)arg1 exportedObject:(id)arg2 ;
-(void)setClientProvider:(id<HDXPCListenerClientProvider>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<HDXPCListenerClientProvider>)clientProvider;
-(NSArray *)allClients;
-(void)_handleInvalidationWithClient:(id)arg1 exportedObject:(id)arg2 ;
-(void)setDelegate:(id<HDXPCListenerDelegate>)arg1 ;
-(void)setQueue:(id)arg1 ;
-(NSString *)label;
-(void)invalidate;
-(id<HDXPCListenerDelegate>)delegate;
-(void)resume;
@end

