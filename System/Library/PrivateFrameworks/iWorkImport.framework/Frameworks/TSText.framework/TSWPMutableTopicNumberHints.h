/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPTopicNumberHints.h>

@class TSUPointerKeyDictionary, NSString;

@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints> {

	TSUPointerKeyDictionary* _numbersForListStyle;
	unsigned long long _charIndex;
	unsigned long long _validThroughCharIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)p_deepCopyDictionary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)entries;
-(void)reset;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)charIndex;
-(void)offsetCharIndexBy:(long long)arg1 startCharIndex:(unsigned long long)arg2 ;
-(void)advanceToCharIndex:(unsigned long long)arg1 storage:(id)arg2 ;
-(unsigned long long)charIndexValidThrough;
-(void)setCharIndex:(unsigned long long)arg1 validThroughCharIndex:(unsigned long long)arg2 ;
-(void)unarchiveSetEntries:(id)arg1 forListStyle:(id)arg2 ;
-(void)setTopicNumber:(unsigned long long)arg1 forList:(id)arg2 level:(unsigned long long)arg3 charIndex:(unsigned long long)arg4 ;
-(BOOL)isEquivalentStateToTopicNumberHints:(id)arg1 ;
-(void)backUpByOneParagraphWithPreviousState:(id)arg1 storage:(id)arg2 ;
-(unsigned long long)nextTopicNumberForList:(id)arg1 level:(unsigned long long)arg2 ;
-(unsigned long long)previousCharIndexForList:(id)arg1 level:(unsigned long long)arg2 ;
@end

