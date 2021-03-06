/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AFFlowServiceConnection : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _pendingTransactionCount;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedConnection;
-(id)_connection;
-(id)_init;
-(void)invokeMethodOnRemoteWithBlock:(/*^block*/id)arg1 onError:(/*^block*/id)arg2 ;
-(void)_clearConnection;
@end

