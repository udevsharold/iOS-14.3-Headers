/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _make;
	NSString* _model;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _batteryCapacity;
	struct {
		unsigned has_batteryCapacity : 1;
		unsigned read_make : 1;
		unsigned read_model : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,retain) NSString * make; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model; 
@property (assign,nonatomic) BOOL hasBatteryCapacity; 
@property (assign,nonatomic) unsigned batteryCapacity; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)batteryCapacity;
-(NSString *)make;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)model;
-(void)setMake:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMake;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasModel;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg1 ;
-(void)setBatteryCapacity:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setHasBatteryCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryCapacity;
-(void)writeTo:(id)arg1 ;
@end
