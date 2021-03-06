/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSERemovedEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _hardwareType;
	unsigned _reason;
	NSData* _uuidReference;
	BOOL _hasCardEmulationStarted;
	BOOL _hasExpressTransactionStarted;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                            //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasHasCardEmulationStarted; 
@property (assign,nonatomic) BOOL hasCardEmulationStarted;                      //@synthesize hasCardEmulationStarted=_hasCardEmulationStarted - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                             //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) BOOL hasHasExpressTransactionStarted; 
@property (assign,nonatomic) BOOL hasExpressTransactionStarted;                 //@synthesize hasExpressTransactionStarted=_hasExpressTransactionStarted - In the implementation block
-(unsigned)hardwareType;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasReason;
-(id)description;
-(unsigned)reason;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setReason:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasHardwareType;
-(void)setHasReason:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasHasExpressTransactionStarted:(BOOL)arg1 ;
-(BOOL)hasHasExpressTransactionStarted;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(void)setHasHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasHasCardEmulationStarted;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
@end

