/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction, HMPBNaturalLightingAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {

	HMPBCharacteristicWriteAction* _characteristicWriteAction;
	HMPBMediaPlaybackAction* _mediaPlaybackAction;
	HMPBNaturalLightingAction* _naturalLightingAction;
	int _type;
	SCD_Struct_HM1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicWriteAction; 
@property (nonatomic,retain) HMPBCharacteristicWriteAction * characteristicWriteAction;              //@synthesize characteristicWriteAction=_characteristicWriteAction - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaPlaybackAction; 
@property (nonatomic,retain) HMPBMediaPlaybackAction * mediaPlaybackAction;                          //@synthesize mediaPlaybackAction=_mediaPlaybackAction - In the implementation block
@property (nonatomic,readonly) BOOL hasNaturalLightingAction; 
@property (nonatomic,retain) HMPBNaturalLightingAction * naturalLightingAction;                      //@synthesize naturalLightingAction=_naturalLightingAction - In the implementation block
-(void)setNaturalLightingAction:(HMPBNaturalLightingAction *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(HMPBCharacteristicWriteAction *)characteristicWriteAction;
-(HMPBMediaPlaybackAction *)mediaPlaybackAction;
-(HMPBNaturalLightingAction *)naturalLightingAction;
-(BOOL)hasCharacteristicWriteAction;
-(BOOL)hasMediaPlaybackAction;
-(BOOL)hasNaturalLightingAction;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setMediaPlaybackAction:(HMPBMediaPlaybackAction *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCharacteristicWriteAction:(HMPBCharacteristicWriteAction *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
@end

