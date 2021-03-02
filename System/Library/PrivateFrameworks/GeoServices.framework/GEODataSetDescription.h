/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEODataSetDescription : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _dataSetDescription;
	unsigned _identifier;
	struct {
		unsigned has_identifier : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) BOOL hasDataSetDescription; 
@property (nonatomic,retain) NSString * dataSetDescription; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)dataSetDescription;
-(void)setDataSetDescription:(NSString *)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(BOOL)hasDataSetDescription;
-(unsigned)identifier;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
