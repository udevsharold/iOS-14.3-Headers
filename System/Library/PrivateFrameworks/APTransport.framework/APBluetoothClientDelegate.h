/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APBluetoothClientDelegate <NSObject>
@optional
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
-(void)airPlaySoloAdvertisingPending:(id)arg1;
-(void)airPlaySoloStartedAdvertising:(id)arg1;
-(void)airPlaySoloStartedScanning:(id)arg1;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)airPlaySoloStoppedScanning:(id)arg1;
-(void)airPlaySoloStoppedAdvertising:(id)arg1;

@required
-(void)airPlaySoloDidUpdateState:(id)arg1;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;

@end

