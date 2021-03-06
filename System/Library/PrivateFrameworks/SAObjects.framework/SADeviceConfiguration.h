/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double audioSessionActivationDelay; 
@property (assign,nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold; 
@property (assign,nonatomic) BOOL hasAudioSessionActivationDelay; 
@property (assign,nonatomic) double initialInterstitialDelay; 
@property (assign,nonatomic) double initialInterstitialDelayForCarPlay; 
@property (assign,nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking; 
@property (assign,nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay; 
+(id)deviceConfiguration;
+(id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)audioSessionActivationDelay;
-(void)setAudioSessionActivationDelay:(double)arg1 ;
-(double)audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
-(void)setAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(double)arg1 ;
-(BOOL)hasAudioSessionActivationDelay;
-(void)setHasAudioSessionActivationDelay:(BOOL)arg1 ;
-(double)initialInterstitialDelay;
-(void)setInitialInterstitialDelay:(double)arg1 ;
-(double)initialInterstitialDelayForCarPlay;
-(void)setInitialInterstitialDelayForCarPlay:(double)arg1 ;
-(double)initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
-(void)setInitialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking:(double)arg1 ;
-(double)mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
-(void)setMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

