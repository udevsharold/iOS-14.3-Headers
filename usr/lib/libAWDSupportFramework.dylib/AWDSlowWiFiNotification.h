/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSlowWiFiNotification : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _actionField;
	unsigned _recoveryAction;
	unsigned _recoveryReason;
	unsigned _userInput;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActionField; 
@property (assign,nonatomic) unsigned actionField;                      //@synthesize actionField=_actionField - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryAction; 
@property (assign,nonatomic) unsigned recoveryAction;                   //@synthesize recoveryAction=_recoveryAction - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryReason; 
@property (assign,nonatomic) unsigned recoveryReason;                   //@synthesize recoveryReason=_recoveryReason - In the implementation block
@property (assign,nonatomic) BOOL hasUserInput; 
@property (assign,nonatomic) unsigned userInput;                        //@synthesize userInput=_userInput - In the implementation block
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)userInput;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUserInput;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setUserInput:(unsigned)arg1 ;
-(void)setActionField:(unsigned)arg1 ;
-(void)setHasActionField:(BOOL)arg1 ;
-(BOOL)hasActionField;
-(void)setRecoveryAction:(unsigned)arg1 ;
-(void)setHasRecoveryAction:(BOOL)arg1 ;
-(BOOL)hasRecoveryAction;
-(void)setRecoveryReason:(unsigned)arg1 ;
-(void)setHasRecoveryReason:(BOOL)arg1 ;
-(BOOL)hasRecoveryReason;
-(void)setHasUserInput:(BOOL)arg1 ;
-(unsigned)actionField;
-(unsigned)recoveryAction;
-(unsigned)recoveryReason;
@end

