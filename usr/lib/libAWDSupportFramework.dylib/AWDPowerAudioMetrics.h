/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW21* _audioVolumeLevelDurationSpeakers;
	SCD_Struct_AW21* _audioVolumeLevelDurations;
	unsigned long long _timestamp;
	unsigned _audioHeadsetDuration;
	unsigned _audioHeadsetPowerMicroWatt;
	unsigned _audioSpeakerDuration;
	unsigned _audioSpeakerPowerMicroWatt;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSpeakerPowerMicroWatt; 
@property (assign,nonatomic) unsigned audioSpeakerPowerMicroWatt;                                     //@synthesize audioSpeakerPowerMicroWatt=_audioSpeakerPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasAudioHeadsetPowerMicroWatt; 
@property (assign,nonatomic) unsigned audioHeadsetPowerMicroWatt;                                     //@synthesize audioHeadsetPowerMicroWatt=_audioHeadsetPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSpeakerDuration; 
@property (assign,nonatomic) unsigned audioSpeakerDuration;                                           //@synthesize audioSpeakerDuration=_audioSpeakerDuration - In the implementation block
@property (assign,nonatomic) BOOL hasAudioHeadsetDuration; 
@property (assign,nonatomic) unsigned audioHeadsetDuration;                                           //@synthesize audioHeadsetDuration=_audioHeadsetDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long audioVolumeLevelDurationsCount; 
@property (nonatomic,readonly) unsigned* audioVolumeLevelDurations; 
@property (nonatomic,readonly) unsigned long long audioVolumeLevelDurationSpeakersCount; 
@property (nonatomic,readonly) unsigned* audioVolumeLevelDurationSpeakers; 
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setAudioHeadsetDuration:(unsigned)arg1 ;
-(void)setAudioHeadsetPowerMicroWatt:(unsigned)arg1 ;
-(void)setAudioSpeakerDuration:(unsigned)arg1 ;
-(void)setAudioSpeakerPowerMicroWatt:(unsigned)arg1 ;
-(void)setAudioVolumeLevelDurations:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)audioVolumeLevelDurationsCount;
-(void)clearAudioVolumeLevelDurations;
-(unsigned)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1 ;
-(void)addAudioVolumeLevelDuration:(unsigned)arg1 ;
-(unsigned long long)audioVolumeLevelDurationSpeakersCount;
-(void)clearAudioVolumeLevelDurationSpeakers;
-(unsigned)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1 ;
-(void)addAudioVolumeLevelDurationSpeaker:(unsigned)arg1 ;
-(void)setHasAudioSpeakerPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasAudioSpeakerPowerMicroWatt;
-(void)setHasAudioHeadsetPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasAudioHeadsetPowerMicroWatt;
-(void)setHasAudioSpeakerDuration:(BOOL)arg1 ;
-(BOOL)hasAudioSpeakerDuration;
-(void)setHasAudioHeadsetDuration:(BOOL)arg1 ;
-(BOOL)hasAudioHeadsetDuration;
-(unsigned*)audioVolumeLevelDurations;
-(unsigned*)audioVolumeLevelDurationSpeakers;
-(void)setAudioVolumeLevelDurationSpeakers:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)audioSpeakerPowerMicroWatt;
-(unsigned)audioHeadsetPowerMicroWatt;
-(unsigned)audioSpeakerDuration;
-(unsigned)audioHeadsetDuration;
@end
