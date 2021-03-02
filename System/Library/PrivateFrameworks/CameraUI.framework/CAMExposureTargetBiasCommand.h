/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureTargetBiasCommand : CAMCaptureCommand {

	float __exposureTargetBias;

}

@property (nonatomic,readonly) float _exposureTargetBias;              //@synthesize _exposureTargetBias=__exposureTargetBias - In the implementation block
-(float)_exposureTargetBias;
-(void)executeWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithExposureTargetBias:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
