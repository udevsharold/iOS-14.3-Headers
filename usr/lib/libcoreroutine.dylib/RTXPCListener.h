/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface RTXPCListener : NSXPCListener <NSXPCListenerDelegate> {

	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connectedClients;
	NSMutableArray* _disconnectedClients;

}

@property (nonatomic,readonly) NSString * machServiceName;                        //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connectedClients;                 //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,readonly) NSMutableArray * disconnectedClients;              //@synthesize disconnectedClients=_disconnectedClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSMutableArray *)connectedClients;
-(void)_shutdown;
-(void)setup;
-(void)_setup;
-(NSString *)machServiceName;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)logClients;
-(NSMutableArray *)disconnectedClients;
@end
