/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsManagerLeakyAPStats : PBCodable <NSCopying> {

	unsigned long long _hashCode;
	unsigned long long _timestamp;
	unsigned long long _version;
	unsigned _leakyApDecision;
	NSData* _leakyApStats;
	NSData* _oui;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
@property (nonatomic,readonly) BOOL hasLeakyApStats; 
@property (nonatomic,retain) NSData * leakyApStats;                     //@synthesize leakyApStats=_leakyApStats - In the implementation block
@property (assign,nonatomic) BOOL hasLeakyApDecision; 
@property (assign,nonatomic) unsigned leakyApDecision;                  //@synthesize leakyApDecision=_leakyApDecision - In the implementation block
@property (assign,nonatomic) BOOL hasHashCode; 
@property (assign,nonatomic) unsigned long long hashCode;               //@synthesize hashCode=_hashCode - In the implementation block
-(NSData *)oui;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasVersion;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(BOOL)hasOui;
-(void)writeTo:(id)arg1 ;
-(void)setHashCode:(unsigned long long)arg1 ;
-(BOOL)hasHashCode;
-(unsigned long long)hashCode;
-(void)setLeakyApStats:(NSData *)arg1 ;
-(BOOL)hasLeakyApStats;
-(void)setLeakyApDecision:(unsigned)arg1 ;
-(void)setHasLeakyApDecision:(BOOL)arg1 ;
-(BOOL)hasLeakyApDecision;
-(void)setHasHashCode:(BOOL)arg1 ;
-(NSData *)leakyApStats;
-(unsigned)leakyApDecision;
@end
