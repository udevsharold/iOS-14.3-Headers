/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate <NSObject>
@optional
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;

@end

