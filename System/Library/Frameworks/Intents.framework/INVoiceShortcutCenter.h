/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INVCVoiceShortcutClient;
@interface INVoiceShortcutCenter : NSObject {

	id<INVCVoiceShortcutClient> _voiceShortcutClient;

}

@property (setter=_setVoiceShortcutClient:,nonatomic,retain) id<INVCVoiceShortcutClient> voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
+(void)initialize;
+(id)sharedCenter;
-(id)init;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithVoiceShortcutClient:(id)arg1 ;
-(void)getAllVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortcutSuggestions:(id)arg1 ;
-(id<INVCVoiceShortcutClient>)voiceShortcutClient;
-(void)_setVoiceShortcutClient:(id)arg1 ;
@end
