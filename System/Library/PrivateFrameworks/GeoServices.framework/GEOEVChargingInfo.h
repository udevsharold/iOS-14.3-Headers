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

@class PBUnknownFields, GEOChargerPlugsInfo;

@interface GEOEVChargingInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOChargerPlugsInfo* _chargerPlugsInfo;
	unsigned _batteryChargeAfterCharging;
	unsigned _batteryPercentageAfterCharging;
	unsigned _chargingTime;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasBatteryPercentageAfterCharging; 
@property (assign,nonatomic) unsigned batteryPercentageAfterCharging; 
@property (assign,nonatomic) BOOL hasBatteryChargeAfterCharging; 
@property (assign,nonatomic) unsigned batteryChargeAfterCharging; 
@property (nonatomic,readonly) BOOL hasChargerPlugsInfo; 
@property (nonatomic,retain) GEOChargerPlugsInfo * chargerPlugsInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)chargingTime;
-(void)setChargingTime:(unsigned)arg1 ;
-(BOOL)hasChargingTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(GEOChargerPlugsInfo *)chargerPlugsInfo;
-(void)setBatteryPercentageAfterCharging:(unsigned)arg1 ;
-(void)setBatteryChargeAfterCharging:(unsigned)arg1 ;
-(void)setChargerPlugsInfo:(GEOChargerPlugsInfo *)arg1 ;
-(unsigned)batteryPercentageAfterCharging;
-(void)setHasBatteryPercentageAfterCharging:(BOOL)arg1 ;
-(BOOL)hasBatteryPercentageAfterCharging;
-(unsigned)batteryChargeAfterCharging;
-(BOOL)hasBatteryChargeAfterCharging;
-(void)setHasBatteryChargeAfterCharging:(BOOL)arg1 ;
-(BOOL)hasChargerPlugsInfo;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
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
