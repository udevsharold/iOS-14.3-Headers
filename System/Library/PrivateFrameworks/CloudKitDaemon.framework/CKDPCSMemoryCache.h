/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;
@class NSMutableDictionary, NSObject;

@interface CKDPCSMemoryCache : NSObject {

	BOOL _memoryStatusChanged;
	int _fakeMemoryWarningToken;
	unsigned long long _maxEntries;
	double _minAge;
	NSMutableDictionary* _cacheEntries;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _memoryNotificationSource;
	unsigned long long _memoryStatus;
	id<NSObject> _memoryCacheEvictNotificationObserver;
	double _oldestCacheEntry;
	unsigned long long _memoryCacheRequestCount;
	unsigned long long _memoryCacheHitCount;
	unsigned long long _memoryCacheHighwaterCount;
	unsigned long long _memoryCacheDeleteCount;
	unsigned long long _memoryCacheUpdateCount;
	unsigned long long _memoryCacheEvictCount;

}

@property (nonatomic,retain) NSMutableDictionary * cacheEntries;                                  //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                            //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryNotificationSource;              //@synthesize memoryNotificationSource=_memoryNotificationSource - In the implementation block
@property (assign) unsigned long long memoryStatus;                                               //@synthesize memoryStatus=_memoryStatus - In the implementation block
@property (assign) BOOL memoryStatusChanged;                                                      //@synthesize memoryStatusChanged=_memoryStatusChanged - In the implementation block
@property (nonatomic,retain) id<NSObject> memoryCacheEvictNotificationObserver;                   //@synthesize memoryCacheEvictNotificationObserver=_memoryCacheEvictNotificationObserver - In the implementation block
@property (assign) int fakeMemoryWarningToken;                                                    //@synthesize fakeMemoryWarningToken=_fakeMemoryWarningToken - In the implementation block
@property (assign) double oldestCacheEntry;                                                       //@synthesize oldestCacheEntry=_oldestCacheEntry - In the implementation block
@property (assign) unsigned long long memoryCacheRequestCount;                                    //@synthesize memoryCacheRequestCount=_memoryCacheRequestCount - In the implementation block
@property (assign) unsigned long long memoryCacheHitCount;                                        //@synthesize memoryCacheHitCount=_memoryCacheHitCount - In the implementation block
@property (assign) unsigned long long memoryCacheHighwaterCount;                                  //@synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount - In the implementation block
@property (assign) unsigned long long memoryCacheDeleteCount;                                     //@synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount - In the implementation block
@property (assign) unsigned long long memoryCacheUpdateCount;                                     //@synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount - In the implementation block
@property (assign) unsigned long long memoryCacheEvictCount;                                      //@synthesize memoryCacheEvictCount=_memoryCacheEvictCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                       //@synthesize maxEntries=_maxEntries - In the implementation block
@property (assign,nonatomic) double minAge;                                                       //@synthesize minAge=_minAge - In the implementation block
+(void)registerEvictionTimer;
+(id)globalEvictQueue;
-(id)CKStatusReportArray;
-(unsigned long long)memoryStatus;
-(unsigned long long)maxEntries;
-(void)setMemoryCacheHighwaterCount:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheRequestCount;
-(id)init;
-(void)setMemoryCacheEvictCount:(unsigned long long)arg1 ;
-(BOOL)memoryStatusChanged;
-(void)dealloc;
-(void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_source>)memoryNotificationSource;
-(void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setFakeMemoryWarningToken:(int)arg1 ;
-(void)setMemoryCacheHitCount:(unsigned long long)arg1 ;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(void)_lockedEvictEntriesFromCache;
-(void)setMemoryCacheDeleteCount:(unsigned long long)arg1 ;
-(void)setMemoryNotificationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)fakeMemoryWarningToken;
-(unsigned long long)memoryCacheUpdateCount;
-(double)minAge;
-(double)oldestCacheEntry;
-(BOOL)hasStatusToReport;
-(void)setMemoryCacheRequestCount:(unsigned long long)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)cacheEntries;
-(unsigned long long)memoryCacheHitCount;
-(void)setOldestCacheEntry:(double)arg1 ;
-(void)setMemoryCacheUpdateCount:(unsigned long long)arg1 ;
-(void)runCacheEviction;
-(void)setMemoryCacheEvictNotificationObserver:(id<NSObject>)arg1 ;
-(unsigned long long)memoryCacheDeleteCount;
-(void)setMinAge:(double)arg1 ;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(void)clearCache;
-(unsigned long long)_cacheCount;
-(void)setMemoryStatus:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheHighwaterCount;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(unsigned long long)memoryCacheEvictCount;
-(void)setMemoryStatusChanged:(BOOL)arg1 ;
-(id<NSObject>)memoryCacheEvictNotificationObserver;
@end

