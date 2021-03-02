/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXNetworkExtensionMessageControllerHostConnectionDelegate.h>

@class NSMutableSet, NSMapTable, NSXPCListener, NSString;

@interface CXNetworkExtensionMessageControllerHost : NSObject <NSXPCListenerDelegate, CXNetworkExtensionMessageControllerHostConnectionDelegate> {

	os_unfair_lock_s _accessorLock;
	NSMutableSet* _connections;
	NSMapTable* _delegateToQueue;
	NSXPCListener* _xpcListener;

}

@property (nonatomic,readonly) os_unfair_lock_s accessorLock;              //@synthesize accessorLock=_accessorLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * connections;                 //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;               //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMapTable *)delegateToQueue;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSXPCListener *)xpcListener;
-(os_unfair_lock_s)accessorLock;
-(id)init;
-(NSMutableSet *)connections;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)networkExtensionMessageControllerHostConnectionInvalidated:(id)arg1 ;
-(void)networkExtensionMessageControllerHostConnection:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3 ;
@end
