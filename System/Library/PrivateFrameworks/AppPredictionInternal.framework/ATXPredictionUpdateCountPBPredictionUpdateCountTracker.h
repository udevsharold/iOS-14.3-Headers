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

@class NSString;

@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	int _clientType;
	int _triggerType;
	SCD_Struct_Co2 _has;

}

@property (assign,nonatomic) BOOL hasTriggerType; 
@property (assign,nonatomic) int triggerType;                  //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                   //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;               //@synthesize abGroup=_abGroup - In the implementation block
-(void)setAbGroup:(NSString *)arg1 ;
-(NSString *)abGroup;
-(void)setClientType:(int)arg1 ;
-(int)triggerType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)clientType;
-(void)setTriggerType:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAbGroup;
-(void)writeTo:(id)arg1 ;
-(void)setHasTriggerType:(BOOL)arg1 ;
-(BOOL)hasTriggerType;
-(id)triggerTypeAsString:(int)arg1 ;
-(int)StringAsTriggerType:(id)arg1 ;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(id)clientTypeAsString:(int)arg1 ;
-(int)StringAsClientType:(id)arg1 ;
@end
