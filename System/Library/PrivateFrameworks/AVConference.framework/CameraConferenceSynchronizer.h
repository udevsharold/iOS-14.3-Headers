/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {

	BOOL isConference720p;
	BOOL isConferenceOniPad;
	BOOL receivedRequestToChangeCamera;
	BOOL receivedFirstRemoteFrame;
	int cameraHasChangedToCapture;
	int didSendFirstRemoteFrameNotification;
	VCVideoRule* captureRule;
	CGSize localPortraitAspectRatio;
	/*^block*/id remoteFrameNotificationBlock;
	/*^block*/id didStopNotificationBlock;

}

@property (assign,setter=setLocalPortraitAspectRatio:,nonatomic) CGSize localPortraitAspectRatio; 
-(id)init;
-(void)reset;
-(void)dealloc;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(void)scheduleFirstRemoteFrameNotification:(/*^block*/id)arg1 ;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg1 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)cameraSizeChangedTo:(CGSize)arg1 ;
-(BOOL)shouldConferenceSendFirstRemoteFrameNotification;
-(void)notifyClientOfRemoteFrame:(double)arg1 ;
-(BOOL)shouldConferenceChangeCameraToCaptureSettings;
-(void)changeCameraToCaptureSettings:(double)arg1 forced:(BOOL)arg2 ;
-(BOOL)shouldConferenceChangeCameraToPreviewSettings;
@end

