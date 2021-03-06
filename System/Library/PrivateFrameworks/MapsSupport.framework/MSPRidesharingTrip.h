/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOComposedWaypoint* _endWaypoint;
	GEOComposedWaypoint* _startWaypoint;

}

@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * endWaypoint;                //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOComposedWaypoint *)endWaypoint;
-(BOOL)hasEndWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(BOOL)hasStartWaypoint;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
@end

