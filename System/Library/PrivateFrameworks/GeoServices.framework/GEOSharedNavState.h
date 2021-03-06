/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapItemStorage, GEOSharedNavETAInfo, NSString, GEOSharedNavRouteInfo, GEOSharedNavSenderInfo;

@interface GEOSharedNavState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _destinationInfo;
	GEOSharedNavETAInfo* _etaInfo;
	NSString* _groupIdentifier;
	double _localUpdatedTimestamp;
	GEOSharedNavRouteInfo* _routeInfo;
	GEOSharedNavSenderInfo* _senderInfo;
	double _updatedTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _protocolVersion;
	int _referenceFrame;
	unsigned _transportType;
	BOOL _arrived;
	BOOL _closed;
	BOOL _muted;
	struct {
		unsigned has_localUpdatedTimestamp : 1;
		unsigned has_updatedTimestamp : 1;
		unsigned has_protocolVersion : 1;
		unsigned has_referenceFrame : 1;
		unsigned has_transportType : 1;
		unsigned has_arrived : 1;
		unsigned has_closed : 1;
		unsigned has_muted : 1;
		unsigned read_unknownFields : 1;
		unsigned read_destinationInfo : 1;
		unsigned read_etaInfo : 1;
		unsigned read_groupIdentifier : 1;
		unsigned read_routeInfo : 1;
		unsigned read_senderInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDestinationInfo; 
@property (nonatomic,retain) GEOMapItemStorage * destinationInfo; 
@property (nonatomic,readonly) BOOL hasEtaInfo; 
@property (nonatomic,retain) GEOSharedNavETAInfo * etaInfo; 
@property (nonatomic,readonly) BOOL hasRouteInfo; 
@property (nonatomic,retain) GEOSharedNavRouteInfo * routeInfo; 
@property (nonatomic,readonly) BOOL hasSenderInfo; 
@property (nonatomic,retain) GEOSharedNavSenderInfo * senderInfo; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,retain) NSString * groupIdentifier; 
@property (assign,nonatomic) BOOL hasArrived; 
@property (assign,nonatomic) BOOL arrived; 
@property (assign,nonatomic) BOOL hasClosed; 
@property (assign,nonatomic) BOOL closed; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasMuted; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL hasUpdatedTimestamp; 
@property (assign,nonatomic) double updatedTimestamp; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType; 
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion; 
@property (assign,nonatomic) BOOL hasLocalUpdatedTimestamp; 
@property (assign,nonatomic) double localUpdatedTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)closed;
-(void)clearSensitiveFields;
-(BOOL)hasReferenceFrame;
-(BOOL)muted;
-(int)referenceFrame;
-(unsigned)protocolVersion;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOMapItemStorage *)destinationInfo;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)transportType;
-(BOOL)hasTransportType;
-(GEOSharedNavETAInfo *)etaInfo;
-(BOOL)arrived;
-(BOOL)readFrom:(id)arg1 ;
-(GEOSharedNavRouteInfo *)routeInfo;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasClosed;
-(BOOL)hasMuted;
-(BOOL)hasArrived;
-(GEOSharedNavSenderInfo *)senderInfo;
-(void)setEtaInfo:(GEOSharedNavETAInfo *)arg1 ;
-(void)setRouteInfo:(GEOSharedNavRouteInfo *)arg1 ;
-(void)setSenderInfo:(GEOSharedNavSenderInfo *)arg1 ;
-(void)setArrived:(BOOL)arg1 ;
-(void)setUpdatedTimestamp:(double)arg1 ;
-(void)setLocalUpdatedTimestamp:(double)arg1 ;
-(BOOL)hasEtaInfo;
-(BOOL)hasRouteInfo;
-(BOOL)hasSenderInfo;
-(void)setHasArrived:(BOOL)arg1 ;
-(void)setHasClosed:(BOOL)arg1 ;
-(void)setHasMuted:(BOOL)arg1 ;
-(double)updatedTimestamp;
-(void)setHasUpdatedTimestamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimestamp;
-(double)localUpdatedTimestamp;
-(void)setHasLocalUpdatedTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocalUpdatedTimestamp;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(id)referenceFrameAsString:(int)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDestinationInfo:(GEOMapItemStorage *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasDestinationInfo;
-(id)jsonRepresentation;
-(BOOL)hasGroupIdentifier;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReferenceFrame:(int)arg1 ;
-(BOOL)hasProtocolVersion;
@end

