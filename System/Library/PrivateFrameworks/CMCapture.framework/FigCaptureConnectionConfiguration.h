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

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, FigCapturePointCloudDataSinkConfiguration, FigCaptureCameraCalibrationDataSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	int _underlyingDeviceType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                                                          //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) int underlyingDeviceType;                                                                       //@synthesize underlyingDeviceType=_underlyingDeviceType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                            //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                                                //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                                   //@synthesize enabled=_enabled - In the implementation block
@property (readonly) FigCaptureIrisSinkConfiguration * irisSinkConfiguration; 
@property (readonly) FigCaptureStillImageSinkConfiguration * stillImageSinkConfiguration; 
@property (readonly) FigCaptureVideoDataSinkConfiguration * videoDataSinkConfiguration; 
@property (readonly) FigCaptureVideoPreviewSinkConfiguration * videoPreviewSinkConfiguration; 
@property (readonly) FigCaptureDepthDataSinkConfiguration * depthDataSinkConfiguration; 
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration * thumbnailSinkConfiguration; 
@property (readonly) FigCapturePointCloudDataSinkConfiguration * pointCloudDataSinkConfiguration; 
@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration * cameraCalibrationDataSinkConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setMediaType:(unsigned)arg1 ;
-(id)init;
-(void)setConnectionID:(NSString *)arg1 ;
-(unsigned)mediaType;
-(FigCaptureIrisSinkConfiguration *)irisSinkConfiguration;
-(int)underlyingDeviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setUnderlyingDeviceType:(int)arg1 ;
-(FigCaptureVideoDataSinkConfiguration *)videoDataSinkConfiguration;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)sourcesFromUnderlyingStream;
-(FigCaptureVideoPreviewSinkConfiguration *)videoPreviewSinkConfiguration;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(FigCaptureDepthDataSinkConfiguration *)depthDataSinkConfiguration;
-(FigCaptureStillImageSinkConfiguration *)stillImageSinkConfiguration;
-(FigCapturePointCloudDataSinkConfiguration *)pointCloudDataSinkConfiguration;
-(FigCaptureCameraCalibrationDataSinkConfiguration *)cameraCalibrationDataSinkConfiguration;
-(FigCaptureVideoThumbnailSinkConfiguration *)thumbnailSinkConfiguration;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)connectionID;
@end

