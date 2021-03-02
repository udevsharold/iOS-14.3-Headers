/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTPBPrefetchConfig, NSDictionary;

@interface FCPrefetchConfiguration : NSObject {

	NTPBPrefetchConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _backgroundFetchEnabled;
	BOOL _shouldPrefetchForYouFeed;
	double _minimumBackgroundFetchInterval;
	unsigned long long _maximumFavoritesFeedsToPrefetch;
	double _prefetchedForYouExpiration;

}

@property (getter=isBackgroundFetchEnabled,nonatomic,readonly) BOOL backgroundFetchEnabled;              //@synthesize backgroundFetchEnabled=_backgroundFetchEnabled - In the implementation block
@property (nonatomic,readonly) double minimumBackgroundFetchInterval;                                    //@synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrefetchForYouFeed;                                            //@synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumFavoritesFeedsToPrefetch;                       //@synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch - In the implementation block
@property (nonatomic,readonly) double prefetchedForYouExpiration;                                        //@synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(BOOL)shouldPrefetchForYouFeed;
-(BOOL)isBackgroundFetchEnabled;
-(unsigned long long)hash;
-(double)prefetchedForYouExpiration;
-(unsigned long long)maximumFavoritesFeedsToPrefetch;
-(BOOL)isEqual:(id)arg1 ;
-(double)minimumBackgroundFetchInterval;
-(id)initWithDefaults;
-(id)initWithPBPrefetchConfig:(id)arg1 ;
@end
