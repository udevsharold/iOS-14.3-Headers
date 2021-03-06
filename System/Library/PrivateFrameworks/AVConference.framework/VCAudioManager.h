/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>
#import <libobjc.A.dylib/VCAudioSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VCAudioSessionMediaProperties, VCAudioUnitProperties, NSDictionary, NSMutableArray, AVAudioDevice, VCAudioRelay, VCAudioRelayIO, NSString;

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioSessionDelegate> {

	tagHANDLE* _hAUIO;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _state;
	VCAudioSessionMediaProperties* _currentAudioSessionMediaProperties;
	VCAudioUnitProperties* _currentAudioUnitProperties;
	NSDictionary* _vpOperatingModeToAudioSessionMediaFormatMapping;
	NSMutableArray* _allClients;
	NSMutableArray* _startingIOClients;
	AVAudioDevice* _inputDevice;
	AVAudioDevice* _outputDevice;
	BOOL _isGKVoiceChat;
	BOOL _isMicrophoneMuted;
	BOOL _isInDaemon;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	BOOL _isSpeakerPhoneEnabled;
	BOOL _isSuspended;
	VCAudioIOControllerIOState* _sinkData;
	VCAudioIOControllerIOState* _sourceData;
	int _interruptThreadState;
	VCAudioRelay* _interruptThread;
	VCAudioRelayIO* _interruptThreadClient;
	BOOL _isInterrupting;
	opaque_pthread_mutex_t _interruptingMutex;

}

@property (nonatomic,retain) VCAudioSessionMediaProperties * currentAudioSessionMediaProperties;              //@synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties - In the implementation block
@property (nonatomic,retain) VCAudioUnitProperties * currentAudioUnitProperties;                              //@synthesize currentAudioUnitProperties=_currentAudioUnitProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * vpOperatingModeToAudioSessionMediaFormatMapping;                  //@synthesize vpOperatingModeToAudioSessionMediaFormatMapping=_vpOperatingModeToAudioSessionMediaFormatMapping - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice;                                              //@synthesize inputDevice=_inputDevice - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice;                                             //@synthesize outputDevice=_outputDevice - In the implementation block
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted;                                   //@synthesize isMicrophoneMuted=_isMicrophoneMuted - In the implementation block
@property (assign,nonatomic) BOOL isInDaemon;                                                                 //@synthesize isInDaemon=_isInDaemon - In the implementation block
@property (assign,nonatomic) BOOL isGKVoiceChat;                                                              //@synthesize isGKVoiceChat=_isGKVoiceChat - In the implementation block
@property (assign,getter=isSpeakerPhoneEnabled,nonatomic) BOOL speakerPhoneEnabled;                           //@synthesize isSpeakerPhoneEnabled=_isSpeakerPhoneEnabled - In the implementation block
@property (nonatomic,readonly) VCAudioIOControllerIOState* sinkIO; 
@property (nonatomic,readonly) VCAudioIOControllerIOState* sourceIO; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)removeClient:(id)arg1 ;
-(BOOL)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(void)stateTransitionInterruptedToStarted;
-(BOOL)isMicrophoneMuted;
-(void)didSessionPause;
-(VCAudioSessionMediaProperties *)currentAudioSessionMediaProperties;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(id)init;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(id)newAudioUnitPropertiesWithClient:(id)arg1 ;
-(void)getPreferredFormat:(AudioStreamBasicDescription*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(AudioStreamBasicDescription*)arg6 ;
-(void)refreshOutputMetering;
-(void)removeAllClientsForIO:(VCAudioIOControllerIOState*)arg1 ;
-(void)setSpeakerPhoneEnabled:(BOOL)arg1 ;
-(BOOL)startAUIOWithProperties:(id)arg1 ;
-(void)didSessionStop;
-(BOOL)updateStateWithAudioIOClient:(id)arg1 ;
-(void)_cleanupDeadClients;
-(void)dealloc;
-(void)activateStartingClient:(id)arg1 applyControllerFormat:(BOOL)arg2 ;
-(void)stateTransitionInterruptedToRunning;
-(BOOL)startAudioSessionWithProperties:(id)arg1 ;
-(void)completeStartForAllStartingClients;
-(BOOL)isInDaemon;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(BOOL)addClient:(id)arg1 ;
-(void)stopAUIO;
-(void)startClient:(id)arg1 ;
-(void)setCurrentAudioUnitProperties:(VCAudioUnitProperties *)arg1 ;
-(BOOL)stateInterruptedShouldGoToRunning:(id)arg1 ;
-(void)setVpOperatingModeToAudioSessionMediaFormatMapping:(NSDictionary *)arg1 ;
-(void)computeHardwarePreferences;
-(VCAudioUnitProperties *)currentAudioUnitProperties;
-(void)flushEventQueue:(opaqueCMSimpleQueueRef)arg1 ;
-(BOOL)stateRunningShouldTransitionToInterrupted:(id)arg1 ;
-(void)updateClient:(id)arg1 ;
-(void)waitIdleForClient:(id)arg1 ;
-(BOOL)isGKVoiceChat;
-(BOOL)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(void)resetAudioSessionWithProperties:(id)arg1 interruptSuccessful:(BOOL*)arg2 ;
-(BOOL)isSpeakerPhoneEnabled;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)shouldResetAudioUnitWithProperties:(id)arg1 ;
-(void)didSessionResume;
-(AVAudioDevice *)currentOutputDevice;
-(void)stateTransitionRunningToInterrupted;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(void)registerClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
-(unsigned)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2 ;
-(void)setupIODevicesForAUIO:(tagHANDLE*)arg1 ;
-(id)newAudioSessionMediaPropertiesWithClient:(id)arg1 ;
-(void)startInterruptThread;
-(VCAudioIOControllerIOState*)sourceIO;
-(void)setInputMetering;
-(void)didSessionEnd;
-(void)stopClient:(id)arg1 ;
-(void)setIsInDaemon:(BOOL)arg1 ;
-(BOOL)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(void)stopInterruptThread;
-(BOOL)shouldResetAudioSessionWithProperties:(id)arg1 ;
-(void)refreshInputMetering;
-(BOOL)stateInterruptedShouldGoToStarted:(id)arg1 ;
-(AVAudioDevice *)currentInputDevice;
-(VCAudioIOControllerIOState*)sinkIO;
-(NSDictionary *)vpOperatingModeToAudioSessionMediaFormatMapping;
-(void)resetAudioTimestamps;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(void)applyControllerFormatToClients:(id)arg1 ;
-(void)cleanupInterruptThread;
-(void)setCurrentAudioSessionMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(BOOL)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(void)setOutputMetering;
-(void)stopAudioSession;
-(BOOL)stateRunningShouldTransitionToStarted:(id)arg1 ;
-(BOOL)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned)arg2 ;
-(BOOL)setupInterruptThread;
-(void)resetAUIOWithProperties:(id)arg1 ;
-(void)stateRunningToSessionStarted;
-(void)enterStateStarted;
-(void)unregisterClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
@end

