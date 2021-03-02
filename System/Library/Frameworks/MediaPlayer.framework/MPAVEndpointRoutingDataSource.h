/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, MRAVRoutingDiscoverySessionConfiguration;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	void* _discoverySession;
	void* _callbackToken;
	NSString* _routingContextUID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _endpoints;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpoints;                                                         //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,readonly) MRAVRoutingDiscoverySessionConfiguration * discoverySessionConfiguration; 
@property (nonatomic,copy) NSString * routingContextUID;                                                              //@synthesize routingContextUID=_routingContextUID - In the implementation block
-(void)setEndpoints:(NSMutableDictionary *)arg1 ;
-(NSString *)routingContextUID;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)endpoints;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)init;
-(MRAVRoutingDiscoverySessionConfiguration *)discoverySessionConfiguration;
-(void)dealloc;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(long long)discoveryMode;
-(void)setDiscoveryMode:(long long)arg1 ;
-(id)getRoutesForCategory:(id)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)devicePresenceDetected;
-(id)initWithThrottlingEnabled:(BOOL)arg1 ;
-(void)_endpointsDidChange:(id)arg1 ;
@end
