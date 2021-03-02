/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTransitRouteDisplayStrings, GEOTransitEngineDebugData, NSData, NSMutableArray, GEOPBTransitRoutingIncidentMessage, NSString;

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _routeBadges;
	GEOTransitRouteDisplayStrings* _displayStrings;
	GEOTransitEngineDebugData* _engineDebugData;
	NSData* _routeHandle;
	NSMutableArray* _routePlanningArtworks;
	NSMutableArray* _sectionOptions;
	NSMutableArray* _sections;
	NSMutableArray* _steps;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _rank;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	BOOL _supportsRouteUpdates;
	struct {
		unsigned has_absEndTime : 1;
		unsigned has_absStartTime : 1;
		unsigned has_rank : 1;
		unsigned has_travelTimeAggressiveEstimate : 1;
		unsigned has_travelTimeConservativeEstimate : 1;
		unsigned has_supportsRouteUpdates : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeBadges : 1;
		unsigned read_displayStrings : 1;
		unsigned read_engineDebugData : 1;
		unsigned read_routeHandle : 1;
		unsigned read_routePlanningArtworks : 1;
		unsigned read_sectionOptions : 1;
		unsigned read_sections : 1;
		unsigned read_steps : 1;
		unsigned read_transitIncidentMessage : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isWalkingOnlyRoute,nonatomic,readonly) BOOL walkingOnlyRoute; 
@property (assign,nonatomic) BOOL hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime; 
@property (assign,nonatomic) BOOL hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime; 
@property (nonatomic,retain) NSMutableArray * steps; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle; 
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank; 
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage; 
@property (nonatomic,retain) NSMutableArray * routePlanningArtworks; 
@property (nonatomic,readonly) BOOL hasDisplayStrings; 
@property (nonatomic,retain) GEOTransitRouteDisplayStrings * displayStrings; 
@property (nonatomic,readonly) unsigned long long routeBadgesCount; 
@property (nonatomic,readonly) int* routeBadges; 
@property (nonatomic,retain) NSMutableArray * sectionOptions; 
@property (nonatomic,retain) NSMutableArray * sections; 
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate; 
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate; 
@property (nonatomic,readonly) BOOL hasEngineDebugData; 
@property (nonatomic,retain) GEOTransitEngineDebugData * engineDebugData; 
@property (assign,nonatomic) BOOL hasSupportsRouteUpdates; 
@property (assign,nonatomic) BOOL supportsRouteUpdates; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routePlanningArtworkType;
+(Class)sectionOptionType;
+(BOOL)isValid:(id)arg1 ;
+(Class)sectionType;
+(Class)stepsType;
-(void)setDisplayStrings:(GEOTransitRouteDisplayStrings *)arg1 ;
-(GEOTransitEngineDebugData *)engineDebugData;
-(void)addRoutePlanningArtwork:(id)arg1 ;
-(void)addRouteBadge:(int)arg1 ;
-(void)addSectionOption:(id)arg1 ;
-(void)setSupportsRouteUpdates:(BOOL)arg1 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setEngineDebugData:(GEOTransitEngineDebugData *)arg1 ;
-(unsigned long long)routePlanningArtworksCount;
-(void)clearRoutePlanningArtworks;
-(id)routePlanningArtworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)routeBadgesCount;
-(void)clearRouteBadges;
-(int)routeBadgeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionOptionsCount;
-(NSMutableArray *)sectionOptions;
-(void)clearSectionOptions;
-(id)sectionOptionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routePlanningArtworks;
-(void)setRoutePlanningArtworks:(NSMutableArray *)arg1 ;
-(void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setSectionOptions:(NSMutableArray *)arg1 ;
-(id)routeBadgesAsString:(int)arg1 ;
-(int)StringAsRouteBadges:(id)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(BOOL)supportsRouteUpdates;
-(unsigned)travelTimeConservativeEstimate;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasEngineDebugData;
-(BOOL)hasTravelTimeConservativeEstimate;
-(void)setHasSupportsRouteUpdates:(BOOL)arg1 ;
-(BOOL)hasSupportsRouteUpdates;
-(NSMutableArray *)steps;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)hasTransitIncidentMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(GEOTransitRouteDisplayStrings *)displayStrings;
-(void)setRank:(unsigned)arg1 ;
-(BOOL)hasRank;
-(BOOL)isWalkingOnlyRoute;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)rank;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)sections;
-(unsigned long long)hash;
-(BOOL)hasDisplayStrings;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(id)initWithJSON:(id)arg1 ;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)addSteps:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(unsigned long long)sectionsCount;
-(id)jsonRepresentation;
-(void)clearSections;
-(void)setRouteHandle:(NSData *)arg1 ;
-(BOOL)hasRouteHandle;
-(NSData *)routeHandle;
-(unsigned long long)stepsCount;
-(id)nextOptionForOption:(id)arg1 withRideIndex:(unsigned long long)arg2 ;
-(void)clearSteps;
-(unsigned)absEndTime;
-(void)addSection:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(unsigned)absStartTime;
-(void)setHasAbsStartTime:(BOOL)arg1 ;
-(BOOL)hasAbsStartTime;
-(void)setHasAbsEndTime:(BOOL)arg1 ;
-(BOOL)hasAbsEndTime;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(int*)routeBadges;
@end
