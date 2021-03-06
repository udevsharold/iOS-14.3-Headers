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

@class PBUnknownFields, NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned long long _customIconId;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasCustomIconId; 
@property (assign,nonatomic) unsigned long long customIconId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(id)attributesForTransitLine:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(id)attributesForTransitSystem:(id)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)setHasCustomIconId:(BOOL)arg1 ;
-(id)initWithGEOFeatureStyleAttributes:(id)arg1 ;
-(BOOL)hasCustomIconId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCustomIconId:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)customIconId;
-(NSMutableArray *)attributes;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)attributesCount;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addAttribute:(id)arg1 ;
-(void)clearAttributes;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

