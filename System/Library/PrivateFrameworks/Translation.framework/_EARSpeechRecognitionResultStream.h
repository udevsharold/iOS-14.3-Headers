/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _EARSpeechRecognitionResultStream <NSObject>
@optional
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResultNbest:(id)arg2;

@required
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;

@end

