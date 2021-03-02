/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMerchantLookupBrandResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _merchantBrandLookupResponses;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * merchantBrandLookupResponses; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)merchantBrandLookupResponseType;
-(int)statusCode;
-(void)setStatusCode:(int)arg1 ;
-(id)statusCodeAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasStatusCode;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(void)addMerchantBrandLookupResponse:(id)arg1 ;
-(unsigned long long)merchantBrandLookupResponsesCount;
-(void)clearMerchantBrandLookupResponses;
-(id)merchantBrandLookupResponseAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)merchantBrandLookupResponses;
-(void)setMerchantBrandLookupResponses:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
