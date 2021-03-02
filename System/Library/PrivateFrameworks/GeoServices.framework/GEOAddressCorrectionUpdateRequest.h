/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	NSMutableArray* _addressResults;
	NSMutableArray* _significantLocations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionStatus;
	struct {
		unsigned has_correctionStatus : 1;
		unsigned read_addressID : 1;
		unsigned read_addressResults : 1;
		unsigned read_significantLocations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionStatus; 
@property (assign,nonatomic) int correctionStatus; 
@property (nonatomic,retain) NSMutableArray * significantLocations; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (nonatomic,retain) NSMutableArray * addressResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)significantLocationType;
+(Class)addressResultType;
-(void)clearSensitiveFields;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)addressID;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasAddressID;
-(void)setAddressID:(NSString *)arg1 ;
-(void)addAddressResult:(id)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(NSMutableArray *)significantLocations;
-(NSMutableArray *)addressResults;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(void)setCorrectionStatus:(int)arg1 ;
-(unsigned long long)addressResultsCount;
-(void)clearAddressResults;
-(id)addressResultAtIndex:(unsigned long long)arg1 ;
-(int)correctionStatus;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(BOOL)hasCorrectionStatus;
-(id)correctionStatusAsString:(int)arg1 ;
-(int)StringAsCorrectionStatus:(id)arg1 ;
-(void)setAddressResults:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
