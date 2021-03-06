/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSUUID;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _eventDate;
	NSString* _eventName;
	NSString* _loiIdentifierString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _loiType;
	BOOL _isEventAllDay;
	struct {
		unsigned has_eventDate : 1;
		unsigned has_loiType : 1;
		unsigned has_isEventAllDay : 1;
		unsigned read_unknownFields : 1;
		unsigned read_eventName : 1;
		unsigned read_loiIdentifierString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSUUID * loiIdentifier; 
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType; 
@property (nonatomic,readonly) BOOL hasEventName; 
@property (nonatomic,retain) NSString * eventName; 
@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate; 
@property (assign,nonatomic) BOOL hasIsEventAllDay; 
@property (assign,nonatomic) BOOL isEventAllDay; 
@property (nonatomic,readonly) BOOL hasLoiIdentifierString; 
@property (nonatomic,retain) NSString * loiIdentifierString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasLoiType;
-(int)loiType;
-(void)setEventName:(NSString *)arg1 ;
-(void)setLoiType:(int)arg1 ;
-(NSString *)eventName;
-(void)setEventDate:(double)arg1 ;
-(id)init;
-(double)eventDate;
-(BOOL)isEventAllDay;
-(void)setLoiIdentifierString:(NSString *)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsEventAllDay:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasIsEventAllDay:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setLoiIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)hash;
-(int)StringAsLoiType:(id)arg1 ;
-(BOOL)hasLoiIdentifierString;
-(NSUUID *)loiIdentifier;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIsEventAllDay;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEventDate;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasEventName;
-(id)jsonRepresentation;
-(NSString *)loiIdentifierString;
-(void)writeTo:(id)arg1 ;
-(id)loiTypeAsString:(int)arg1 ;
-(void)setHasEventDate:(BOOL)arg1 ;
@end

