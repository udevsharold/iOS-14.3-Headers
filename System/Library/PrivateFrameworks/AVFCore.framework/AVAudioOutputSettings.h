/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic,readonly) NSDictionary * audioSettingsDictionary; 
+(id)registeredOutputSettingsClasses;
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1 ;
+(id)defaultAudioOutputSettings;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 ;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)audioSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

