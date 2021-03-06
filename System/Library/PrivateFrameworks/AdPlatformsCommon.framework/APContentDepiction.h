/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface APContentDepiction : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	unsigned long long _placement;
	unsigned long long _adjacency;
	NSString* _language;
	NSString* _locale;
	NSArray* _searchTerms;
	NSArray* _keywords;
	NSArray* _categories;

}

@property (retain) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long placement;              //@synthesize placement=_placement - In the implementation block
@property (assign) unsigned long long adjacency;              //@synthesize adjacency=_adjacency - In the implementation block
@property (retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (retain) NSString * locale;                         //@synthesize locale=_locale - In the implementation block
@property (retain) NSArray * searchTerms;                     //@synthesize searchTerms=_searchTerms - In the implementation block
@property (retain) NSArray * keywords;                        //@synthesize keywords=_keywords - In the implementation block
@property (retain) NSArray * categories;                      //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned long long)placement;
-(void)setKeywords:(NSArray *)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)keywords;
-(void)setLocale:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(NSUUID *)identifier;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)adjacency;
-(id)init:(unsigned long long)arg1 adjacency:(unsigned long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerm:(id)arg5 keywords:(id)arg6 categories:(id)arg7 ;
-(void)setAdjacency:(unsigned long long)arg1 ;
@end

