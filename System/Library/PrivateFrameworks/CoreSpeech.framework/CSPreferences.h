/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSPreferences : NSObject
+(id)sharedPreferences;
-(void)setFileLoggingLevel:(id)arg1 ;
-(BOOL)_storeModeEnabled;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)voiceTriggerInCoreSpeech;
-(id)audioInjectionFilePath;
-(id)fileLoggingLevel;
-(id)baseDir;
-(double)audioSessionActivationDelay;
-(BOOL)phraseSpotterEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(BOOL)voiceTriggerEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)useSiriActivationSPIForwatchOS;
-(BOOL)isMultiPhraseVTEnabled;
-(id)assistantAudioFileLogDirectory;
-(BOOL)isAdBlockerAudioLoggingEnabled;
-(id)voiceTriggerAudioLogDirectory;
-(unsigned long long)maxNumGradingFiles;
-(unsigned long long)maxNumLoggingFiles;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(BOOL)runningVoiceTriggerOnMac;
-(BOOL)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(id)getStartOfSpeechAudioLogFilePath;
-(id)myriadHashFilePath;
-(BOOL)programmableAudioInjectionEnabled;
-(BOOL)twoShotNotificationEnabled;
-(id)myriadHashDirectory;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(BOOL)enableAudioInjection:(BOOL)arg1 withKey:(CFStringRef)arg2 ;
-(BOOL)audioInjectionEnabledWithKey:(CFStringRef)arg1 ;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)isAttentiveSiriEnabled;
-(id)ssvLogDirectory;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg1 ;
-(id)trialBaseAssetDirectory;
-(id)getCatAdBlockerAssetUpdateDirectory;
-(BOOL)speakerRecognitionAudioLoggingEnabled;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(BOOL)forceVoiceTriggerAPMode;
-(BOOL)forceVoiceTriggerAOPMode;
-(BOOL)_isDirectory:(id)arg1 ;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)enableAudioInjection:(BOOL)arg1 ;
-(BOOL)audioInjectionEnabled;
-(BOOL)enableProgrammableAudioInjection:(BOOL)arg1 ;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(BOOL)isPHSSupported;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)isSpeakerRecognitionAvailable;
-(unsigned long long)speakerIdScoreReportingType;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(BOOL)smartSiriVolumeContextAwareLoggingEnabled;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)iOSBargeInSupportEnabled;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)bypassPersonalizedHeySiri;
-(BOOL)isMultiChannelAudioLoggingEnabled;
-(BOOL)isStaggeredCATDownloadEnabled;
-(BOOL)isSelfTriggerFileLoggingEnabled;
@end

