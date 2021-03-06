/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _location;
	int _cyclingDirection;
	int _drivingDirection;
	unsigned _significance;
	int _transitDirection;
	int _walkingDirection;
	BOOL _isApproximate;
	struct {
		unsigned has_cyclingDirection : 1;
		unsigned has_drivingDirection : 1;
		unsigned has_significance : 1;
		unsigned has_transitDirection : 1;
		unsigned has_walkingDirection : 1;
		unsigned has_isApproximate : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate; 
@property (assign,nonatomic) BOOL hasCyclingDirection; 
@property (assign,nonatomic) int cyclingDirection; 
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection; 
@property (assign,nonatomic) BOOL hasTransitDirection; 
@property (assign,nonatomic) int transitDirection; 
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) unsigned significance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasWalkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(void)setHasCyclingDirection:(BOOL)arg1 ;
-(id)drivingDirectionAsString:(int)arg1 ;
-(void)setTransitDirection:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(BOOL)hasSignificance;
-(BOOL)hasTransitDirection;
-(BOOL)readFrom:(id)arg1 ;
-(id)cyclingDirectionAsString:(int)arg1 ;
-(id)walkingDirectionAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)significance;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(GEOLatLng *)location;
-(unsigned long long)hash;
-(int)drivingDirection;
-(int)transitDirection;
-(int)walkingDirection;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(BOOL)hasCyclingDirection;
-(id)description;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)StringAsCyclingDirection:(id)arg1 ;
-(BOOL)hasDrivingDirection;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIsApproximate;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsApproximate:(BOOL)arg1 ;
-(int)StringAsTransitDirection:(id)arg1 ;
-(BOOL)isApproximate;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)cyclingDirection;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCyclingDirection:(int)arg1 ;
-(id)jsonRepresentation;
-(void)setHasSignificance:(BOOL)arg1 ;
-(void)setHasTransitDirection:(BOOL)arg1 ;
-(id)transitDirectionAsString:(int)arg1 ;
-(void)setSignificance:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDrivingDirection:(int)arg1 ;
@end

