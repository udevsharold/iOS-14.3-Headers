/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	float _accelStandardDeviation;
	float _gyroStandardDeviation;
	NSDictionary* _apsSubjectDistance;
	NSDictionary* _practicalFocalLength;
	NSDictionary* _focusingMethod;
	float _maxSphereTrackingError;
	float _stdSphereTrackingError;
	float _maxAFTrackingError;
	float _stdAFTrackingError;
	float _minDistanceFromSphereEndStop;
	float _spherePowerConsumption;
	float _afPowerConsumption;
	unsigned _cameraPosture;
	NSString* _sphereMode;
	unsigned _apsMode;
	unsigned _timeSinceLastCaptureInSession;
	float _flashBrightnessRatio;
	NSDictionary* _oisRecenteringLoggingData;
	float _effectiveIntegrationTime;
	int _intelligentDistortionCorrectionStatusCode;
	int _intelligentDistortionCorrectionGainMapProcessingStatusCode;
	int _intelligentDistortionCorrectionCorrectionType;
	int _ispMotionHighPassFilterConvergenceFlags;
	NSDictionary* _timeOfFlightAssistedAutoFocusEstimatorData;
	BOOL _afDriverShortOccurred;
	BOOL _livePhotoEnabled;
	BOOL _depthEnabled;
	BOOL _timeLapse;
	BOOL _burst;
	int _activeDeviceMask;
	int _devicePosition;
	int _deviceType;
	int _captureType;
	unsigned _processingFlags;
	int _processingDuration;
	int _streamingTime;
	int _shutterLag;
	float _zoom;
	int _luxLevel;
	float _lensPosition;
	int _sensorTemperature;
	float _exposureDuration;
	float _iso;
	float _normalizedSNR;
	float _SNR;
	int _numberOfFaces;
	int _clientIDType;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;

}

@property (assign,nonatomic) int activeDeviceMask;                                                        //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                          //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int deviceType;                                                              //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int captureType;                                                             //@synthesize captureType=_captureType - In the implementation block
@property (assign,nonatomic) unsigned long long captureFlags;                                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) unsigned processingFlags;                                                    //@synthesize processingFlags=_processingFlags - In the implementation block
@property (assign,nonatomic) unsigned long long sceneFlags;                                               //@synthesize sceneFlags=_sceneFlags - In the implementation block
@property (assign,nonatomic) int processingDuration;                                                      //@synthesize processingDuration=_processingDuration - In the implementation block
@property (assign,nonatomic) int streamingTime;                                                           //@synthesize streamingTime=_streamingTime - In the implementation block
@property (assign,nonatomic) int shutterLag;                                                              //@synthesize shutterLag=_shutterLag - In the implementation block
@property (assign,nonatomic) float zoom;                                                                  //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) int luxLevel;                                                                //@synthesize luxLevel=_luxLevel - In the implementation block
@property (assign,nonatomic) float lensPosition;                                                          //@synthesize lensPosition=_lensPosition - In the implementation block
@property (assign,nonatomic) int sensorTemperature;                                                       //@synthesize sensorTemperature=_sensorTemperature - In the implementation block
@property (assign,nonatomic) float exposureDuration;                                                      //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (assign,nonatomic) float iso;                                                                   //@synthesize iso=_iso - In the implementation block
@property (assign,nonatomic) float normalizedSNR;                                                         //@synthesize normalizedSNR=_normalizedSNR - In the implementation block
@property (assign,setter=NR,nonatomic) float SNR;                                                         //@synthesize SNR=_SNR - In the implementation block
@property (assign,nonatomic) int numberOfFaces;                                                           //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (assign,nonatomic) int clientIDType;                                                            //@synthesize clientIDType=_clientIDType - In the implementation block
@property (assign,nonatomic) BOOL livePhotoEnabled;                                                       //@synthesize livePhotoEnabled=_livePhotoEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthEnabled;                                                           //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeLapse;                                                              //@synthesize timeLapse=_timeLapse - In the implementation block
@property (assign,nonatomic) BOOL burst;                                                                  //@synthesize burst=_burst - In the implementation block
@property (nonatomic,retain) NSString * portType;                                                         //@synthesize portType=_portType - In the implementation block
@property (assign,nonatomic) float accelStandardDeviation;                                                //@synthesize accelStandardDeviation=_accelStandardDeviation - In the implementation block
@property (assign,nonatomic) float gyroStandardDeviation;                                                 //@synthesize gyroStandardDeviation=_gyroStandardDeviation - In the implementation block
@property (nonatomic,retain) NSDictionary * apsSubjectDistance;                                           //@synthesize apsSubjectDistance=_apsSubjectDistance - In the implementation block
@property (nonatomic,retain) NSDictionary * practicalFocalLength;                                         //@synthesize practicalFocalLength=_practicalFocalLength - In the implementation block
@property (nonatomic,retain) NSDictionary * focusingMethod;                                               //@synthesize focusingMethod=_focusingMethod - In the implementation block
@property (assign,nonatomic) float maxSphereTrackingError;                                                //@synthesize maxSphereTrackingError=_maxSphereTrackingError - In the implementation block
@property (assign,nonatomic) float stdSphereTrackingError;                                                //@synthesize stdSphereTrackingError=_stdSphereTrackingError - In the implementation block
@property (assign,nonatomic) float maxAFTrackingError;                                                    //@synthesize maxAFTrackingError=_maxAFTrackingError - In the implementation block
@property (assign,nonatomic) float stdAFTrackingError;                                                    //@synthesize stdAFTrackingError=_stdAFTrackingError - In the implementation block
@property (assign,nonatomic) float minDistanceFromSphereEndStop;                                          //@synthesize minDistanceFromSphereEndStop=_minDistanceFromSphereEndStop - In the implementation block
@property (assign,nonatomic) float spherePowerConsumption;                                                //@synthesize spherePowerConsumption=_spherePowerConsumption - In the implementation block
@property (assign,nonatomic) float afPowerConsumption;                                                    //@synthesize afPowerConsumption=_afPowerConsumption - In the implementation block
@property (assign,nonatomic) unsigned cameraPosture;                                                      //@synthesize cameraPosture=_cameraPosture - In the implementation block
@property (nonatomic,retain) NSString * sphereMode;                                                       //@synthesize sphereMode=_sphereMode - In the implementation block
@property (assign,nonatomic) unsigned apsMode;                                                            //@synthesize apsMode=_apsMode - In the implementation block
@property (assign,nonatomic) unsigned timeSinceLastCaptureInSession;                                      //@synthesize timeSinceLastCaptureInSession=_timeSinceLastCaptureInSession - In the implementation block
@property (assign,nonatomic) float flashBrightnessRatio;                                                  //@synthesize flashBrightnessRatio=_flashBrightnessRatio - In the implementation block
@property (nonatomic,retain) NSDictionary * oisRecenteringLoggingData;                                    //@synthesize oisRecenteringLoggingData=_oisRecenteringLoggingData - In the implementation block
@property (assign,nonatomic) float effectiveIntegrationTime;                                              //@synthesize effectiveIntegrationTime=_effectiveIntegrationTime - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionStatusCode;                               //@synthesize intelligentDistortionCorrectionStatusCode=_intelligentDistortionCorrectionStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;              //@synthesize intelligentDistortionCorrectionGainMapProcessingStatusCode=_intelligentDistortionCorrectionGainMapProcessingStatusCode - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionCorrectionType;                           //@synthesize intelligentDistortionCorrectionCorrectionType=_intelligentDistortionCorrectionCorrectionType - In the implementation block
@property (assign,nonatomic) int ispMotionHighPassFilterConvergenceFlags;                                 //@synthesize ispMotionHighPassFilterConvergenceFlags=_ispMotionHighPassFilterConvergenceFlags - In the implementation block
@property (nonatomic,retain) NSDictionary * timeOfFlightAssistedAutoFocusEstimatorData;                   //@synthesize timeOfFlightAssistedAutoFocusEstimatorData=_timeOfFlightAssistedAutoFocusEstimatorData - In the implementation block
@property (assign,nonatomic) BOOL afDriverShortOccurred;                                                  //@synthesize afDriverShortOccurred=_afDriverShortOccurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientIDType:(int)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(float)iso;
-(int)devicePosition;
-(void)setMaxSphereTrackingError:(float)arg1 ;
-(int)shutterLag;
-(void)setStdAFTrackingError:(float)arg1 ;
-(void)setIntelligentDistortionCorrectionStatusCode:(int)arg1 ;
-(void)setCaptureFlags:(unsigned long long)arg1 ;
-(int)deviceType;
-(float)zoom;
-(id)eventName;
-(void)setSphereMode:(NSString *)arg1 ;
-(NSString *)portType;
-(id)init;
-(int)processingDuration;
-(float)stdAFTrackingError;
-(void)setTimeLapse:(BOOL)arg1 ;
-(unsigned long long)sceneFlags;
-(void)setZoom:(float)arg1 ;
-(void)setPortType:(NSString *)arg1 ;
-(float)afPowerConsumption;
-(int)activeDeviceMask;
-(void)setGyroStandardDeviation:(float)arg1 ;
-(void)setBurst:(BOOL)arg1 ;
-(void)reset;
-(void)setAfPowerConsumption:(float)arg1 ;
-(float)flashBrightnessRatio;
-(void)dealloc;
-(void)setProcessingDuration:(int)arg1 ;
-(void)setPracticalFocalLength:(NSDictionary *)arg1 ;
-(void)setIso:(float)arg1 ;
-(void)setNumberOfFaces:(int)arg1 ;
-(int)sensorTemperature;
-(int)numberOfFaces;
-(void)setLuxLevel:(int)arg1 ;
-(void)setMinDistanceFromSphereEndStop:(float)arg1 ;
-(void)setEffectiveIntegrationTime:(float)arg1 ;
-(int)intelligentDistortionCorrectionCorrectionType;
-(void)setCameraPosture:(unsigned)arg1 ;
-(float)spherePowerConsumption;
-(void)setFlashBrightnessRatio:(float)arg1 ;
-(id)eventDictionary;
-(float)maxSphereTrackingError;
-(void)setApsSubjectDistance:(NSDictionary *)arg1 ;
-(int)ispMotionHighPassFilterConvergenceFlags;
-(void)setDepthEnabled:(BOOL)arg1 ;
-(float)maxAFTrackingError;
-(unsigned)timeSinceLastCaptureInSession;
-(void)setDeviceType:(int)arg1 ;
-(BOOL)burst;
-(void)setActiveDeviceMask:(int)arg1 ;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(int)clientIDType;
-(float)gyroStandardDeviation;
-(void)setIspMotionHighPassFilterConvergenceFlags:(int)arg1 ;
-(void)setLensPosition:(float)arg1 ;
-(void)setIntelligentDistortionCorrectionGainMapProcessingStatusCode:(int)arg1 ;
-(float)stdSphereTrackingError;
-(void)setSpherePowerConsumption:(float)arg1 ;
-(NSDictionary *)timeOfFlightAssistedAutoFocusEstimatorData;
-(void)setAfDriverShortOccurred:(BOOL)arg1 ;
-(void)setStdSphereTrackingError:(float)arg1 ;
-(void)setCaptureType:(int)arg1 ;
-(NSDictionary *)practicalFocalLength;
-(unsigned)apsMode;
-(void)setMaxAFTrackingError:(float)arg1 ;
-(NSString *)sphereMode;
-(BOOL)livePhotoEnabled;
-(unsigned)cameraPosture;
-(void)setTimeSinceLastCaptureInSession:(unsigned)arg1 ;
-(void)setIntelligentDistortionCorrectionCorrectionType:(int)arg1 ;
-(BOOL)afDriverShortOccurred;
-(NSDictionary *)focusingMethod;
-(NSDictionary *)apsSubjectDistance;
-(int)intelligentDistortionCorrectionStatusCode;
-(float)lensPosition;
-(int)captureType;
-(float)minDistanceFromSphereEndStop;
-(float)normalizedSNR;
-(void)setShutterLag:(int)arg1 ;
-(float)SNR;
-(BOOL)timeLapse;
-(void)setAccelStandardDeviation:(float)arg1 ;
-(NSDictionary *)oisRecenteringLoggingData;
-(void)setExposureDuration:(float)arg1 ;
-(BOOL)depthEnabled;
-(void)setOisRecenteringLoggingData:(NSDictionary *)arg1 ;
-(void)setProcessingFlags:(unsigned)arg1 ;
-(unsigned)processingFlags;
-(void)setLivePhotoEnabled:(BOOL)arg1 ;
-(void)setTimeOfFlightAssistedAutoFocusEstimatorData:(NSDictionary *)arg1 ;
-(int)intelligentDistortionCorrectionGainMapProcessingStatusCode;
-(unsigned long long)captureFlags;
-(void)setApsMode:(unsigned)arg1 ;
-(void)setSensorTemperature:(int)arg1 ;
-(float)effectiveIntegrationTime;
-(void)setFocusingMethod:(NSDictionary *)arg1 ;
-(int)luxLevel;
-(float)accelStandardDeviation;
-(void)setStreamingTime:(int)arg1 ;
-(void)setNormalizedSNR:(float)arg1 ;
-(int)streamingTime;
-(float)exposureDuration;
-(void)setSNR:(float)arg1 ;
@end
