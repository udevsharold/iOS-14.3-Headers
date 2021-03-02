/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject {

	NSArray* _orderedObjects;
	REDependencyGraph* _dependencyGraph;
	BOOL _needsUpdate;
	unsigned long long _batchCount;
	NSArray* _comparators;

}

@property (nonatomic,readonly) NSArray * comparators;                 //@synthesize comparators=_comparators - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(NSArray *)comparators;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)_createDependenciesForObject:(id)arg1 ;
-(void)_performOrMarkUpdate;
-(void)_updateContentOrder;
-(id)initWithComparators:(id)arg1 ;
-(void)sortAllObjects;
@end
