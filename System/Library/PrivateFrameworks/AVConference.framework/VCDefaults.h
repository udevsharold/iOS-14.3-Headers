/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCDefaults : NSObject {

	int _forceCaptureWidth;
	int _forceCaptureHeight;
	int _forceEncodeWidth;
	int _forceEncodeHeight;
	int _forceEncodeFramerate;
	int _forceFramerate;
	int _forceBitrate;
	int _forceVideoPayload;
	int _forceRecvVideoPayload;
	int _forceKeyFrameInterval;
	BOOL _isFECVersion2Enabled;
	BOOL _forceWiFiAssist;
	BOOL _forceWiFiAssistOutOfBudget;

}

@property (readonly) BOOL forceScreenHWI; 
@property (readonly) BOOL forceHWI; 
@property (readonly) BOOL forceMultiwayHWI; 
@property (readonly) BOOL forceDisableThermal; 
@property (readonly) int forceCaptureWidth; 
@property (readonly) int forceCaptureHeight; 
@property (readonly) int forceEncodeFramerate; 
@property (readonly) int forceEncodeWidth; 
@property (readonly) int forceEncodeHeight; 
@property (readonly) int forceFramerate; 
@property (readonly) int forceBitrate; 
@property (readonly) int forceVideoPayload; 
@property (readonly) int forceRecvVideoPayload; 
@property (readonly) int forceKeyFrameInterval; 
@property (readonly) BOOL forceARCapture; 
@property (readonly) BOOL forceMirroredCapture; 
@property (readonly) BOOL forceEnablePearlCamera; 
@property (readonly) BOOL cameraVideoStablization; 
@property (readonly) BOOL forceOneToOneMode; 
@property (readonly) BOOL supportsOneToOneMode; 
@property (readonly) BOOL forceDisableVideoRuleWiFi1080; 
@property (readonly) BOOL forceDisableVideoRuleCell720; 
@property (readonly) BOOL enableBitstreamCapture; 
@property (readonly) int enable2vuyCapture; 
@property (readonly) BOOL enableVPBLogging; 
@property (readonly) int enableTxSourceYuvDump; 
@property (readonly) BOOL enableTxBitstreamDump; 
@property (readonly) BOOL enableRecvBitstreamDump; 
@property (readonly) BOOL enablePacketLogging; 
@property (readonly) BOOL disableVAD; 
@property (readonly) int bundleAudio; 
@property (readonly) BOOL audioRecordingEnabled; 
@property (readonly) int forceAudioPayload; 
@property (readonly) int forceAudioBitrate; 
@property (readonly) int forceAudioPacketsPerBundle; 
@property (readonly) int forceAudioHardwareSampleRate; 
@property (readonly) float forceAudioPowerThreshold; 
@property (readonly) int forceAudioPowerTimeInterval; 
@property (readonly) BOOL forceDisableAudioPowerSpectrumRegister; 
@property (readonly) BOOL forceUseFloat; 
@property (readonly) int forceAudioChannelCount; 
@property (readonly) BOOL disableRed; 
@property (readonly) int forceRedNumPayloads; 
@property (readonly) int forceRedMaxDelay; 
@property (readonly) BOOL useSBR; 
@property (readonly) unsigned aacBlockSize; 
@property (readonly) int forceVideoStreamResolution; 
@property (readonly) int forceVideoStreamTxMaxBitrate; 
@property (readonly) int forceVideoStreamTxMinBitrate; 
@property (readonly) int forceVideoStreamFramerate; 
@property (readonly) int forceVideoStreamKeyFrameInterval; 
@property (readonly) int forceVideoStreamRxMaxBitrate; 
@property (readonly) int forceVideoStreamRxMinBitrate; 
@property (readonly) BOOL forceVideoStreamDisableBitrateCap; 
@property (readonly) int forceVideoStreamPayload; 
@property (readonly) BOOL forceVideoStreamLowLatency; 
@property (readonly) double remoteMediaStallTimeout; 
@property (readonly) BOOL videoStreamRateControlDumpEnabled; 
@property (readonly) int videoStreamRateControlAlgorithm; 
@property (readonly) BOOL cannedReplayEnabled; 
@property (readonly) BOOL forceDisableMediaQueue; 
@property (readonly) BOOL mediaQueueDumpEnabled; 
@property (readonly) int rateControllerType; 
@property (readonly) int rateControlStatisticsQueueWaitTime; 
@property (readonly) BOOL bandwidthEstimationDumpEnabled; 
@property (readonly) BOOL rateControlDumpEnabled; 
@property (readonly) BOOL rateControlLogEnabled; 
@property (readonly) BOOL rateControlAllowVideoStop; 
@property (readonly) BOOL rateControlAllowBurstyLossRampDown; 
@property (readonly) int rateControlForceTxCap; 
@property (readonly) int rateControlForceRxCap; 
@property (readonly) int rateControlForceTxRate; 
@property (readonly) int rateControlForceRxRate; 
@property (readonly) int rateControlBasebandSlowDownFactor; 
@property (readonly) int packetExpirationTime; 
@property (readonly) int redundancyControlForceVideoRedundancyPercentage; 
@property (readonly) BOOL isFECVersion2Enabled;                                        //@synthesize isFECVersion2Enabled=_isFECVersion2Enabled - In the implementation block
@property (readonly) int max2GRate; 
@property (readonly) BOOL forceIPv6; 
@property (readonly) int enableiRATSuggestion; 
@property (readonly) int localWRMLinkType; 
@property (readonly) BOOL enableGFTStatsReporting; 
@property (readonly) BOOL enableGFTStatsReceiveThread; 
@property (readonly) float pauseHeartbeatInterval; 
@property (readonly) BOOL forceWiFiAssist;                                             //@synthesize forceWiFiAssist=_forceWiFiAssist - In the implementation block
@property (readonly) BOOL forceWiFiAssistOutOfBudget;                                  //@synthesize forceWiFiAssistOutOfBudget=_forceWiFiAssistOutOfBudget - In the implementation block
@property (readonly) int localRATTypeOverride; 
@property (readonly) int extraPayloads; 
@property (readonly) int encodingScore; 
@property (readonly) BOOL canDecodeHD; 
@property (readonly) BOOL shouldDisplayVideoInfoLayer; 
@property (readonly) BOOL momentsUserPreferenceEnabled; 
@property (readonly) BOOL momentsUseBestVideoRule; 
@property (readonly) BOOL dumpMediaBlob; 
@property (readonly) unsigned maxActiveVideoEncoders; 
@property (readonly) unsigned maxActiveVideoDecoders; 
@property (readonly) BOOL forceEVSWideBand; 
@property (readonly) BOOL forceMuteAtStart; 
@property (readonly) BOOL forceDisableVideoDegraded; 
@property (readonly) BOOL forceDisableMediaStalled; 
@property (readonly) unsigned minParticipantCountSendVoiceActiveOnly; 
@property (readonly) BOOL forceDisableMediaEncryption; 
@property (readonly) BOOL forceDisableReporting; 
@property (readonly) BOOL forceFECRepairStream; 
@property (readonly) unsigned forceVisibilityIndex; 
@property (readonly) BOOL forceDisableMediaPriority; 
@property (readonly) unsigned char audioPriorityDecaySlow; 
@property (readonly) unsigned char audioPriorityDecayFast; 
@property (readonly) unsigned char audioPriorityRampUpSpeed; 
@property (readonly) float audioVoiceDetectionSensitivity; 
@property (readonly) unsigned silenceLevelMovingAveragePeriod; 
@property (readonly) unsigned char forceAudioPriorityValue; 
@property (readonly) BOOL forceAudioPriorityEnabled; 
@property (readonly) unsigned multiwayAudioNetworkBitrateCapWifi; 
@property (readonly) unsigned multiwayAudioNetworkBitrateCapCellular; 
@property (readonly) unsigned multiwayVideoNetworkBitrateCapWifi; 
@property (readonly) unsigned multiwayVideoNetworkBitrateCapCellular; 
@property (readonly) unsigned prominenceActiveProbabilityThreshold; 
@property (readonly) unsigned prominenceInactiveProbabilityThreshold; 
@property (readonly) unsigned prominenceActiveAccumulationThreshold; 
@property (readonly) unsigned prominenceInactiveAccumulationThreshold; 
@property (readonly) BOOL forceDisableFaceZoom; 
@property (readonly) BOOL enableHEIFAndHEVCForMoments; 
@property (readonly) BOOL forceDynamicEffectsFramerate; 
@property (readonly) float depthFrameRateMultiplier; 
@property (readonly) BOOL forceDisableEffectsHealthCheck; 
@property (readonly) BOOL forceDisableMessageEncryption; 
+(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
+(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
+(id)sharedInstance;
+(long long)integerValueForKey:(CFStringRef)arg1 ;
+(double)getDoubleValueForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
+(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)forceDisableMediaStalled;
-(BOOL)forceMultiwayHWI;
-(BOOL)forceDisableMediaEncryption;
-(BOOL)forceIPv6;
-(int)forceFramerate;
-(BOOL)shouldOverrideEffectsFramerate:(unsigned*)arg1 ;
-(int)forceAudioChannelCount;
-(BOOL)rateControlDumpEnabled;
-(BOOL)videoStreamRateControlDumpEnabled;
-(int)forceEncodeWidth;
-(id)init;
-(BOOL)shouldDisplayVideoInfoLayer;
-(unsigned)multiwayVideoNetworkBitrateCapCellular;
-(int)videoStreamRateControlAlgorithm;
-(BOOL)forceMirroredCapture;
-(BOOL)forceHWI;
-(id)autorelease;
-(int)extraPayloads;
-(BOOL)canDecodeHD;
-(BOOL)forceVideoStreamDisableBitrateCap;
-(BOOL)enableBitstreamCapture;
-(BOOL)forceEnablePearlCamera;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)forceAudioPacketsPerBundle;
-(unsigned)minParticipantCountSendVoiceActiveOnly;
-(int)enableTxSourceYuvDump;
-(BOOL)dumpMediaBlob;
-(BOOL)forceWiFiAssist;
-(BOOL)forceFECRepairStream;
-(int)localWRMLinkType;
-(BOOL)forceDynamicEffectsFramerate;
-(double)remoteMediaStallTimeout;
-(BOOL)forceUseInternalRTPThreadingWithDefaultValue:(BOOL)arg1 ;
-(BOOL)cameraVideoStablization;
-(unsigned char)audioPriorityRampUpSpeed;
-(BOOL)forceVideoStreamLowLatency;
-(int)forceVideoStreamRxMaxBitrate;
-(unsigned long long)retainCount;
-(int)rateControlForceRxCap;
-(int)rateControlBasebandSlowDownFactor;
-(BOOL)forceDisableMessageEncryption;
-(int)forceCaptureHeight;
-(int)forceAudioPayload;
-(BOOL)enableAudioDumpParticipantLocal:(BOOL)arg1 ;
-(float)depthFrameRateMultiplier;
-(int)forceVideoStreamPayload;
-(int)forceRedNumPayloads;
-(void)seperateString:(id)arg1 ;
-(BOOL)forceDisableMediaPriority;
-(unsigned)forceVisibilityIndex;
-(BOOL)mediaQueueDumpEnabled;
-(int)rateControlForceRxRate;
-(BOOL)forceDisableAudioPowerSpectrumRegister;
-(unsigned)prominenceActiveProbabilityThreshold;
-(int)rateControllerType;
-(unsigned)aacBlockSize;
-(int)bundleAudio;
-(BOOL)enableVPBLogging;
-(int)localRATTypeOverride;
-(int)forceVideoStreamRxMinBitrate;
-(BOOL)forceWifiAssistOutOfBudget;
-(int)forceRedMaxDelay;
-(BOOL)enableTxBitstreamDump;
-(BOOL)enableGFTStatsReporting;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)enableGFTStatsReceiveThread;
-(int)forceKeyFrameInterval;
-(BOOL)momentsUserPreferenceEnabled;
-(unsigned)prominenceInactiveProbabilityThreshold;
-(unsigned)forceThermalLevelFramerate:(unsigned)arg1 ;
-(unsigned)maxActiveVideoEncoders;
-(int)forceRecvVideoPayload;
-(int)rateControlStatisticsQueueWaitTime;
-(int)forceVideoStreamTxMaxBitrate;
-(BOOL)bandwidthEstimationDumpEnabled;
-(BOOL)forceDisableFaceZoom;
-(id)retain;
-(unsigned char)forceAudioPriorityValue;
-(int)max2GRate;
-(BOOL)forceDisableMediaQueue;
-(BOOL)enableAudioDumpParticipantRemote:(BOOL)arg1 ;
-(BOOL)forceARCapture;
-(BOOL)forceDisableEffectsHealthCheck;
-(BOOL)cannedReplayEnabled;
-(int)forceVideoStreamKeyFrameInterval;
-(BOOL)enableRecvBitstreamDump;
-(BOOL)disableVAD;
-(int)forceVideoStreamFramerate;
-(BOOL)rateControlAllowBurstyLossRampDown;
-(unsigned)multiwayAudioNetworkBitrateCapCellular;
-(BOOL)momentsUseBestVideoRule;
-(float)audioVoiceDetectionSensitivity;
-(BOOL)forceDisableThermal;
-(int)rateControlForceTxRate;
-(int)forceBitrate;
-(oneway void)release;
-(int)packetExpirationTime;
-(BOOL)forceDisableVideoRuleWiFi1080;
-(float)pauseHeartbeatInterval;
-(unsigned)multiwayVideoNetworkBitrateCapWifi;
-(BOOL)forceAudioPriorityEnabled;
-(int)forceEncodeHeight;
-(int)encodingScore;
-(unsigned char)audioPriorityDecaySlow;
-(BOOL)enableHEIFAndHEVCForMoments;
-(BOOL)forceDisableVideoDegraded;
-(int)forceEncodeFramerate;
-(BOOL)audioRecordingEnabled;
-(unsigned char)audioPriorityDecayFast;
-(BOOL)forceUseFloat;
-(int)forceVideoPayload;
-(BOOL)rateControlAllowVideoStop;
-(int)forceCaptureWidth;
-(BOOL)forceEVSWideBand;
-(BOOL)enablePacketLogging;
-(BOOL)useSBR;
-(BOOL)supportsOneToOneMode;
-(BOOL)isFECVersion2Enabled;
-(int)forceAudioHardwareSampleRate;
-(int)enable2vuyCapture;
-(BOOL)forceDisableVideoRuleCell720;
-(unsigned)multiwayAudioNetworkBitrateCapWifi;
-(BOOL)forceDisableReporting;
-(int)redundancyControlForceVideoRedundancyPercentage;
-(unsigned)prominenceActiveAccumulationThreshold;
-(int)forceVideoStreamTxMinBitrate;
-(int)forceAudioPowerTimeInterval;
-(int)forceVideoStreamResolution;
-(unsigned)silenceLevelMovingAveragePeriod;
-(int)rateControlForceTxCap;
-(BOOL)disableRed;
-(BOOL)forceOneToOneMode;
-(int)enableiRATSuggestion;
-(BOOL)forceScreenHWI;
-(BOOL)forceWiFiAssistOutOfBudget;
-(float)forceAudioPowerThreshold;
-(BOOL)forceMuteAtStart;
-(BOOL)forceWifiAssist;
-(int)forceAudioBitrate;
-(unsigned)prominenceInactiveAccumulationThreshold;
-(BOOL)rateControlLogEnabled;
@end
