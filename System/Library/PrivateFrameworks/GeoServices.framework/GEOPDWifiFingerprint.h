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

@class PBUnknownFields;

@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _confidence;
	int _labelType;
	int _status;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)confidence;
-(id)statusAsString:(int)arg1 ;
-(int)labelType;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabelType:(int)arg1 ;
-(int)status;
-(void)setHasLabelType:(BOOL)arg1 ;
-(BOOL)hasLabelType;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setStatus:(int)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

