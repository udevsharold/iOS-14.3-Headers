/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol HKSPXPCConnectionProviderDelegate;
@class NSXPCConnection, HKSPXPCConnectionInfo, NSMutableDictionary, NSString;

@interface HKSPXPCConnectionProvider : NSObject <BSDescriptionProviding> {

	os_unfair_lock_s _connectionLock;
	os_unfair_lock_s _pendingMessagesLock;
	id<HKSPXPCConnectionProviderDelegate> _delegate;
	NSXPCConnection* _connection;
	HKSPXPCConnectionInfo* _connectionInfo;
	/*^block*/id _connectionProvider;
	NSMutableDictionary* _pendingMessages;

}

@property (nonatomic,readonly) os_unfair_lock_s connectionLock;                                  //@synthesize connectionLock=_connectionLock - In the implementation block
@property (nonatomic,readonly) HKSPXPCConnectionInfo * connectionInfo;                           //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,copy,readonly) id connectionProvider;                                       //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s pendingMessagesLock;                             //@synthesize pendingMessagesLock=_pendingMessagesLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingMessages;                            //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (assign,nonatomic,__weak) id<HKSPXPCConnectionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithConnectionInfo:(id)arg1 ;
-(os_unfair_lock_s)connectionLock;
-(void)_didInvalidateConnection;
-(HKSPXPCConnectionInfo *)connectionInfo;
-(id)initWithConnectionInfo:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)_didInterruptConnection;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_retryPendingMessages;
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(os_unfair_lock_s)pendingMessagesLock;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 doSynchronously:(BOOL)arg3 ;
-(void)_addPendingMessage:(id)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 connectionProvider:(/*^block*/id)arg2 ;
-(void)_removePendingMessage:(id)arg1 ;
-(void)setDelegate:(id<HKSPXPCConnectionProviderDelegate>)arg1 ;
-(void)didReceiveLifecycleNotification;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)connectionProvider;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id<HKSPXPCConnectionProviderDelegate>)delegate;
-(NSMutableDictionary *)pendingMessages;
@end

