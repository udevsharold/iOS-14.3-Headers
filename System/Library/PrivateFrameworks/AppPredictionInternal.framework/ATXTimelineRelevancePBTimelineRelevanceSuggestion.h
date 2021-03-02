/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying> {

	NSMutableArray* _abuseControlOutcomes;
	NSString* _suggestionID;
	NSMutableArray* _timelineRelevanceScoreEntrys;

}

@property (nonatomic,readonly) BOOL hasSuggestionID; 
@property (nonatomic,retain) NSString * suggestionID;                                    //@synthesize suggestionID=_suggestionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * abuseControlOutcomes;                      //@synthesize abuseControlOutcomes=_abuseControlOutcomes - In the implementation block
@property (nonatomic,retain) NSMutableArray * timelineRelevanceScoreEntrys;              //@synthesize timelineRelevanceScoreEntrys=_timelineRelevanceScoreEntrys - In the implementation block
+(Class)abuseControlOutcomeType;
+(Class)timelineRelevanceScoreEntryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)suggestionID;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSuggestionID:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)addAbuseControlOutcome:(id)arg1 ;
-(void)addTimelineRelevanceScoreEntry:(id)arg1 ;
-(unsigned long long)abuseControlOutcomesCount;
-(void)clearAbuseControlOutcomes;
-(id)abuseControlOutcomeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timelineRelevanceScoreEntrysCount;
-(void)clearTimelineRelevanceScoreEntrys;
-(id)timelineRelevanceScoreEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestionID;
-(NSMutableArray *)abuseControlOutcomes;
-(void)setAbuseControlOutcomes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timelineRelevanceScoreEntrys;
-(void)setTimelineRelevanceScoreEntrys:(NSMutableArray *)arg1 ;
@end
