/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(int)deleteWordsUptoContext:(id)arg1 ;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(id)init;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(void)pushWordToDocument:(id)arg1 ;
-(unsigned long long)wordsCount;
-(id)lastWord;
-(NSMutableDictionary *)leftContextToWordMap;
-(void)removeFromContextMap:(id)arg1 ;
-(id)wordsForContext:(id)arg1 ;
-(id)description;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
-(void)addToContextMap:(id)arg1 ;
-(NSMutableArray *)inDocumentWordsStack;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
@end
