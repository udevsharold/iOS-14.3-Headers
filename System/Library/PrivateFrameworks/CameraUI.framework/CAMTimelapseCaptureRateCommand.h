/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand {

	float __captureRate;

}

@property (nonatomic,readonly) float _captureRate;              //@synthesize _captureRate=__captureRate - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaultTimelapseCaptureRate;
-(id)initWithTimelapseCaptureRate:(float)arg1 ;
-(float)_captureRate;
@end

