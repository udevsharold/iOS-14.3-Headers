/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <SearchFoundation/SFResultSection.h>

@class NSArray, NSString, NSNumber, NSMutableOrderedSet, SPGroupHeadingResult;

@interface SFMutableResultSection : SFResultSection {

	BOOL _doNotFold;
	BOOL _pinToTop;
	BOOL _serialized;
	BOOL _isGlanceCategory;
	unsigned _domain;
	int _source;
	NSArray* _hiddenExtResults;
	NSString* _groupName;
	NSNumber* _groupId;
	NSMutableOrderedSet* _resultSet;
	SPGroupHeadingResult* _headerResult;
	NSString* _relatedSectionBundleIdentifier;
	NSString* _sourceDomain;
	NSString* _resultSetIdentifier;

}

@property (nonatomic,retain) NSString * groupName;                                   //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSNumber * groupId;                                     //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * resultSet;                        //@synthesize resultSet=_resultSet - In the implementation block
@property (nonatomic,retain) SPGroupHeadingResult * headerResult;                    //@synthesize headerResult=_headerResult - In the implementation block
@property (assign) BOOL doNotFold;                                                   //@synthesize doNotFold=_doNotFold - In the implementation block
@property (assign,nonatomic) unsigned domain;                                        //@synthesize domain=_domain - In the implementation block
@property (assign) BOOL pinToTop;                                                    //@synthesize pinToTop=_pinToTop - In the implementation block
@property (nonatomic,retain) NSString * relatedSectionBundleIdentifier;              //@synthesize relatedSectionBundleIdentifier=_relatedSectionBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * hiddenExtResults;                             //@synthesize hiddenExtResults=_hiddenExtResults - In the implementation block
@property (assign) int source;                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceDomain;                                //@synthesize sourceDomain=_sourceDomain - In the implementation block
@property (nonatomic,retain) NSString * resultSetIdentifier;                         //@synthesize resultSetIdentifier=_resultSetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL serialized;                                        //@synthesize serialized=_serialized - In the implementation block
@property (assign,nonatomic) BOOL isGlanceCategory;                                  //@synthesize isGlanceCategory=_isGlanceCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSerialized:(BOOL)arg1 ;
-(void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2 ;
-(void)clearResults;
-(void)addResults:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)results;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupName;
-(void)setDoNotFold:(BOOL)arg1 ;
-(void)setResults:(id)arg1 ;
-(NSMutableOrderedSet *)resultSet;
-(BOOL)doNotFold;
-(id)copy;
-(id)copySectionRemovingResults:(id)arg1 ;
-(void)addResultsFromArray:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)hiddenExtResults;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(unsigned)domain;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(id)description;
-(id)initWithPrototype:(id)arg1 ;
-(SPGroupHeadingResult *)headerResult;
-(BOOL)isGlanceCategory;
-(void)moveResultsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)pinToTop;
-(void)removeResults:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(NSString *)relatedSectionBundleIdentifier;
-(void)setDomain:(unsigned)arg1 ;
-(id)objectForFeedbackWithResultsArray:(id)arg1 ;
-(void)removeResultsAtIndex:(unsigned long long)arg1 ;
-(void)setPinToTop:(BOOL)arg1 ;
-(NSNumber *)groupId;
-(void)setGroupId:(NSNumber *)arg1 ;
-(void)setHiddenExtResults:(NSArray *)arg1 ;
-(int)source;
-(void)removeResultsInArray:(id)arg1 ;
-(id)initWithResultSection:(id)arg1 ;
-(void)setIsGlanceCategory:(BOOL)arg1 ;
-(BOOL)serialized;
-(void)addResults:(id)arg1 ;
-(void)removeResultsInRange:(NSRange)arg1 ;
-(void)setResultSet:(NSMutableOrderedSet *)arg1 ;
-(NSString *)resultSetIdentifier;
-(void)addHiddenExtResult:(id)arg1 ;
-(unsigned long long)resultsCount;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)setHeaderResult:(SPGroupHeadingResult *)arg1 ;
-(void)setRelatedSectionBundleIdentifier:(NSString *)arg1 ;
-(void)setResultSetIdentifier:(NSString *)arg1 ;
-(id)mutableDeepCopy;
-(void)setSourceDomain:(NSString *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)sourceDomain;
-(void)setSource:(int)arg1 ;
-(id)objectForFeedback;
-(void)encodeWithCoder:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
@end
