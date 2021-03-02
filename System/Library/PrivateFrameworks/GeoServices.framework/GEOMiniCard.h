/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOFormattedString;

@interface GEOMiniCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonText;
	GEOFormattedString* _detail;
	GEOFormattedString* _metadata;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _shouldEmphasize;
	struct {
		unsigned has_shouldEmphasize : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonText : 1;
		unsigned read_detail : 1;
		unsigned read_metadata : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) BOOL hasButtonText; 
@property (nonatomic,retain) NSString * buttonText; 
@property (assign,nonatomic) BOOL hasShouldEmphasize; 
@property (assign,nonatomic) BOOL shouldEmphasize; 
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) GEOFormattedString * metadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setMetadata:(GEOFormattedString *)arg1 ;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(BOOL)hasTitle;
-(id)init;
-(GEOFormattedString *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setShouldEmphasize:(BOOL)arg1 ;
-(BOOL)hasButtonText;
-(BOOL)shouldEmphasize;
-(void)setHasShouldEmphasize:(BOOL)arg1 ;
-(BOOL)hasShouldEmphasize;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasMetadata;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDetail;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)detail;
-(void)writeTo:(id)arg1 ;
-(GEOFormattedString *)title;
@end
