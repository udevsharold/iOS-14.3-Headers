/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HelpKit/HelpKit-Structs.h>
@class NSString;

@interface HLPHelpSearchResult : NSObject {

	double _relevanceScore;
	long long _weight;
	long long _matchCount;
	NSString* _identifier;

}

@property (assign,nonatomic) double relevanceScore;              //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (assign,nonatomic) long long weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setRelevanceScore:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setWeight:(long long)arg1 ;
-(long long)weight;
-(long long)matchCount;
-(id)debugDescription;
-(double)relevanceScore;
-(void)setMatchCount:(long long)arg1 ;
@end
