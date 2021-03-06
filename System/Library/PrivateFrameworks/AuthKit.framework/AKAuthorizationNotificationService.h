/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg1 ;
+(void)startServiceWithStateBroadcastHandler:(id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)startWithStateBroadcastHandler:(id)arg1 ;
-(void)_configureNotificationService;
-(void)_configureStateBroadcastService;
@end

