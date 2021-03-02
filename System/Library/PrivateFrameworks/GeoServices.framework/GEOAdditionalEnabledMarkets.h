/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSDictionary;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _offlineMarkets;
	NSMutableArray* _transitMarkets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_offlineMarkets : 1;
		unsigned read_transitMarkets : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets; 
@property (nonatomic,retain) NSMutableArray * offlineMarkets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)transitMarketType;
+(id)_additionalEnabledTransitMarkets;
+(id)additionalEnabledMarkets;
+(Class)offlineMarketType;
-(void)reload;
-(unsigned long long)offlineMarketsCount;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)clearOfflineMarkets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOfflineMarkets:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)queryItems;
-(id)offlineMarketAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)offlineMarkets;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addTransitMarket:(id)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(NSDictionary *)queryParameters;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)transitMarketsCount;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)clearTransitMarkets;
-(id)jsonRepresentation;
-(void)addOfflineMarket:(id)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitMarkets;
-(void)writeTo:(id)arg1 ;
@end
