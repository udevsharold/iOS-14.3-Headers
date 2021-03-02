/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>
@optional
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2;

@required
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;

@end
