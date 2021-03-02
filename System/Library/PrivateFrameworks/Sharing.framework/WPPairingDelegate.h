/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPPairingDelegate <NSObject>
@optional
-(BOOL)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4;
-(void)pairingStartedScanning:(id)arg1;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
-(void)pairingStoppedScanning:(id)arg1;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;

@required
-(void)pairingDidUpdateState:(id)arg1;

@end
