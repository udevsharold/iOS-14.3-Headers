/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <BiometricSupport/BiometricOperation.h>

@class NSData;

@interface BiometricMatchOperation : BiometricOperation {

	SCD_Struct_Bi1 _noBioLockoutAuthData;
	BOOL _forUnlock;
	BOOL _forCredentialSet;
	BOOL _forPreArm;
	BOOL _stopOnSuccess;
	BOOL _noBioLockout;
	unsigned _userID;
	int _useCase;
	unsigned _noBioLockoutUserID;
	unsigned _processedFlags;
	NSData* _acmContext;

}

@property (assign,nonatomic) unsigned userID;                                     //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) BOOL forUnlock;                                      //@synthesize forUnlock=_forUnlock - In the implementation block
@property (assign,nonatomic) BOOL forCredentialSet;                               //@synthesize forCredentialSet=_forCredentialSet - In the implementation block
@property (assign,nonatomic) BOOL forPreArm;                                      //@synthesize forPreArm=_forPreArm - In the implementation block
@property (assign,nonatomic) BOOL stopOnSuccess;                                  //@synthesize stopOnSuccess=_stopOnSuccess - In the implementation block
@property (assign,nonatomic) BOOL noBioLockout;                                   //@synthesize noBioLockout=_noBioLockout - In the implementation block
@property (nonatomic,retain) NSData * acmContext;                                 //@synthesize acmContext=_acmContext - In the implementation block
@property (assign,nonatomic) int useCase;                                         //@synthesize useCase=_useCase - In the implementation block
@property (assign,nonatomic) unsigned noBioLockoutUserID;                         //@synthesize noBioLockoutUserID=_noBioLockoutUserID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Bi1* noBioLockoutAuthData; 
@property (assign,nonatomic) unsigned processedFlags;                             //@synthesize processedFlags=_processedFlags - In the implementation block
-(id)init;
-(void)setUserID:(unsigned)arg1 ;
-(int)type;
-(int)useCase;
-(unsigned)userID;
-(void)setStopOnSuccess:(BOOL)arg1 ;
-(void)setUseCase:(int)arg1 ;
-(BOOL)stopOnSuccess;
-(unsigned)cancelledMessage;
-(unsigned)processedFlags;
-(void)setProcessedFlags:(unsigned)arg1 ;
-(SCD_Struct_Bi1*)noBioLockoutAuthData;
-(BOOL)forUnlock;
-(void)setForUnlock:(BOOL)arg1 ;
-(BOOL)forCredentialSet;
-(void)setForCredentialSet:(BOOL)arg1 ;
-(BOOL)forPreArm;
-(void)setForPreArm:(BOOL)arg1 ;
-(BOOL)noBioLockout;
-(void)setNoBioLockout:(BOOL)arg1 ;
-(NSData *)acmContext;
-(void)setAcmContext:(NSData *)arg1 ;
-(unsigned)noBioLockoutUserID;
-(void)setNoBioLockoutUserID:(unsigned)arg1 ;
@end
