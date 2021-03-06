/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
@required
-(void)didStartPreviewForProvider:(id)arg1;
-(void)didPausePreviewForProvider:(id)arg1;
-(void)didStopPreviewForProvider:(id)arg1;
-(void)captureDevicesChangedForProvider:(id)arg1;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
-(void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(BOOL)arg2;

@end

