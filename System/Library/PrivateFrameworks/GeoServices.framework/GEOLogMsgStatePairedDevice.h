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

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {

	GEOLogMsgStateDeviceIdentifier* _pairedDeviceIdentifier;
	int _type;
	BOOL _isConnected;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasPairedDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * pairedDeviceIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasPairedDeviceIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(id)initWithJSON:(id)arg1 ;
-(void)setPairedDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(GEOLogMsgStateDeviceIdentifier *)pairedDeviceIdentifier;
-(BOOL)isConnected;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasIsConnected;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end

