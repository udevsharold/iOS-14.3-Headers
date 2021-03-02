/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject {

	NSMutableArray* _tuples;
	NSMutableDictionary* _keyToTuple;

}

@property (nonatomic,retain) NSMutableArray * tuples;                       //@synthesize tuples=_tuples - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyToTuple;              //@synthesize keyToTuple=_keyToTuple - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(long long)keyAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableArray *)tuples;
-(void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 object:(id)arg3 ;
-(id)_tupleForKey:(long long)arg1 ;
-(void)enumerateKeysIndexesAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)removeKeyAtIndex:(unsigned long long)arg1 ;
-(void)removeAllKeys;
-(void)enumerateKeysAndIndexesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfKey:(long long)arg1 ;
-(id)objectForInt64Key:(long long)arg1 ;
-(void)shiftKeysStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(void)setTuples:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)keyToTuple;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(void)setKeyToTuple:(NSMutableDictionary *)arg1 ;
-(id)description;
-(unsigned long long)count;
@end
