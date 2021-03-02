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

@class PBUnknownFields;

@interface GEOStopStepEVInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _gainedBatteryPercentage;
	unsigned long long _muid;
	double _remainingBatteryPercentage;
	unsigned _chargingTime;
	unsigned _gainedBatteryCharge;
	unsigned _gainedTravelRange;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_gainedBatteryPercentage : 1;
		unsigned has_muid : 1;
		unsigned has_remainingBatteryPercentage : 1;
		unsigned has_chargingTime : 1;
		unsigned has_gainedBatteryCharge : 1;
		unsigned has_gainedTravelRange : 1;
		unsigned has_zilchPathIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasGainedBatteryPercentage; 
@property (assign,nonatomic) double gainedBatteryPercentage; 
@property (assign,nonatomic) BOOL hasGainedTravelRange; 
@property (assign,nonatomic) unsigned gainedTravelRange; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasGainedBatteryCharge; 
@property (assign,nonatomic) unsigned gainedBatteryCharge; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) double remainingBatteryPercentage; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(unsigned long long)muid;
-(unsigned)chargingTime;
-(void)setChargingTime:(unsigned)arg1 ;
-(void)setGainedBatteryPercentage:(double)arg1 ;
-(BOOL)hasChargingTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGainedTravelRange:(unsigned)arg1 ;
-(void)setGainedBatteryCharge:(unsigned)arg1 ;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(double)gainedBatteryPercentage;
-(void)setHasGainedBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryPercentage;
-(unsigned)gainedTravelRange;
-(void)setHasGainedTravelRange:(BOOL)arg1 ;
-(BOOL)hasGainedTravelRange;
-(unsigned)gainedBatteryCharge;
-(BOOL)hasGainedBatteryCharge;
-(void)setHasGainedBatteryCharge:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setRemainingBatteryPercentage:(double)arg1 ;
-(double)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
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
-(BOOL)hasMuid;
-(void)writeTo:(id)arg1 ;
@end
