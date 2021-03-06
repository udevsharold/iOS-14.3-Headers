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

@class PBDataReader, PBUnknownFields, GEOPDPhoto, NSString;

@interface GEOPDUser : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _image;
	NSString* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_image : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(BOOL)hasImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDPhoto *)image;
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasName;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

