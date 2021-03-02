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

@class PBDataReader, NSString, GEOComposedWaypoint;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _destinationName;
	GEOComposedWaypoint* _destination;
	GEOComposedWaypoint* _origin;
	double _travelTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	struct {
		unsigned has_travelTime : 1;
		unsigned has_transportType : 1;
		unsigned read_destinationName : 1;
		unsigned read_destination : 1;
		unsigned read_origin : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName; 
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) double travelTime; 
+(BOOL)isValid:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(GEOComposedWaypoint *)destination;
-(BOOL)hasOrigin;
-(id)init;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOComposedWaypoint *)origin;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(int)transportType;
-(void)setTravelTime:(double)arg1 ;
-(BOOL)hasTransportType;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(double)travelTime;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTravelTime;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasDestination;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(BOOL)hasDestinationName;
-(id)jsonRepresentation;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(void)writeTo:(id)arg1 ;
@end
