/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _micConfiguration;
	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;
	BOOL _flipStereoAudioCaptureChannels;
	NSString* _sessionPreset;
	BOOL _configuresAppAudioSession;
	BOOL _audioSourceNodeShouldCallEndInterruption;
	unsigned _clientVersionOfLinkedSDK;
	SCD_Struct_Fi77 _clientAuditToken;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * micConfiguration;                                      //@synthesize micConfiguration=_micConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,retain) BWZoomCommandHandler * zoomCommandHandlerForStereoAudioCapture;                        //@synthesize zoomCommandHandlerForStereoAudioCapture=_zoomCommandHandlerForStereoAudioCapture - In the implementation block
@property (assign,nonatomic) BOOL flipStereoAudioCaptureChannels;                                                   //@synthesize flipStereoAudioCaptureChannels=_flipStereoAudioCaptureChannels - In the implementation block
@property (nonatomic,retain) NSString * sessionPreset;                                                              //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                                                        //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL audioSourceNodeShouldCallEndInterruption;                                         //@synthesize audioSourceNodeShouldCallEndInterruption=_audioSourceNodeShouldCallEndInterruption - In the implementation block
@property (assign,nonatomic) unsigned clientVersionOfLinkedSDK;                                                     //@synthesize clientVersionOfLinkedSDK=_clientVersionOfLinkedSDK - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi77 clientAuditToken;                                                      //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
-(BWZoomCommandHandler *)zoomCommandHandlerForStereoAudioCapture;
-(void)setClientVersionOfLinkedSDK:(unsigned)arg1 ;
-(void)setZoomCommandHandlerForStereoAudioCapture:(BWZoomCommandHandler *)arg1 ;
-(void)dealloc;
-(SCD_Struct_Fi77)clientAuditToken;
-(BOOL)flipStereoAudioCaptureChannels;
-(void)setClientAuditToken:(SCD_Struct_Fi77)arg1 ;
-(BOOL)audioSourceNodeShouldCallEndInterruption;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setAudioSourceNodeShouldCallEndInterruption:(BOOL)arg1 ;
-(id)micConnectionConfigurationsForMicSourcePosition:(int)arg1 ;
-(NSString *)sessionPreset;
-(void)setMicConnectionConfigurations:(NSArray *)arg1 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)setMicConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(FigCaptureSourceConfiguration *)micConfiguration;
-(BOOL)configuresAppAudioSession;
-(NSArray *)micConnectionConfigurations;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(void)setCameraConfigurationForStereoAudioCapture:(FigCaptureSourceConfiguration *)arg1 ;
-(unsigned)clientVersionOfLinkedSDK;
-(void)setFlipStereoAudioCaptureChannels:(BOOL)arg1 ;
@end

