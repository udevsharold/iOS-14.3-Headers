/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBSearchBegin : PBCodable <NSCopying> {

	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _searchLocation;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                   //@synthesize searchLocation=_searchLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;              //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                //@synthesize creativeId=_creativeId - In the implementation block
-(NSString *)campaignId;
-(BOOL)hasCampaignId;
-(NSString *)creativeId;
-(void)setCampaignId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(NSString *)campaignType;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)searchLocation;
-(void)setSearchLocation:(int)arg1 ;
-(BOOL)hasSearchLocation;
-(void)setHasSearchLocation:(BOOL)arg1 ;
-(id)searchLocationAsString:(int)arg1 ;
-(int)StringAsSearchLocation:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

