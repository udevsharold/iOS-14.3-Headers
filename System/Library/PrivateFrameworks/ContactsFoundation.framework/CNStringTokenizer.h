/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class CNUnfairLock;

@interface CNStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	CNUnfairLock* _lock;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
+(id)tokenizeString:(id)arg1 ;
+(BOOL)isCharacterNonBreaking:(unsigned short)arg1 ;
+(id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)init;
-(void)dealloc;
-(CNUnfairLock *)lock;
-(id)tokenizeString:(id)arg1 ;
-(id)rangesOfWordTokensInString:(id)arg1 ;
-(id)rangesOfWordUnitTokensInString:(id)arg1 ;
@end
