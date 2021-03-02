/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache {

	TSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue; 
-(id)objectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)unload;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(TSUReadWriteQueue *)readWriteQueue;
-(void)removeAllObjects;
-(id)initWithName:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(BOOL)hasFlushableContent;
@end
