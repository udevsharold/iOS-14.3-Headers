/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, IDSGroupContextNotifyingObserver;

@interface IDSDaemonProtocolController : NSObject {

	NSXPCConnection* _connection;
	IDSGroupContextNotifyingObserver* _observer;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource; 
@property (nonatomic,readonly) id<IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware; 
@property (nonatomic,retain) IDSGroupContextNotifyingObserver * observer;                                                 //@synthesize observer=_observer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<IDSGroupContextCacheMiddlewareDaemonProtocol>)groupContextCacheMiddleware;
-(IDSGroupContextNotifyingObserver *)observer;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setObserver:(IDSGroupContextNotifyingObserver *)arg1 ;
-(NSXPCConnection *)connection;
-(id<IDSGroupContextDataSourceDaemonProtocol>)groupContextDataSource;
@end

