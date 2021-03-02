/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSArray;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject {

	NSIndexSet* _insertions;
	NSIndexSet* _deletions;
	NSIndexSet* _replacements;
	NSArray* _moves;

}

@property (nonatomic,retain) NSIndexSet * insertions;                  //@synthesize insertions=_insertions - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletions;                   //@synthesize deletions=_deletions - In the implementation block
@property (nonatomic,retain) NSIndexSet * replacements;                //@synthesize replacements=_replacements - In the implementation block
@property (nonatomic,retain) NSArray * moves;                          //@synthesize moves=_moves - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long netCountChange; 
-(BOOL)isEmpty;
-(NSIndexSet *)deletions;
-(NSIndexSet *)insertions;
-(NSArray *)moves;
-(id)description;
-(void)setReplacements:(NSIndexSet *)arg1 ;
-(NSIndexSet *)replacements;
-(long long)netCountChange;
-(void)setDeletions:(NSIndexSet *)arg1 ;
-(void)setInsertions:(NSIndexSet *)arg1 ;
-(void)setMoves:(NSArray *)arg1 ;
-(id)resultsByExcludingLocalDeletions:(id)arg1 ;
@end
