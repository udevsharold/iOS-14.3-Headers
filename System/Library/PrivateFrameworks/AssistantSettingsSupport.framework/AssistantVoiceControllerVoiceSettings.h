/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject {

	AFVoiceInfo* _inProgressVoice;
	AFVoiceInfo* _currentVoice;

}

@property (nonatomic,retain) AFVoiceInfo * inProgressVoice;              //@synthesize inProgressVoice=_inProgressVoice - In the implementation block
@property (nonatomic,retain) AFVoiceInfo * currentVoice;                 //@synthesize currentVoice=_currentVoice - In the implementation block
+(id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2 ;
-(AFVoiceInfo *)inProgressVoice;
-(void)setInProgressVoice:(AFVoiceInfo *)arg1 ;
-(AFVoiceInfo *)currentVoice;
-(void)setCurrentVoice:(AFVoiceInfo *)arg1 ;
@end
