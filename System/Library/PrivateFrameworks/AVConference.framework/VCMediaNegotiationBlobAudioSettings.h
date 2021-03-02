/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {

	unsigned _audioUnitModel;
	unsigned _payloadFlags;
	unsigned _rtpSSRC;
	unsigned _secondaryFlags;
	unsigned _supportFlags;
	BOOL _useSBR;
	SCD_Struct_VC55 _has;

}

@property (nonatomic,readonly) BOOL allowAudioRecording; 
@property (nonatomic,readonly) BOOL allowAudioSwitching; 
@property (assign,nonatomic) unsigned rtpSSRC;                        //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL hasAudioUnitModel; 
@property (assign,nonatomic) unsigned audioUnitModel;                 //@synthesize audioUnitModel=_audioUnitModel - In the implementation block
@property (assign,nonatomic) unsigned supportFlags;                   //@synthesize supportFlags=_supportFlags - In the implementation block
@property (assign,nonatomic) unsigned payloadFlags;                   //@synthesize payloadFlags=_payloadFlags - In the implementation block
@property (assign,nonatomic) unsigned secondaryFlags;                 //@synthesize secondaryFlags=_secondaryFlags - In the implementation block
@property (assign,nonatomic) BOOL useSBR;                             //@synthesize useSBR=_useSBR - In the implementation block
+(BOOL)isAudioPayloadSupported:(int)arg1 ;
+(int)negotiationPayloadFromPayload:(int)arg1 ;
+(int)payloadFromNegotiationPayload:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)rtpSSRC;
-(BOOL)useSBR;
-(void)writeTo:(id)arg1 ;
-(BOOL)allowAudioRecording;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(void)setHasAudioUnitModel:(BOOL)arg1 ;
-(BOOL)hasAudioUnitModel;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(unsigned)supportFlags;
-(void)setSupportFlags:(unsigned)arg1 ;
-(unsigned)payloadFlags;
-(void)setPayloadFlags:(unsigned)arg1 ;
-(unsigned)secondaryFlags;
-(void)setSecondaryFlags:(unsigned)arg1 ;
-(void)setUseSBR:(BOOL)arg1 ;
-(BOOL)allowAudioSwitching;
-(id)newMediaNegotiatorAudioConfiguration;
-(id)initWithAudioConfiguration:(id)arg1 ;
-(void)printWithLogFile:(void*)arg1 ;
@end
