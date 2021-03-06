/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioIONode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (assign,getter=isVoiceProcessingBypassed,nonatomic) BOOL voiceProcessingBypassed; 
@property (assign,getter=isVoiceProcessingAGCEnabled,nonatomic) BOOL voiceProcessingAGCEnabled; 
@property (assign,getter=isVoiceProcessingInputMuted,nonatomic) BOOL voiceProcessingInputMuted; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)rate;
-(void)setRate:(float)arg1 ;
-(void)setVoiceProcessingInputMuted:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingInputMuted;
-(void)setVoiceProcessingAGCEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceProcessingAGCEnabled;
-(void)setVoiceProcessingBypassed:(BOOL)arg1 ;
-(BOOL)setManualRenderingInputPCMFormat:(id)arg1 inputBlock:(/*^block*/id)arg2 ;
-(BOOL)isVoiceProcessingBypassed;
@end

