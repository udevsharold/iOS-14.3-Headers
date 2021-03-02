/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSMutableDictionary;

@interface VSShortTermCache : NSObject {

	NSCache* _cache;
	NSMutableDictionary* _cacheTimer;

}

@property (nonatomic,retain) NSCache * cache;                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheTimer;              //@synthesize cacheTimer=_cacheTimer - In the implementation block
+(id)sharedInstance;
-(id)objectForKey:(id)arg1 ;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3 ;
-(NSMutableDictionary *)cacheTimer;
-(void)timeToLiveTimerFired:(id)arg1 ;
-(void)setCacheTimer:(NSMutableDictionary *)arg1 ;
@end
