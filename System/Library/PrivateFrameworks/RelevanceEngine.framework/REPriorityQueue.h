/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {

	CFBinaryHeapRef _binaryHeap;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                          //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id minimumObject; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)comparator;
-(void)dealloc;
-(void)insertObject:(id)arg1 ;
-(NSArray *)allObjects;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjects:(/*^block*/id)arg1 ;
-(id)minimumObject;
-(void)removeMinimumObject;
@end

