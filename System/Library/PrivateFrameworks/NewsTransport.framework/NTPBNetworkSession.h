/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBNetworkSession : PBCodable <NSCopying> {

	unsigned long long _sessionID;
	int _cellularRadioAccessTechnology;
	BOOL _wifiReachable;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) int pbCellularRadioAccessTechnology; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                 //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
-(int)pbCellularRadioAccessTechnology;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(unsigned long long)sessionID;
-(BOOL)hasSessionID;
-(int)cellularRadioAccessTechnology;
-(BOOL)wifiReachable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(BOOL)hasWifiReachable;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setWifiReachable:(BOOL)arg1 ;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
