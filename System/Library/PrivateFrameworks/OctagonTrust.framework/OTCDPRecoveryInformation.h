/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OTCDPRecoveryInformation : PBCodable <NSCopying> {

	NSString* _recoveryKey;
	NSString* _recoverySecret;
	BOOL _containsIcdpData;
	BOOL _silentRecoveryAttempt;
	BOOL _useCachedSecret;
	BOOL _usePreviouslyCachedRecoveryKey;
	BOOL _usesMultipleIcsc;
	SCD_Struct_OT2 _has;

}

@property (nonatomic,readonly) BOOL hasRecoverySecret; 
@property (nonatomic,retain) NSString * recoverySecret;                           //@synthesize recoverySecret=_recoverySecret - In the implementation block
@property (assign,nonatomic) BOOL hasUseCachedSecret; 
@property (assign,nonatomic) BOOL useCachedSecret;                                //@synthesize useCachedSecret=_useCachedSecret - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoveryKey; 
@property (nonatomic,retain) NSString * recoveryKey;                              //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (assign,nonatomic) BOOL hasUsePreviouslyCachedRecoveryKey; 
@property (assign,nonatomic) BOOL usePreviouslyCachedRecoveryKey;                 //@synthesize usePreviouslyCachedRecoveryKey=_usePreviouslyCachedRecoveryKey - In the implementation block
@property (assign,nonatomic) BOOL hasSilentRecoveryAttempt; 
@property (assign,nonatomic) BOOL silentRecoveryAttempt;                          //@synthesize silentRecoveryAttempt=_silentRecoveryAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasContainsIcdpData; 
@property (assign,nonatomic) BOOL containsIcdpData;                               //@synthesize containsIcdpData=_containsIcdpData - In the implementation block
@property (assign,nonatomic) BOOL hasUsesMultipleIcsc; 
@property (assign,nonatomic) BOOL usesMultipleIcsc;                               //@synthesize usesMultipleIcsc=_usesMultipleIcsc - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasRecoverySecret;
-(void)setUseCachedSecret:(BOOL)arg1 ;
-(void)setHasUseCachedSecret:(BOOL)arg1 ;
-(BOOL)hasUseCachedSecret;
-(BOOL)hasRecoveryKey;
-(void)setUsePreviouslyCachedRecoveryKey:(BOOL)arg1 ;
-(void)setHasUsePreviouslyCachedRecoveryKey:(BOOL)arg1 ;
-(void)setSilentRecoveryAttempt:(BOOL)arg1 ;
-(BOOL)hasUsePreviouslyCachedRecoveryKey;
-(void)setHasSilentRecoveryAttempt:(BOOL)arg1 ;
-(BOOL)hasSilentRecoveryAttempt;
-(void)setContainsIcdpData:(BOOL)arg1 ;
-(void)setHasContainsIcdpData:(BOOL)arg1 ;
-(BOOL)hasContainsIcdpData;
-(void)setUsesMultipleIcsc:(BOOL)arg1 ;
-(void)setHasUsesMultipleIcsc:(BOOL)arg1 ;
-(BOOL)hasUsesMultipleIcsc;
-(NSString *)recoveryKey;
-(NSString *)recoverySecret;
-(void)setRecoverySecret:(NSString *)arg1 ;
-(BOOL)useCachedSecret;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(BOOL)usePreviouslyCachedRecoveryKey;
-(BOOL)silentRecoveryAttempt;
-(BOOL)containsIcdpData;
-(BOOL)usesMultipleIcsc;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end

