/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOServiceVersion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _versionDomains;
	unsigned _minimumVersion;
	struct {
		unsigned has_minimumVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasMinimumVersion; 
@property (assign,nonatomic) unsigned minimumVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)versionDomainType;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)versionDomainsCount;
-(void)addVersionDomain:(id)arg1 ;
-(NSMutableArray *)versionDomains;
-(void)setMinimumVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasMinimumVersion:(BOOL)arg1 ;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)minimumVersion;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMinimumVersion;
-(void)writeTo:(id)arg1 ;
@end

