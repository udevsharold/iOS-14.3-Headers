/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSTextStorage, NSMutableIndexSet, NSIndexSet;

@interface _UISearchBarTextFieldTokenCounter : NSObject {

	id _textStorageObservation;
	NSTextStorage* _textStorage;
	NSMutableIndexSet* _tokenCharacterIndexes;

}

@property (nonatomic,readonly) NSIndexSet * tokenCharacterIndexes; 
@property (nonatomic,readonly) NSRange characterRangeOfAllTokens; 
-(NSRange)characterRangeOfTextAfterLastToken;
-(void)_handleProcessEditing;
-(NSRange)characterRangeForSubrangeOfTextAfterLastToken:(NSRange)arg1 ;
-(unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1 ;
-(NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(NSRange)arg1 ;
-(NSIndexSet *)tokenCharacterIndexes;
-(unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1 ;
-(id)initWithTextStorage:(id)arg1 ;
-(void)_addCharacterIndexesOfTokensInRange:(NSRange)arg1 toIndexSet:(id)arg2 ;
-(unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1 ;
-(id)tokenAtCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)characterRangeOfAllTokens;
@end

