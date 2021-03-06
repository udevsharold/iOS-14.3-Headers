/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRSSessionClientToServerInterface.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class BSServiceConnectionListener, NSObject, NSHashTable, NSString;

@interface CRSSessionService : NSObject <CRSSessionClientToServerInterface, BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSHashTable* _connections;
	NSObject*<OS_os_transaction> _idleExitTransaction;

}

@property (nonatomic,retain) BSServiceConnectionListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                  //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;                                     //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> idleExitTransaction;              //@synthesize idleExitTransaction=_idleExitTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(BSServiceConnectionListener *)listener;
-(id)init;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(void)setConnections:(NSHashTable *)arg1 ;
-(NSHashTable *)connections;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(NSObject*<OS_os_transaction>)idleExitTransaction;
-(void)setIdleExitTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

