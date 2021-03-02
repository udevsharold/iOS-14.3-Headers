/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICCloudAvailability.h>

@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;
@class NSXPCConnection, NSObject, NSString;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProviding> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)isCellularDataRestricted;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)canShowCloudMusic;
-(BOOL)isCellularDataRestrictedForVideos;
-(id<ICCloudServerListenerEndpointProviding>)listenerEndpointProvider;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSXPCConnection *)xpcConnection;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
@end
