/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject {

	AVCapturePhotoInitiationSettingsInternal* _internal;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) long long uniqueID; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled; 
+(id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(long long)flashMode;
-(long long)HDRMode;
-(unsigned long long)timestamp;
-(long long)uniqueID;
-(id)_initWithTimestamp:(unsigned long long)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)burstQualityCaptureEnabled;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
@end

