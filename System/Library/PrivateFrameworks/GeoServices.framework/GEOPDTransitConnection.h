/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDMapsIdentifier, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _entityNameString;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	NSMutableArray* _transitLabels;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entityNameString : 1;
		unsigned read_mapsId : 1;
		unsigned read_transitLabels : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSMutableArray * transitLabels; 
@property (nonatomic,readonly) BOOL hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)transitLabelType;
+(BOOL)isValid:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMapsId;
-(unsigned long long)muid;
-(id)init;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)entityNameString;
-(void)addTransitLabel:(id)arg1 ;
-(void)setEntityNameString:(NSString *)arg1 ;
-(unsigned long long)transitLabelsCount;
-(void)clearTransitLabels;
-(id)transitLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitLabels;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(BOOL)hasEntityNameString;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMuid;
-(void)writeTo:(id)arg1 ;
@end

