/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INCExtensionProxy.h>

@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy> {

	INCExtensionConnection* _connection;
	SARemoteDevice* _remoteDevice;

}

@property (nonatomic,readonly) INCExtensionConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) SARemoteDevice * remoteDevice;               //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,copy) id backgroundAppHandler; 
-(SARemoteDevice *)remoteDevice;
-(INCExtensionConnection *)connection;
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 andDevice:(id)arg2 ;
-(void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

