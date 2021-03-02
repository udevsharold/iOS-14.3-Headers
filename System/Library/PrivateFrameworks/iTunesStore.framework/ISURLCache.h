/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLCache, ISURLCacheConfiguration, NSString;

@interface ISURLCache : NSObject {

	NSURLCache* _cache;
	ISURLCacheConfiguration* _configuration;

}

@property (readonly) NSString * persistentIdentifier; 
@property (nonatomic,readonly) unsigned long long currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long currentMemoryUsage; 
@property (nonatomic,readonly) unsigned long long diskCapacity; 
@property (nonatomic,readonly) unsigned long long memoryCapacity; 
+(id)cacheDirectoryPath;
-(id)cachedResponseForRequest:(id)arg1 ;
-(id)init;
-(unsigned long long)currentDiskUsage;
-(NSString *)persistentIdentifier;
-(unsigned long long)currentMemoryUsage;
-(void)dealloc;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)saveMemoryCacheToDisk;
-(unsigned long long)memoryCapacity;
-(void)removeAllCachedResponses;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(unsigned long long)diskCapacity;
-(id)initWithCacheConfiguration:(id)arg1 ;
-(void)reloadWithCacheConfiguration:(id)arg1 ;
-(void)purgeMemoryCache;
@end
