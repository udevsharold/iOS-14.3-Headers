/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXTimelineRelevancePBTimelineRelevanceRotation : PBCodable <NSCopying> {

	long long _duration;
	long long _timestamp;
	int _clientModelId;
	int _engagement;
	int _rotationEventType;
	BOOL _isMediumOrHighConfidence;
	SCD_Struct_Co1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRotationEventType; 
@property (assign,nonatomic) int rotationEventType;                         //@synthesize rotationEventType=_rotationEventType - In the implementation block
@property (assign,nonatomic) BOOL hasIsMediumOrHighConfidence; 
@property (assign,nonatomic) BOOL isMediumOrHighConfidence;                 //@synthesize isMediumOrHighConfidence=_isMediumOrHighConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasClientModelId; 
@property (assign,nonatomic) int clientModelId;                             //@synthesize clientModelId=_clientModelId - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasEngagement; 
@property (assign,nonatomic) int engagement;                                //@synthesize engagement=_engagement - In the implementation block
-(BOOL)hasDuration;
-(int)clientModelId;
-(void)setHasDuration:(BOOL)arg1 ;
-(long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(void)setEngagement:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(BOOL)hasClientModelId;
-(void)setClientModelId:(int)arg1 ;
-(long long)duration;
-(int)engagement;
-(void)writeTo:(id)arg1 ;
-(int)rotationEventType;
-(void)setRotationEventType:(int)arg1 ;
-(void)setHasRotationEventType:(BOOL)arg1 ;
-(BOOL)hasRotationEventType;
-(id)rotationEventTypeAsString:(int)arg1 ;
-(int)StringAsRotationEventType:(id)arg1 ;
-(void)setIsMediumOrHighConfidence:(BOOL)arg1 ;
-(void)setHasIsMediumOrHighConfidence:(BOOL)arg1 ;
-(BOOL)hasIsMediumOrHighConfidence;
-(void)setHasClientModelId:(BOOL)arg1 ;
-(id)clientModelIdAsString:(int)arg1 ;
-(int)StringAsClientModelId:(id)arg1 ;
-(void)setHasEngagement:(BOOL)arg1 ;
-(BOOL)hasEngagement;
-(id)engagementAsString:(int)arg1 ;
-(int)StringAsEngagement:(id)arg1 ;
-(BOOL)isMediumOrHighConfidence;
@end

