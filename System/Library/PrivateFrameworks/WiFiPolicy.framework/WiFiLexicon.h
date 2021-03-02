/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class NSCharacterSet, NSMutableDictionary, NSSet;

@interface WiFiLexicon : NSObject {

	LXLexiconRef _lexiconEnglish;
	LXLexiconRef _lexiconUserLocale;
	NSCharacterSet* _tokenizationCharacterSet;
	NSCharacterSet* _tokenizationCharacterSetWithoutUpperCase;
	NSMutableDictionary* _stringCache;
	NSSet* _unwantedEnglishWords;

}

@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSet;                              //@synthesize tokenizationCharacterSet=_tokenizationCharacterSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSetWithoutUpperCase;              //@synthesize tokenizationCharacterSetWithoutUpperCase=_tokenizationCharacterSetWithoutUpperCase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stringCache;                                      //@synthesize stringCache=_stringCache - In the implementation block
@property (nonatomic,retain) NSSet * unwantedEnglishWords;                                           //@synthesize unwantedEnglishWords=_unwantedEnglishWords - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)stringCache;
-(NSSet *)unwantedEnglishWords;
-(id)_tokenizeStringForSpecialCharacters:(id)arg1 ;
-(NSCharacterSet *)tokenizationCharacterSet;
-(NSCharacterSet *)tokenizationCharacterSetWithoutUpperCase;
-(BOOL)stringContainsUnwantedWords:(id)arg1 ;
-(void)setTokenizationCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setTokenizationCharacterSetWithoutUpperCase:(NSCharacterSet *)arg1 ;
-(void)setStringCache:(NSMutableDictionary *)arg1 ;
-(void)setUnwantedEnglishWords:(NSSet *)arg1 ;
@end
