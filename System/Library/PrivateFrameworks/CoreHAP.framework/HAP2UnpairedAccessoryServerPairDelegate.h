/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2UnpairedAccessoryServerPairDelegate <NSObject>
@required
-(void)accessoryServer:(id)arg1 doesRequirePermission:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)accessoryServer:(id)arg1 doesRequireSetupCodeWithCompletion:(/*^block*/id)arg2;
-(void)accessoryServer:(id)arg1 didRejectSetupCodeWithBackoffInterval:(double)arg2 completion:(/*^block*/id)arg3;
-(void)accessoryServer:(id)arg1 didCompleteWithError:(id)arg2;
-(void)accessoryServer:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5;
-(void)accessoryServer:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4;
-(void)accessoryServer:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)accessoryServer:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)accessoryServer:(id)arg1 didFinishAuthWithError:(id)arg2;

@end

