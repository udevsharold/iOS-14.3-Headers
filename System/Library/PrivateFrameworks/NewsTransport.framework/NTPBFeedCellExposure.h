/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBFeedCellExposure : PBCodable <NSCopying> {

	int _displayRankInSection;
	NSData* _feedCellHostExposureId;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSString* _viewFrameInScreen;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRankInSection; 
@property (assign,nonatomic) int displayRankInSection;                      //@synthesize displayRankInSection=_displayRankInSection - In the implementation block
@property (nonatomic,readonly) BOOL hasViewFrameInScreen; 
@property (nonatomic,retain) NSString * viewFrameInScreen;                  //@synthesize viewFrameInScreen=_viewFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedCellHostExposureId; 
@property (nonatomic,retain) NSData * feedCellHostExposureId;               //@synthesize feedCellHostExposureId=_feedCellHostExposureId - In the implementation block
-(BOOL)hasViewFrameInScreen;
-(NSString *)viewFrameInScreen;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(id)feedCellSectionAsString:(int)arg1 ;
-(BOOL)hasFeedCellHostType;
-(int)feedType;
-(int)feedCellHostType;
-(BOOL)hasFeedType;
-(int)feedCellSection;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)isUserSubscribedToFeed;
-(void)setViewFrameInScreen:(NSString *)arg1 ;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setFeedCellHostType:(int)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeedCellHostExposureId:(NSData *)arg1 ;
-(void)setDisplayRankInSection:(int)arg1 ;
-(void)setHasDisplayRankInSection:(BOOL)arg1 ;
-(BOOL)hasDisplayRankInSection;
-(BOOL)hasFeedCellHostExposureId;
-(int)displayRankInSection;
-(NSData *)feedCellHostExposureId;
-(unsigned long long)hash;
-(NSString *)feedId;
-(id)description;
-(BOOL)hasFeedCellSection;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg1 ;
-(BOOL)hasFeedId;
-(BOOL)hasIsUserSubscribedToFeed;
-(void)setFeedType:(int)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

