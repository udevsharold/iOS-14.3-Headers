/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPBTransitShield, GEOPBTransitIcon;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _accessibilityString;
	GEOPBTransitShield* _iconFallbackShield;
	GEOPBTransitIcon* _icon;
	GEOPBTransitShield* _shield;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _artworkType;
	int _artworkUse;
	int _badge;
	struct {
		unsigned has_artworkType : 1;
		unsigned has_artworkUse : 1;
		unsigned has_badge : 1;
		unsigned read_unknownFields : 1;
		unsigned read_accessibilityString : 1;
		unsigned read_iconFallbackShield : 1;
		unsigned read_icon : 1;
		unsigned read_shield : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) int artworkSourceType; 
@property (nonatomic,readonly) int artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasArtworkType; 
@property (assign,nonatomic) int artworkType; 
@property (assign,nonatomic) BOOL hasArtworkUse; 
@property (assign,nonatomic) int artworkUse; 
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) GEOPBTransitShield * shield; 
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPBTransitIcon * icon; 
@property (nonatomic,readonly) BOOL hasIconFallbackShield; 
@property (nonatomic,retain) GEOPBTransitShield * iconFallbackShield; 
@property (assign,nonatomic) BOOL hasBadge; 
@property (assign,nonatomic) int badge; 
@property (nonatomic,readonly) BOOL hasAccessibilityString; 
@property (nonatomic,retain) NSString * accessibilityString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(GEOPBTransitShield *)shield;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPBTransitIcon *)icon;
-(BOOL)hasIcon;
-(BOOL)hasBadge;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setIcon:(GEOPBTransitIcon *)arg1 ;
-(NSString *)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)artworkType;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasShield;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBadge:(int)arg1 ;
-(void)setHasBadge:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)artworkUse;
-(GEOPBTransitShield *)iconFallbackShield;
-(NSString *)accessibilityString;
-(void)setArtworkType:(int)arg1 ;
-(void)setArtworkUse:(int)arg1 ;
-(void)setIconFallbackShield:(GEOPBTransitShield *)arg1 ;
-(void)setAccessibilityString:(NSString *)arg1 ;
-(BOOL)hasArtworkUse;
-(void)setHasArtworkType:(BOOL)arg1 ;
-(BOOL)hasArtworkType;
-(id)artworkTypeAsString:(int)arg1 ;
-(int)StringAsArtworkType:(id)arg1 ;
-(id)badgeAsString:(int)arg1 ;
-(void)setHasArtworkUse:(BOOL)arg1 ;
-(id)artworkUseAsString:(int)arg1 ;
-(int)StringAsArtworkUse:(id)arg1 ;
-(BOOL)hasIconFallbackShield;
-(int)StringAsBadge:(id)arg1 ;
-(BOOL)hasAccessibilityString;
-(int)badge;
-(void)setShield:(GEOPBTransitShield *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

