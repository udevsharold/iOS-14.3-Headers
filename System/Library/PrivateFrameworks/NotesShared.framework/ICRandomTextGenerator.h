/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject {

	unsigned long long _language;
	ICRandomNumberGenerator* _randomNumberGenerator;

}

@property (nonatomic,retain) ICRandomNumberGenerator * randomNumberGenerator;              //@synthesize randomNumberGenerator=_randomNumberGenerator - In the implementation block
@property (assign,nonatomic) unsigned long long language;                                  //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL isRightToLeftLanguage; 
+(id)loadWordsForLanguage:(unsigned long long)arg1 ;
+(id)wordsForLanguage:(unsigned long long)arg1 ;
+(BOOL)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1 ;
+(id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(BOOL)arg2 ;
-(void)setLanguage:(unsigned long long)arg1 ;
-(id)word;
-(id)paragraph;
-(unsigned long long)language;
-(void)setRandomNumberGenerator:(ICRandomNumberGenerator *)arg1 ;
-(id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2 ;
-(id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4 ;
-(id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2 ;
-(id)initWithRandomNumberGenerator:(id)arg1 ;
-(id)lineOfText;
-(BOOL)isRightToLeftLanguage;
-(id)generateWordsWithMinLength:(unsigned long long)arg1 ;
-(id)sentence;
-(ICRandomNumberGenerator *)randomNumberGenerator;
@end
