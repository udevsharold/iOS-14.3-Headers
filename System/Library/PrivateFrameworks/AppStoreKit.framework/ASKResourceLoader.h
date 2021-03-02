/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableDictionary, NSMapTable, ASKResourceCache;

@interface ASKResourceLoader : NSObject {

	long long _requestCountMap[3];
	BOOL _isInBackground;
	NSOperationQueue* _accessQueue;
	NSOperationQueue* _notificationQueue;
	NSOperationQueue* _requestQueue;
	NSMutableDictionary* _pendingOperations;
	NSMapTable* _requestsByCacheKey;
	ASKResourceCache* _cachedResources;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingOperations;              //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByCacheKey;                      //@synthesize requestsByCacheKey=_requestsByCacheKey - In the implementation block
@property (nonatomic,readonly) ASKResourceCache * cachedResources;                   //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestQueue;                      //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL isInBackground;                                  //@synthesize isInBackground=_isInBackground - In the implementation block
-(NSOperationQueue *)requestQueue;
-(NSOperationQueue *)notificationQueue;
-(NSMutableDictionary *)pendingOperations;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(void)_commonInit;
-(BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2 ;
-(id)init;
-(id)cachedResourcesForCacheKey:(id)arg1 ;
-(void)reprioritizeOperations;
-(void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3 ;
-(void)cancelAllRequests;
-(void)postDidIdleIfIdle;
-(void)dealloc;
-(void)postDidLoadAllForReason:(long long)arg1 ;
-(long long)currentQualityOfService;
-(void)cancelRequestForCacheKey:(id)arg1 ;
-(ASKResourceCache *)cachedResources;
-(id)description;
-(id)initWithParentResourceLoader:(id)arg1 ;
-(void)removeAllCachedResources;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(BOOL)isInBackground;
-(NSMapTable *)requestsByCacheKey;
-(BOOL)isIdle;
-(id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4 ;
-(void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(void)enterForeground;
-(void)addResource:(id)arg1 forCacheKey:(id)arg2 ;
-(void)enterBackground;
-(id)requestKeyForCacheKey:(id)arg1 ;
-(void)postDidBeginLoadingIfIdle;
-(NSOperationQueue *)accessQueue;
@end
