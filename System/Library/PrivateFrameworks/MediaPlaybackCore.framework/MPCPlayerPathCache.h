/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MPCPlayerPathCache : NSObject {

	NSMutableDictionary* _playerPathResolutions;
	NSMutableDictionary* _playerPathObservers;
	NSMutableDictionary* _endpointObservers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * playerPathResolutions;              //@synthesize playerPathResolutions=_playerPathResolutions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * playerPathObservers;                //@synthesize playerPathObservers=_playerPathObservers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * endpointObservers;                  //@synthesize endpointObservers=_endpointObservers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)sharedCache;
-(NSMutableDictionary *)playerPathResolutions;
-(NSMutableDictionary *)endpointObservers;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)dealloc;
-(id)resolvedPlayerPathForPlayerPath:(id)arg1 ;
-(NSMutableDictionary *)playerPathObservers;
-(id)_init;
-(void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1 ;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2 ;
-(id)observationTokenDescriptionForPlayerPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

