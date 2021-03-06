/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject {

	NSMutableDictionary* _underlyingDictionary;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)underlyingDictionary;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(id)nativeDictionary;
-(id)objectForKey:(id)arg1 withConstructor:(/*^block*/id)arg2 ;
-(id)popObjectforKey:(id)arg1 ;
-(void)setUnderlyingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAllObjects;
-(FMReadWriteLock *)lock;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
@end

