/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UserProtectedConfig : NSObject {

	int _unlockEnabled;
	int _identificationEnabled;
	int _loginEnabled;
	int _applePayEnabled;
	int _attentionDetectionEnabled;

}

@property (assign,nonatomic) int unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) int identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (assign,nonatomic) int loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (assign,nonatomic) int applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (assign,nonatomic) int attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(void)setAttentionDetectionEnabled:(int)arg1 ;
-(int)identificationEnabled;
-(id)init;
-(int)attentionDetectionEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(void)setIdentificationEnabled:(int)arg1 ;
-(int)applePayEnabled;
-(int)unlockEnabled;
-(void)setApplePayEnabled:(int)arg1 ;
-(int)loginEnabled;
-(void)setLoginEnabled:(int)arg1 ;
@end
