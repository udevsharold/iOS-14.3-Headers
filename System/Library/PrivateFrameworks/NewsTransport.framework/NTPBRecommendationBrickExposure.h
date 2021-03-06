/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	int _recommendationBrickType;
	NSMutableArray* _recommendedFeedIds;
	BOOL _exposedFromReferredUser;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                     //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedFeedIds;              //@synthesize recommendedFeedIds=_recommendedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendationBrickType; 
@property (assign,nonatomic) int recommendationBrickType;                      //@synthesize recommendationBrickType=_recommendationBrickType - In the implementation block
@property (assign,nonatomic) BOOL hasExposedFromReferredUser; 
@property (assign,nonatomic) BOOL exposedFromReferredUser;                     //@synthesize exposedFromReferredUser=_exposedFromReferredUser - In the implementation block
+(Class)recommendedFeedIdsType;
-(int)feedType;
-(BOOL)hasFeedType;
-(void)setHasFeedType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)addRecommendedFeedIds:(id)arg1 ;
-(void)clearRecommendedFeedIds;
-(unsigned long long)recommendedFeedIdsCount;
-(NSMutableArray *)recommendedFeedIds;
-(id)recommendedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setExposedFromReferredUser:(BOOL)arg1 ;
-(void)setHasExposedFromReferredUser:(BOOL)arg1 ;
-(BOOL)hasExposedFromReferredUser;
-(void)setRecommendedFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)exposedFromReferredUser;
-(NSString *)feedId;
-(id)description;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg1 ;
-(int)recommendationBrickType;
-(void)setRecommendationBrickType:(int)arg1 ;
-(void)setHasRecommendationBrickType:(BOOL)arg1 ;
-(BOOL)hasRecommendationBrickType;
-(id)recommendationBrickTypeAsString:(int)arg1 ;
-(int)StringAsRecommendationBrickType:(id)arg1 ;
-(BOOL)hasFeedId;
-(void)setFeedType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

