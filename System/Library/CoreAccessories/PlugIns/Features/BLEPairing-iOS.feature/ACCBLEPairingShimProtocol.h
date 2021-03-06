/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCBLEPairingShimProtocol
@required
-(void)deviceStopBLEUpdates:(id)arg1;
-(void)deviceUpdate:(id)arg1 pairType:(int)arg2 pairInfo:(id)arg3;
-(void)deviceSend:(id)arg1 pairType:(int)arg2 pairingData:(id)arg3;
-(void)deviceStateUpdate:(id)arg1 btRadio:(unsigned char)arg2 pairStatus:(int)arg3 pairModeOn:(BOOL)arg4 forceUpdates:(BOOL)arg5;
-(id)bleAccessoryForConnectionID:(unsigned)arg1;
-(void)deviceStartBLEUpdates:(id)arg1 pairType:(int)arg2 btRadio:(BOOL)arg3 pairInfo:(BOOL)arg4;

@end

