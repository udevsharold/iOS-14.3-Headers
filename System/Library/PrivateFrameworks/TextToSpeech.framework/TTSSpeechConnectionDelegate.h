/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTSSpeechConnectionDelegate
@required
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3;

@end
