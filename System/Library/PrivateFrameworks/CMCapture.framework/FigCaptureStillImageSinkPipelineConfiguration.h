/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSNumber, NSDictionary;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	NSNumber* _clientPID;
	NSDictionary* _stillImageColorInfoForFramesOriginatingFromVideoStream;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	BOOL _stereoFusionSupported;
	BOOL _isIrisSupported;
	BOOL _hdrSupported;
	BOOL _gnrHDRSupported;

}

@property (nonatomic,retain) NSNumber * clientPID;                                                               //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,retain) NSDictionary * stillImageColorInfoForFramesOriginatingFromVideoStream;              //@synthesize stillImageColorInfoForFramesOriginatingFromVideoStream=_stillImageColorInfoForFramesOriginatingFromVideoStream - In the implementation block
@property (assign,nonatomic) BOOL stillImageISPChromaNoiseReductionEnabled;                                      //@synthesize stillImageISPChromaNoiseReductionEnabled=_stillImageISPChromaNoiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL stereoFusionSupported;                                                         //@synthesize stereoFusionSupported=_stereoFusionSupported - In the implementation block
@property (assign,nonatomic) BOOL isIrisSupported;                                                               //@synthesize isIrisSupported=_isIrisSupported - In the implementation block
@property (assign,nonatomic) BOOL hdrSupported;                                                                  //@synthesize hdrSupported=_hdrSupported - In the implementation block
@property (assign,nonatomic) BOOL gnrHDRSupported;                                                               //@synthesize gnrHDRSupported=_gnrHDRSupported - In the implementation block
-(void)setClientPID:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)setIsIrisSupported:(BOOL)arg1 ;
-(NSNumber *)clientPID;
-(BOOL)isIrisSupported;
-(void)setHdrSupported:(BOOL)arg1 ;
-(BOOL)hdrSupported;
-(BOOL)stillImageISPChromaNoiseReductionEnabled;
-(NSDictionary *)stillImageColorInfoForFramesOriginatingFromVideoStream;
-(void)setStillImageColorInfoForFramesOriginatingFromVideoStream:(NSDictionary *)arg1 ;
-(void)setGnrHDRSupported:(BOOL)arg1 ;
-(BOOL)stereoFusionSupported;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setStereoFusionSupported:(BOOL)arg1 ;
-(BOOL)gnrHDRSupported;
@end

