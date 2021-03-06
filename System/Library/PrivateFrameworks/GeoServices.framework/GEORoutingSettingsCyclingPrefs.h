/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {

	BOOL _autoRecordWorkout;
	BOOL _avoidBusyRoads;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	BOOL _eBike;
	struct {
		unsigned has_autoRecordWorkout : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_eBike : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (assign,nonatomic) BOOL hasEBike; 
@property (assign,nonatomic) BOOL eBike; 
@property (assign,nonatomic) BOOL hasAutoRecordWorkout; 
@property (assign,nonatomic) BOOL autoRecordWorkout; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)hasAvoidHills;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)avoidHills;
-(BOOL)hasAvoidBusyRoads;
-(BOOL)avoidBusyRoads;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(void)setAvoidHills:(BOOL)arg1 ;
-(BOOL)avoidStairs;
-(void)setAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasAvoidStairs;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(void)setEBike:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)autoRecordWorkout;
-(void)setHasAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)hasAutoRecordWorkout;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasEBike:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasEBike;
-(BOOL)eBike;
-(void)writeTo:(id)arg1 ;
@end

