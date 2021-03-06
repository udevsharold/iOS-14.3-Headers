/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInputSource;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;
	BOOL _inUseByAnotherApplication;
	int _transportType;
	NSString* _manufacturer;
	NSArray* _linkedDevices;
	NSArray* _inputSources;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * manufacturer;                                                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) int transportType;                                                              //@synthesize transportType=_transportType - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isInUseByAnotherApplication,nonatomic,readonly) BOOL inUseByAnotherApplication;              //@synthesize inUseByAnotherApplication=_inUseByAnotherApplication - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) NSArray * linkedDevices;                                                        //@synthesize linkedDevices=_linkedDevices - In the implementation block
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_AV0 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 activeVideoMaxFrameDuration; 
@property (nonatomic,readonly) NSArray * inputSources;                                                         //@synthesize inputSources=_inputSources - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInputSource * activeInputSource; 
+(void)initialize;
+(id)devices;
+(id)_devicesWithPriorRegisteredDevices:(id)arg1 ;
+(id)_devices;
+(void)_filterConnectedDevices:(id)arg1 withDeviceTypes:(id)arg2 mediaType:(id)arg3 position:(long long)arg4 ;
+(id)_legacyDevicesWithMediaType:(id)arg1 ;
+(void)_filterConnectedLegacyDevices:(id)arg1 ;
+(id)_defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)arg4 ;
+(void)_registerOnceForServerConnectionDiedNotification;
+(id)extrinsicMatrixFromDevice:(id)arg1 toDevice:(id)arg2 ;
+(id)devicesWithMediaType:(id)arg1 ;
+(id)_devicesWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(void)_reconnectDevices:(id)arg1 ;
+(long long)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(BOOL)isWideColorSupported;
-(BOOL)isSpatialOverCaptureEnabled;
-(void)setFlashMode:(long long)arg1 ;
-(NSArray *)formats;
-(long long)digitalFlashMode;
-(void)setTimeLapseCaptureRate:(float)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(BOOL)open:(id*)arg1 ;
-(long long)flashMode;
-(void)setImageControlMode:(long long)arg1 ;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)providesStortorgetMetadata;
-(id)virtualDeviceSwitchOverVideoZoomFactors;
-(long long)torchMode;
-(int)faceRectangleAngle;
-(id)systemPressureState;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)cancelVideoZoomRamp;
-(BOOL)isVideoHDRSuspended;
-(SCD_Struct_AV0)activeMaxExposureDuration;
-(id)deviceType;
-(BOOL)isAdjustingWhiteBalance;
-(BOOL)isEyeClosedDetectionSupported;
-(BOOL)isHEVCSupported;
-(NSString *)manufacturer;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(NSString *)uniqueID;
-(BOOL)_isDepthDataDeliveryEnabled;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)modelID;
-(BOOL)isHEVCMemoryUsageMinimizationSupported;
-(BOOL)hasTorch;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(id)_digitalFlashExposureTimes;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(void)setLowLightVideoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationSupported;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)isSuspended;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(SCD_Struct_AV0)activeDepthDataMinFrameDuration;
-(BOOL)isOpen;
-(id)digitalFlashSceneForPhotoOutput;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isAdjustingFocus;
-(void)setActiveDepthDataFormat:(id)arg1 ;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(BOOL)isHEVCPreferred;
-(long long)activeColorSpace;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(void)setGlobalToneMappingEnabled:(BOOL)arg1 ;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(BOOL)isFlashAvailable;
-(BOOL)_isFlashScene;
-(SCD_Struct_AV0)activeMaxExposureDurationClientOverride;
-(BOOL)eyeClosedDetectionEnabled;
-(void)_setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)eyeDetectionEnabled;
-(void)_checkTCCAccess;
-(int)transportType;
-(void)dealloc;
-(void)resetVideoMinFrameDurationOverrideForOwner:(id)arg1 ;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(float)maxExposureTargetBias;
-(int)hevcTurboModeVersion;
-(SCD_Struct_AV26)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV27)arg1 ;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV0)arg1 forOwner:(id)arg2 ;
-(SCD_Struct_AV26)deviceWhiteBalanceGains;
-(BOOL)isGeometricDistortionCorrectionEnabled;
-(float)exposureTargetBias;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isLockedForConfiguration;
-(BOOL)isTorchAvailable;
-(long long)whiteBalanceMode;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(SCD_Struct_AV27)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 ;
-(AVCaptureDeviceFormat *)activeFormat;
-(double)dualCameraSwitchOverVideoZoomFactor;
-(void)setExposureMode:(long long)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV26)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV27)arg1 ;
-(BOOL)isTorchActive;
-(BOOL)isRampingVideoZoom;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(BOOL)isGeometricDistortionCorrectionSupported;
-(BOOL)isSmoothAutoFocusEnabled;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)isExposurePointOfInterestSupported;
-(BOOL)isFlashSceneDetectedForPhotoOutput;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(BOOL)isHEIFSupported;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(long long)timeOfFlightBankCount;
-(void)_setPhotoSettingsForSceneMonitoring:(id)arg1 ;
-(float)minExposureTargetBias;
-(long long)shallowDepthOfFieldEffectStatus;
-(long long)exposureMode;
-(unsigned long long)degradedCaptureQualityFactors;
-(BOOL)supportsMultiCamCaptureWithDevice:(id)arg1 ;
-(BOOL)isTimeOfFlightProjectorModeSupported:(long long)arg1 ;
-(void)setVideoHDRSuspended:(BOOL)arg1 ;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(BOOL)hasFlash;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isVideoStabilizationSupported;
-(double)videoZoomFactor;
-(id)initSubclass;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isLowLightVideoCaptureEnabled;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(float)ISO;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)setTorchMode:(long long)arg1 ;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)activeDepthDataFormat;
-(BOOL)_startUsingDevice:(id*)arg1 ;
-(NSArray *)inputSources;
-(id)description;
-(double)maxAvailableVideoZoomFactor;
-(void)setActiveMaxExposureDuration:(SCD_Struct_AV0)arg1 ;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hevcAllowBFramesForHighCTUCount;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(BOOL)isAdjustingExposure;
-(CGPoint)exposurePointOfInterest;
-(void)setActiveColorSpace:(long long)arg1 ;
-(void)_stopUsingDevice;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(AVCaptureDeviceInputSource *)activeInputSource;
-(void)setActiveInputSource:(AVCaptureDeviceInputSource *)arg1 ;
-(BOOL)isLowLightBoostSupported;
-(BOOL)isLowLightBoostEnabled;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(void)setBravoCameraSelectionBehavior:(id)arg1 ;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isInUseByAnotherApplication;
-(NSArray *)linkedDevices;
-(BOOL)isSmoothAutoFocusSupported;
-(BOOL)isConnected;
-(BOOL)isConstituentPhotoCalibrationDataSupported;
-(id)constituentDevices;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(void)setNonDestructiveCropAspectRatio:(long long)arg1 ;
-(id)cameraPoseMatrix;
-(float)focalLength;
-(id)constituentDeviceWithDeviceType:(id)arg1 ;
-(BOOL)isFlashActive;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(BOOL)isHDRSceneDetectedForPhotoOutput;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(long long)_digitalFlashStatus;
-(float)lensAperture;
-(long long)position;
-(long long)nonDestructiveCropAspectRatio;
-(BOOL)isLockingFocusWithCustomLensPositionSupported;
-(BOOL)isAutoRedEyeReductionSupported;
-(float)lensPosition;
-(SCD_Struct_AV22)maxH264VideoDimensions;
-(SCD_Struct_AV27)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 ;
-(CGPoint)focusPointOfInterest;
-(CGRect)faceRectangle;
-(BOOL)isVariableFrameRateVideoCaptureEnabled;
-(SCD_Struct_AV22)maxH264PhotoDimensions;
-(void)setActiveFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)unlockForConfiguration;
-(BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(BOOL)hevcAllowBFramesForHighCTUCountAndHighResolution;
-(float)exposureTargetOffset;
-(void)setFocusMode:(long long)arg1 ;
-(void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isSmileDetectionSupported;
-(float)timeLapseCaptureRate;
-(void)setActiveDepthDataMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)isNonDestructiveCropEnabled;
-(int)powerConsumptionAt30FPSForOISMode:(int)arg1 ;
-(long long)focusMode;
-(double)minAvailableVideoZoomFactor;
-(void)close;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(void)setTimeOfFlightProjectorMode:(long long)arg1 ;
-(id)debugDescription;
-(float)torchLevel;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(long long)imageControlMode;
-(NSString *)localizedName;
-(void)setVariableFrameRateVideoCaptureEnabled:(BOOL)arg1 ;
-(long long)timeOfFlightProjectorMode;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(BOOL)smileDetectionEnabled;
-(BOOL)isVideoHDREnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
-(SCD_Struct_AV26)grayWorldDeviceWhiteBalanceGains;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(long long)autoFocusRangeRestriction;
-(id)bravoCameraSelectionBehavior;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(BOOL)isFocusPointOfInterestSupported;
-(BOOL)isGlobalToneMappingEnabled;
-(BOOL)isVirtualDevice;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(float)ISODigitalThreshold;
-(void)setNonDestructiveCropEnabled:(BOOL)arg1 ;
-(int)minMacroblocksForHighProfileAbove30fps;
-(float)maxWhiteBalanceGain;
-(SCD_Struct_AV0)exposureDuration;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(id)supportedMetadataObjectIdentifiers;
-(BOOL)isEyeDetectionSupported;
@end

