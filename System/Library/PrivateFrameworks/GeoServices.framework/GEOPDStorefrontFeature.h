/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDOrientedBoundingBox;

@interface GEOPDStorefrontFeature : PBCodable <NSCopying> {

	GEOPDOrientedBoundingBox* _geometry;
	int _type;
	struct {
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasGeometry; 
@property (nonatomic,retain) GEOPDOrientedBoundingBox * geometry; 
+(BOOL)isValid:(id)arg1 ;
-(GEOPDOrientedBoundingBox *)geometry;
-(void)setGeometry:(GEOPDOrientedBoundingBox *)arg1 ;
-(BOOL)hasGeometry;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end

