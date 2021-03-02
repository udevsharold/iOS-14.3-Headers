/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {

	NSData* _lightProfileUUID;
	NSData* _uuid;
	BOOL _naturalLightingEnabled;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasNaturalLightingEnabled; 
@property (assign,nonatomic) BOOL naturalLightingEnabled;                 //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasLightProfileUUID; 
@property (nonatomic,retain) NSData * lightProfileUUID;                   //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
-(void)setUuid:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)uuid;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)lightProfileUUID;
-(void)setLightProfileUUID:(NSData *)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(void)setHasNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)hasNaturalLightingEnabled;
-(BOOL)hasLightProfileUUID;
-(BOOL)naturalLightingEnabled;
-(void)writeTo:(id)arg1 ;
@end
