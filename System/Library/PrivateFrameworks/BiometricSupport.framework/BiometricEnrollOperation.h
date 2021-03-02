/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <BiometricSupport/BiometricOperation.h>

@interface BiometricEnrollOperation : BiometricOperation {

	SCD_Struct_Bi1 _authData;
	unsigned _userID;
	unsigned _processedFlags;

}

@property (assign,nonatomic) unsigned userID;                         //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Bi1* authData; 
@property (assign,nonatomic) unsigned processedFlags;                 //@synthesize processedFlags=_processedFlags - In the implementation block
-(id)init;
-(void)setUserID:(unsigned)arg1 ;
-(int)type;
-(unsigned)userID;
-(unsigned)cancelledMessage;
-(SCD_Struct_Bi1*)authData;
-(unsigned)processedFlags;
-(void)setProcessedFlags:(unsigned)arg1 ;
@end
