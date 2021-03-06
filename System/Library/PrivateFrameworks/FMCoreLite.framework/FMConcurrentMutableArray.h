/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject {

	NSMutableArray* _underlyingArray;
	FMReadWriteLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * underlyingArray;              //@synthesize underlyingArray=_underlyingArray - In the implementation block
@property (nonatomic,retain) FMReadWriteLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSMutableArray *)underlyingArray;
-(id)nativeArray;
-(void)setUnderlyingArray:(NSMutableArray *)arg1 ;
-(void)setLock:(FMReadWriteLock *)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(FMReadWriteLock *)lock;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
@end

