/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sourceID;
	OpaqueFigCaptureSourceRef _source;
	int _sourceType;
	NSDictionary* _sourceAttributes;
	FigCaptureSourceVideoFormat* _requiredFormat;
	float _requiredMaxFrameRate;
	float _requiredMinFrameRate;
	float _maxFrameRateClientOverride;
	float _maxGainClientOverride;
	BOOL _hasSetVideoZoomFactorOnCaptureSource;
	float _videoZoomFactor;
	float _videoZoomRampAcceleration;
	int _imageControlMode;
	BOOL _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
	SCD_Struct_BW8 _maxExposureDurationClientOverride;
	NSDictionary* _faceDetectionConfiguration;
	BOOL _sensorHDREnabled;
	BOOL _highlightRecoveryEnabled;
	int _colorSpace;
	BOOL _depthDataDeliveryEnabled;
	FigCaptureSourceDepthDataFormat* _depthDataFormat;
	float _depthDataMaxFrameRate;
	BOOL _lowLightVideoCaptureEnabled;
	BOOL _spatialOverCaptureEnabled;
	BOOL _nonDestructiveCropEnabled;
	BOOL _geometricDistortionCorrectionEnabled;
	BOOL _variableFrameRateVideoCaptureEnabled;

}

@property (readonly) BOOL smartCameraEnabled; 
@property (readonly) BOOL bravoShiftMitigationEnabled; 
@property (nonatomic,copy) NSString * sourceID;                                                        //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source; 
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                             //@synthesize requiredFormat=_requiredFormat - In the implementation block
@property (assign,nonatomic) float requiredMaxFrameRate;                                               //@synthesize requiredMaxFrameRate=_requiredMaxFrameRate - In the implementation block
@property (assign,nonatomic) float requiredMinFrameRate;                                               //@synthesize requiredMinFrameRate=_requiredMinFrameRate - In the implementation block
@property (assign,nonatomic) float maxFrameRateClientOverride;                                         //@synthesize maxFrameRateClientOverride=_maxFrameRateClientOverride - In the implementation block
@property (assign,nonatomic) float maxGainClientOverride;                                              //@synthesize maxGainClientOverride=_maxGainClientOverride - In the implementation block
@property (assign,nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource;                                //@synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource - In the implementation block
@property (assign,nonatomic) float videoZoomFactor;                                                    //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (assign,nonatomic) float videoZoomRampAcceleration;                                          //@synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration - In the implementation block
@property (nonatomic,copy) NSDictionary * faceDetectionConfiguration;                                  //@synthesize faceDetectionConfiguration=_faceDetectionConfiguration - In the implementation block
@property (nonatomic,readonly) int sourcePosition; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) int sourceDeviceType; 
@property (assign,nonatomic) int imageControlMode;                                                     //@synthesize imageControlMode=_imageControlMode - In the implementation block
@property (assign,nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable;              //@synthesize applyMaxExposureDurationFrameworkOverrideWhenAvailable=_applyMaxExposureDurationFrameworkOverrideWhenAvailable - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 maxExposureDurationClientOverride;                         //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) BOOL sensorHDREnabled;                                                    //@synthesize sensorHDREnabled=_sensorHDREnabled - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoveryEnabled;                                            //@synthesize highlightRecoveryEnabled=_highlightRecoveryEnabled - In the implementation block
@property (assign,nonatomic) int colorSpace;                                                           //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                            //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) float depthDataMaxFrameRate;                                              //@synthesize depthDataMaxFrameRate=_depthDataMaxFrameRate - In the implementation block
@property (nonatomic,retain) FigCaptureSourceDepthDataFormat * depthDataFormat;                        //@synthesize depthDataFormat=_depthDataFormat - In the implementation block
@property (assign,nonatomic) BOOL lowLightVideoCaptureEnabled;                                         //@synthesize lowLightVideoCaptureEnabled=_lowLightVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL variableFrameRateVideoCaptureEnabled;                                //@synthesize variableFrameRateVideoCaptureEnabled=_variableFrameRateVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL spatialOverCaptureEnabled;                                           //@synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL nonDestructiveCropEnabled;                                           //@synthesize nonDestructiveCropEnabled=_nonDestructiveCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionEnabled;                                //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)sourceTypeForString:(id)arg1 ;
+(id)stringForSourcePosition:(int)arg1 ;
+(id)stringForSourceDeviceType:(int)arg1 ;
+(id)stringForSourceType:(int)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW8)arg1 ;
-(id)copyXPCEncoding;
-(void)setColorSpace:(int)arg1 ;
-(float)videoZoomRampAcceleration;
-(int)sourceType;
-(void)setImageControlMode:(int)arg1 ;
-(BOOL)highlightRecoveryEnabled;
-(int)colorSpace;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(SCD_Struct_BW8)maxExposureDurationClientOverride;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setHasSetVideoZoomFactorOnCaptureSource:(BOOL)arg1 ;
-(int)sourceDeviceType;
-(BOOL)_isCameraSource;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)sensorHDREnabled;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)setLowLightVideoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)geometricDistortionCorrectionEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_sourceUID;
-(BOOL)bravoShiftMitigationEnabled;
-(BOOL)hasSetVideoZoomFactorOnCaptureSource;
-(FigCaptureSourceDepthDataFormat *)depthDataFormat;
-(void)dealloc;
-(NSDictionary *)faceDetectionConfiguration;
-(void)setDepthDataMaxFrameRate:(float)arg1 ;
-(NSString *)sourceID;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(float)maxFrameRateClientOverride;
-(void)setHighlightRecoveryEnabled:(BOOL)arg1 ;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(void)setRequiredMinFrameRate:(float)arg1 ;
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)lowLightVideoCaptureEnabled;
-(float)requiredMinFrameRate;
-(int)sourcePosition;
-(void)setSensorHDREnabled:(BOOL)arg1 ;
-(BOOL)nonDestructiveCropEnabled;
-(float)videoZoomFactor;
-(NSString *)description;
-(void)setRequiredMaxFrameRate:(float)arg1 ;
-(BOOL)variableFrameRateVideoCaptureEnabled;
-(id)initWithSourceType:(int)arg1 ;
-(BOOL)smartCameraEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)_sourceAttributes;
-(BOOL)_isMicSource;
-(float)depthDataMaxFrameRate;
-(void)setApplyMaxExposureDurationFrameworkOverrideWhenAvailable:(BOOL)arg1 ;
-(void)setMaxGainClientOverride:(float)arg1 ;
-(OpaqueFigCaptureSourceRef)source;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(void)setVideoZoomFactor:(float)arg1 ;
-(BOOL)applyMaxExposureDurationFrameworkOverrideWhenAvailable;
-(void)setMaxFrameRateClientOverride:(float)arg1 ;
-(int)imageControlMode;
-(void)setVariableFrameRateVideoCaptureEnabled:(BOOL)arg1 ;
-(void)setDepthDataFormat:(FigCaptureSourceDepthDataFormat *)arg1 ;
-(float)maxGainClientOverride;
-(void)setFaceDetectionConfiguration:(NSDictionary *)arg1 ;
-(float)requiredMaxFrameRate;
-(int)_sourceToken;
-(BOOL)spatialOverCaptureEnabled;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(void)setNonDestructiveCropEnabled:(BOOL)arg1 ;
@end

