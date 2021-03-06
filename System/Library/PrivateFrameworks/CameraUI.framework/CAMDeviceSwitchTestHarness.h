/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	BOOL _testingAnimation;
	CAMViewfinderViewController* _viewfinderViewController;
	long long _desiredDevicePosition;
	long long _startingCaptureMode;

}

@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (nonatomic,readonly) long long desiredDevicePosition;                                     //@synthesize desiredDevicePosition=_desiredDevicePosition - In the implementation block
@property (nonatomic,readonly) long long startingCaptureMode;                                       //@synthesize startingCaptureMode=_startingCaptureMode - In the implementation block
@property (getter=isTestingAnimation,nonatomic,readonly) BOOL testingAnimation;                     //@synthesize testingAnimation=_testingAnimation - In the implementation block
-(CAMViewfinderViewController *)viewfinderViewController;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(BOOL)isTestingAnimation;
-(void)startTesting;
-(long long)startingCaptureMode;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(BOOL)arg4 startingCaptureMode:(long long)arg5 ;
-(void)handleDidOpenViewfinderForReason:(long long)arg1 ;
-(long long)desiredDevicePosition;
@end

