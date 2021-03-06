/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioChannelLayout, NSData, NSDictionary;

@interface AVAudioFormat : NSObject <NSSecureCoding> {

	AudioStreamBasicDescription _asbd;
	AVAudioChannelLayout* _layout;
	unsigned long long _commonFormat;
	void* _reserved;

}

@property (getter=isStandard,nonatomic,readonly) BOOL standard; 
@property (nonatomic,readonly) unsigned long long commonFormat; 
@property (nonatomic,readonly) unsigned channelCount; 
@property (nonatomic,readonly) double sampleRate; 
@property (getter=isInterleaved,nonatomic,readonly) BOOL interleaved; 
@property (nonatomic,readonly) const AudioStreamBasicDescription* streamDescription; 
@property (nonatomic,readonly) AVAudioChannelLayout * channelLayout; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (nonatomic,readonly) NSDictionary * settings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
+(id)settingsFromASBD:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)formatWithInvalidSampleRateAndChannelCount;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(unsigned)channelCount;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 ;
-(void)dealloc;
-(NSData *)magicCookie;
-(id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned)arg2 ;
-(double)sampleRate;
-(void)setMagicCookie:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInterleaved;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned)arg3 interleaved:(BOOL)arg4 ;
-(id)description;
-(const AudioStreamBasicDescription*)streamDescription;
-(unsigned long long)commonFormat;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCMAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)isStandard;
-(AVAudioChannelLayout *)channelLayout;
-(id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4 ;
-(NSDictionary *)settings;
-(void)encodeWithCoder:(id)arg1 ;
@end

