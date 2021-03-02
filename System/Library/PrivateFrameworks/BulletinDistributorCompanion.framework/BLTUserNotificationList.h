/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface BLTUserNotificationList : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)_queue_ensureConnection;
-(id)init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidate;
-(void)_queue_invalidatedConnection;
-(void)_queue_interruptedConnection;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)connection;
-(void)isNotificationImminentWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
