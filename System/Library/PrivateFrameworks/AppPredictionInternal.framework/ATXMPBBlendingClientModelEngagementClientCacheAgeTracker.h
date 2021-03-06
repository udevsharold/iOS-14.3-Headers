/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBBlendingClientModelEngagementClientCacheAgeTracker : PBCodable <NSCopying> {

	NSString* _clientModelABGroup;
	NSString* _clientModelId;
	NSString* _consumerSubType;
	int _outcomeType;
	SCD_Struct_AT5 _has;

}

@property (assign,nonatomic) BOOL hasOutcomeType; 
@property (assign,nonatomic) int outcomeType;                            //@synthesize outcomeType=_outcomeType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                   //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;                 //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelABGroup; 
@property (nonatomic,retain) NSString * clientModelABGroup;              //@synthesize clientModelABGroup=_clientModelABGroup - In the implementation block
-(NSString *)clientModelId;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasConsumerSubType;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)outcomeType;
-(void)setOutcomeType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasClientModelId;
-(void)setClientModelId:(NSString *)arg1 ;
-(NSString *)consumerSubType;
-(void)writeTo:(id)arg1 ;
-(void)setClientModelABGroup:(NSString *)arg1 ;
-(BOOL)hasClientModelABGroup;
-(NSString *)clientModelABGroup;
-(void)setHasOutcomeType:(BOOL)arg1 ;
-(BOOL)hasOutcomeType;
-(id)outcomeTypeAsString:(int)arg1 ;
-(int)StringAsOutcomeType:(id)arg1 ;
@end

