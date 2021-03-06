/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didReceiveCommError;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
-(void)didGetSnapshot:(id)arg1;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;

@end

