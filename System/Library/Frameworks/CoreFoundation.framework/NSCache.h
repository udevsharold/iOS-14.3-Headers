/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) BOOL evictsObjectsWithDiscardedContent; 
-(id)mapTableRepresentation;
-(void)__apply:(/*^block*/id)arg1 ;
-(unsigned long long)countLimit;
-(unsigned long long)totalCostLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)minimumObjectCount;
-(void)setName:(NSString *)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(NSString *)name;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)removeAllObjects;
-(id<NSCacheDelegate>)delegate;
-(void)removeObjectForKey:(id)arg1 ;
@end
