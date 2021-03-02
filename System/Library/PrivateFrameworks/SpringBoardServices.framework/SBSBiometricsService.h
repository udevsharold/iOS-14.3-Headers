/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
