/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSString* _portName;
	SSXPCServer* _server;

}

@property (readonly) NSString * namedPort; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)initWithNamedPort:(id)arg1 ;
-(void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2 ;
-(id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)namedPort;
@end

