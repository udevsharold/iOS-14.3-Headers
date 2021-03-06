/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)interface;
+(id)defaultService;
-(void)addSubscriberWithEndpoint:(id)arg1 ;
-(id)sendDetailsCommand:(long long)arg1 timeout:(id)arg2 withError:(id*)arg3 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)activeClientsWithError:(id*)arg1 ;
-(BOOL)pingWithError:(id*)arg1 ;
-(BOOL)sendCommand:(long long)arg1 withError:(id*)arg2 ;
-(id)sendDetailsCommand:(long long)arg1 withError:(id*)arg2 ;
-(void)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithServiceBroker:(id)arg1 ;
@end

