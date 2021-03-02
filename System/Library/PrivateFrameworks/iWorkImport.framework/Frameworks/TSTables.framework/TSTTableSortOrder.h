/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexSet;

@interface TSTTableSortOrder : NSObject <NSCopying> {

	int _type;
	NSArray* _rules;
	NSIndexSet* _cachedIndexes;

}

@property (nonatomic,retain) NSIndexSet * cachedIndexes;                    //@synthesize cachedIndexes=_cachedIndexes - In the implementation block
@property (nonatomic,readonly) NSArray * rules;                             //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) int type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSIndexSet * baseColumnIndices; 
@property (nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned long long ruleCount; 
+(id)sortOrderWithRules:(id)arg1 type:(int)arg2 ;
+(id)sortOrderWithBaseColumn:(TSUModelColumnIndex)arg1 direction:(int)arg2 type:(int)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)rules;
-(unsigned long long)hash;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)ruleCount;
-(BOOL)empty;
-(id)initFromArchive:(const TableSortOrderArchive*)arg1 ;
-(void)encodeToArchive:(TableSortOrderArchive*)arg1 ;
-(id)initWithRules:(id)arg1 type:(int)arg2 ;
-(NSIndexSet *)baseColumnIndices;
-(id)sortOrderByChangingTypeTo:(int)arg1 ;
-(id)sortOrderByAddingRule:(id)arg1 ;
-(id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1 ;
-(id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2 ;
-(id)sortOrderByReplacingRulesWithRules:(id)arg1 ;
-(id)sortOrderByRemovingBaseColumnIndices:(id)arg1 ;
-(BOOL)containsAnyRulesInBaseColumns:(id)arg1 ;
-(NSIndexSet *)cachedIndexes;
-(void)setCachedIndexes:(NSIndexSet *)arg1 ;
@end
