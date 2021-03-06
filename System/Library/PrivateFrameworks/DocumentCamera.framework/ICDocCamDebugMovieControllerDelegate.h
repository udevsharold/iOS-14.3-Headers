/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamDebugMovieControllerDelegate <NSObject>
@required
-(long long)statusBarOrientation;
-(id)videoPreviewLayer;
-(void)enableUIElementsForMovieRecording:(BOOL)arg1;
-(void)showErrorForMovieRecording:(id)arg1;
-(void)pauseCaptureSessionForMovieRecording;
-(void)resumeCaptureSessionForMovieRecording;
-(void)enableRecordButton:(BOOL)arg1;
-(void)changeRecordButtonTitle:(id)arg1;

@end

