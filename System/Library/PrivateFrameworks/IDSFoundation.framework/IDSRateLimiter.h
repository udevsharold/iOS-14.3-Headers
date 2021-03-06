/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject {

	os_unfair_lock_s _lock;
	long long _limit;
	double _timeLimit;
	NSMutableDictionary* _cacheMap;

}

@property (assign,nonatomic) long long limit;                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double timeLimit;                            //@synthesize timeLimit=_timeLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheMap;              //@synthesize cacheMap=_cacheMap - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                       //@synthesize lock=_lock - In the implementation block
-(double)timeLimit;
-(void)setCacheMap:(NSMutableDictionary *)arg1 ;
-(id)_unlockedDescription;
-(void)noteItem:(id)arg1 ;
-(id)initWithLimit:(long long)arg1 timeLimit:(double)arg2 ;
-(long long)limit;
-(BOOL)underLimitForItem:(id)arg1 ;
-(id)description;
-(double)timeToUnderLimit:(id)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)clearItem:(id)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(void)setLimit:(long long)arg1 ;
-(os_unfair_lock_s)lock;
-(NSMutableDictionary *)cacheMap;
-(void)cleanupExpiredItems;
@end

