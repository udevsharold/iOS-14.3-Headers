/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface AKCarouselAlertClientConnection : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedConnection;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)presentAlertWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAlert:(id)arg1 ;
-(id)init;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(void)unsafe_invalidate;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)connection;
@end
