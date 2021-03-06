/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFSearchSuggestion.h>
@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSData;


@protocol SFSearchSuggestion <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSArray * duplicateSuggestions; 
@property (nonatomic,copy) NSString * topicIdentifier; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL previouslyEngaged; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * utteranceText; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSMutableDictionary * serverFeatures; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)fbr;
-(NSData *)jsonData;
-(void)setQuery:(id)arg1;
-(BOOL)previouslyEngaged;
-(NSMutableDictionary *)serverFeatures;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(void)setTopicIdentifier:(id)arg1;
-(NSString *)utteranceText;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
-(NSString *)query;
-(void)setType:(int)arg1;
-(NSString *)topicIdentifier;
-(void)setFbr:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)detailText;
-(NSString *)identifier;
-(int)type;
-(void)setSuggestion:(id)arg1;
-(void)setDetailText:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setServerFeatures:(id)arg1;
-(void)setUtteranceText:(id)arg1;
-(void)setPreviouslyEngaged:(BOOL)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(NSString *)suggestion;
-(double)score;
-(void)setScore:(double)arg1;
-(NSString *)bundleIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSData;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _previouslyEngaged;
	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	double _score;
	NSArray* _duplicateSuggestions;
	NSString* _topicIdentifier;
	NSString* _bundleIdentifier;
	NSString* _fbr;
	NSString* _scopedSearchApplicationBundleIdentifier;
	NSString* _utteranceText;
	NSString* _detailText;
	NSMutableDictionary* _serverFeatures;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                                                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) double score;                                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * duplicateSuggestions;                                  //@synthesize duplicateSuggestions=_duplicateSuggestions - In the implementation block
@property (nonatomic,copy) NSString * topicIdentifier;                                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL previouslyEngaged;                                        //@synthesize previouslyEngaged=_previouslyEngaged - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier;              //@synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * utteranceText;                                        //@synthesize utteranceText=_utteranceText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                           //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * serverFeatures;                            //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 fbr:(id)arg5 ;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 fbr:(id)arg4 ;
-(NSString *)fbr;
-(NSData *)jsonData;
-(void)setQuery:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5 ;
-(BOOL)previouslyEngaged;
-(NSMutableDictionary *)serverFeatures;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(NSString *)utteranceText;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasPreviouslyEngaged;
-(NSString *)query;
-(void)setType:(int)arg1 ;
-(NSString *)topicIdentifier;
-(void)setFbr:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)detailText;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)type;
-(BOOL)hasScore;
-(void)setSuggestion:(NSString *)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setServerFeatures:(NSMutableDictionary *)arg1 ;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4 ;
-(void)setUtteranceText:(NSString *)arg1 ;
-(void)setPreviouslyEngaged:(BOOL)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)suggestion;
-(BOOL)hasType;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

