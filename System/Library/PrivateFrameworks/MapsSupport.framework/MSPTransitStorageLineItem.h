/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLineItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, GEOMapRegion, PBUnknownFields, NSMutableArray, MSPTransitStorageLine, MSPTransitStorageAttribution, NSString, GEOMapItemIdentifier;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _incidents;
	MSPTransitStorageLine* _line;
	GEOMapRegion* _storedMapRegion;
	MSPTransitStorageAttribution* _transitAttribution;

}

@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) BOOL isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) MSPTransitStorageLine * line;                                    //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) BOOL hasStoredMapRegion; 
@property (nonatomic,retain) GEOMapRegion * storedMapRegion;                                  //@synthesize storedMapRegion=_storedMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) MSPTransitStorageAttribution * transitAttribution;               //@synthesize transitAttribution=_transitAttribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidents;                                      //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)incidentsType;
-(MSPTransitStorageAttribution *)transitAttribution;
-(unsigned long long)muid;
-(BOOL)isBus;
-(id<GEOTransitAttribution>)attribution;
-(BOOL)hasTransitAttribution;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasLine;
-(BOOL)readFrom:(id)arg1 ;
-(MSPTransitStorageLine *)line;
-(unsigned long long)hash;
-(GEOMapItemIdentifier *)identifier;
-(NSString *)description;
-(NSString *)lineColorString;
-(NSArray *)incidents;
-(void)addIncidents:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)setIncidents:(NSArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSArray *)labelItems;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasIncidentComponent;
-(BOOL)hasEncyclopedicInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)dictionaryRepresentation;
-(id)initWithLineItem:(id)arg1 ;
-(void)setLine:(MSPTransitStorageLine *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)name;
-(id<GEOTransitSystem>)system;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)hasLineColorString;
-(void)writeTo:(id)arg1 ;
-(void)setTransitAttribution:(MSPTransitStorageAttribution *)arg1 ;
-(void)setStoredMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)storedMapRegion;
-(BOOL)hasStoredMapRegion;
@end
