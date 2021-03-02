/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString;

@interface RKLexicalEntity : NSObject {

	NSString* _string;
	NSString* _tokenType;
	NSString* _partOfSpeech;
	NSString* _lemma;
	NSString* _language;
	NSString* _internalWord;
	NSRange _tokenRange;

}

@property (retain) NSString * internalWord;              //@synthesize internalWord=_internalWord - In the implementation block
@property (retain) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (retain) NSString * tokenType;                 //@synthesize tokenType=_tokenType - In the implementation block
@property (retain) NSString * partOfSpeech;              //@synthesize partOfSpeech=_partOfSpeech - In the implementation block
@property (retain) NSString * lemma;                     //@synthesize lemma=_lemma - In the implementation block
@property (retain) NSString * language;                  //@synthesize language=_language - In the implementation block
@property (assign) NSRange tokenRange;                   //@synthesize tokenRange=_tokenRange - In the implementation block
@property (readonly) NSString * word; 
-(void)setLanguage:(NSString *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)word;
-(NSString *)string;
-(NSString *)lemma;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)tokenType;
-(NSString *)language;
-(id)description;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(NSString *)internalWord;
-(void)setInternalWord:(NSString *)arg1 ;
-(void)setLemma:(NSString *)arg1 ;
-(NSRange)tokenRange;
-(void)setTokenRange:(NSRange)arg1 ;
@end
