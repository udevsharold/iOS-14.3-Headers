/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSXPCConnection, NSString, NSXPCInterface, NSObject;

@interface _PASXPCClientHelper : NSObject {

	opaque_pthread_mutex_t _connLock;
	NSXPCConnection* _conn;
	NSString* _serviceName;
	NSXPCInterface* _whitelistedServerInterface;
	NSXPCInterface* _whitelistedClientInterface;
	id _serverInitiatedRequestHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSObject*<OS_os_log> _logHandle;

}
-(id)remoteObjectProxy;
-(id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 interruptionHandler:(/*^block*/id)arg5 invalidationHandler:(/*^block*/id)arg6 logHandle:(id)arg7 ;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_locked_establishConnection;
@end
