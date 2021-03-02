/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDSAgent/PDSDaemonListenerVendor.h>

@protocol PDSCDCachePDSKVStore;
@class PDSConfiguration, PDSXPCServer, PDSCDCacheContainer, PDSBag, PDSEntryStore, PDSUserTracker, PDSCoordinator, PDSRequestQueue, NSString;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor> {

	PDSConfiguration* _configuration;
	PDSXPCServer* _XPCServer;
	PDSCDCacheContainer* _cacheContainer;
	PDSBag* _bag;
	PDSEntryStore* _entryStore;
	id<PDSCDCache><PDSKVStore> _underlyingStorage;
	PDSUserTracker* _userTracker;
	PDSCoordinator* _coordinator;
	PDSRequestQueue* _requestQueue;

}

@property (nonatomic,retain) PDSConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) PDSXPCServer * XPCServer;                                         //@synthesize XPCServer=_XPCServer - In the implementation block
@property (nonatomic,retain) PDSCDCacheContainer * cacheContainer;                             //@synthesize cacheContainer=_cacheContainer - In the implementation block
@property (nonatomic,retain) PDSBag * bag;                                                     //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) PDSEntryStore * entryStore;                                //@synthesize entryStore=_entryStore - In the implementation block
@property (assign,nonatomic,__weak) id<PDSCDCache><PDSKVStore> underlyingStorage;              //@synthesize underlyingStorage=_underlyingStorage - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;                                     //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,retain) PDSCoordinator * coordinator;                                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) PDSRequestQueue * requestQueue;                                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PDSRequestQueue *)requestQueue;
-(void)setRequestQueue:(PDSRequestQueue *)arg1 ;
-(PDSXPCServer *)XPCServer;
-(PDSCDCacheContainer *)cacheContainer;
-(id)_underlyingStorage;
-(id)remoteListenerForClientIDs:(id)arg1 ;
-(id)_entryStore;
-(void)setCoordinator:(PDSCoordinator *)arg1 ;
-(id)remoteInternalListener;
-(PDSUserTracker *)userTracker;
-(PDSConfiguration *)configuration;
-(PDSBag *)bag;
-(void)setCacheContainer:(PDSCDCacheContainer *)arg1 ;
-(id)remoteListenerForAllClientIDs;
-(void)setUnderlyingStorage:(id<PDSCDCache><PDSKVStore>)arg1 ;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(void)setBag:(PDSBag *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setXPCServer:(PDSXPCServer *)arg1 ;
-(void)setConfiguration:(PDSConfiguration *)arg1 ;
-(void)start;
-(void)setEntryStore:(PDSEntryStore *)arg1 ;
-(PDSCoordinator *)coordinator;
-(PDSEntryStore *)entryStore;
-(id<PDSCDCache><PDSKVStore>)underlyingStorage;
@end
