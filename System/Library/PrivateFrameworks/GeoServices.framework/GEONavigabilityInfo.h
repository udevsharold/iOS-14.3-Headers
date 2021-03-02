/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEONavigabilityInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _isBlocked;
	BOOL _isEvFeasible;
	struct {
		unsigned has_isBlocked : 1;
		unsigned has_isEvFeasible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIsEvFeasible; 
@property (assign,nonatomic) BOOL isEvFeasible; 
@property (assign,nonatomic) BOOL hasIsBlocked; 
@property (assign,nonatomic) BOOL isBlocked; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isBlocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsEvFeasible:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(BOOL)isEvFeasible;
-(void)setHasIsEvFeasible:(BOOL)arg1 ;
-(BOOL)hasIsEvFeasible;
-(void)setHasIsBlocked:(BOOL)arg1 ;
-(BOOL)hasIsBlocked;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
