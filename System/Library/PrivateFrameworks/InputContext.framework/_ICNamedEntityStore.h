/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSMutableOrderedSet, _ICTransientLexicon, NSArray;

@interface _ICNamedEntityStore : NSObject {

	NSMutableOrderedSet* _recentNamedEntityQueue;
	_ICTransientLexicon* _wordLexicon;
	_ICTransientLexicon* _phraseLexicon;
	NSArray* _lexicons;
	/*^block*/id _wordFilteringBlock;
	/*^block*/id _filteringBlock;

}

@property (nonatomic,copy) id filteringBlock;                   //@synthesize filteringBlock=_filteringBlock - In the implementation block
@property (nonatomic,readonly) NSArray * lexicons;              //@synthesize lexicons=_lexicons - In the implementation block
+(id)tokenize:(id)arg1 ;
+(id)lexiconViews;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(id)init;
-(void)updateQueue:(id)arg1 newEntity:(id)arg2 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(void)setFilteringBlock:(id)arg1 ;
-(id)filterWord:(id)arg1 ;
-(BOOL)areStringCharactersWhitelisted:(id)arg1 ;
-(BOOL)isValidNamedEntity:(id)arg1 explanation:(id*)arg2 ;
-(NSArray *)lexicons;
-(BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2 ;
-(void)addEntity:(id)arg1 isDurable:(BOOL)arg2 ;
-(USetRef)exemplarSetForSupportedLocales;
-(void)removeAllEntries;
-(void)updateQueueFromString:(id)arg1 newEntity:(id)arg2 ;
-(void)removeEntry:(id)arg1 ;
-(void)reloadRecents;
-(void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 source:(unsigned char)arg3 type:(unsigned char)arg4 ;
-(id)filteringBlock;
@end

