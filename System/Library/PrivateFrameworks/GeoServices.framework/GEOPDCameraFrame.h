/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDCameraFrame : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	double _pitch;
	double _roll;
	double _yaw;
	struct {
		unsigned has_altitude : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_pitch : 1;
		unsigned has_roll : 1;
		unsigned has_yaw : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) BOOL hasYaw; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) BOOL hasRoll; 
@property (assign,nonatomic) double roll; 
+(BOOL)isValid:(id)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)pitch;
-(void)setHasYaw:(BOOL)arg1 ;
-(double)roll;
-(double)altitude;
-(double)yaw;
-(void)setHasRoll:(BOOL)arg1 ;
-(BOOL)hasRoll;
-(BOOL)hasPitch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)longitude;
-(BOOL)hasLatitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLongitude;
-(BOOL)hasAltitude;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setYaw:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(BOOL)hasYaw;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setLatitude:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setHasPitch:(BOOL)arg1 ;
-(void)setRoll:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

