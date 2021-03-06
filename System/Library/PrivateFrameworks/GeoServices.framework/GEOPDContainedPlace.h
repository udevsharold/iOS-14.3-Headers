/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDLinkedPlace;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _childPlaces;
	unsigned long long _featureId;
	GEOPDLinkedPlace* _parentPlace;
	NSMutableArray* _siblingPlaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_featureId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_childPlaces : 1;
		unsigned read_parentPlace : 1;
		unsigned read_siblingPlaces : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasParentPlace; 
@property (nonatomic,retain) GEOPDLinkedPlace * parentPlace; 
@property (nonatomic,retain) NSMutableArray * childPlaces; 
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,retain) NSMutableArray * siblingPlaces; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)siblingPlaceType;
+(BOOL)isValid:(id)arg1 ;
+(Class)childPlaceType;
-(id)init;
-(GEOPDLinkedPlace *)parentPlace;
-(void)setParentPlace:(GEOPDLinkedPlace *)arg1 ;
-(void)addSiblingPlace:(id)arg1 ;
-(unsigned long long)siblingPlacesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearSiblingPlaces;
-(id)siblingPlaceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasParentPlace;
-(NSMutableArray *)siblingPlaces;
-(void)setSiblingPlaces:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)childPlacesCount;
-(unsigned long long)featureId;
-(NSMutableArray *)childPlaces;
-(void)addChildPlace:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(BOOL)hasFeatureId;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearChildPlaces;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

