/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionSessionDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSString, VSKeepAlive, VSRecognitionAction, NSArray, VSSpeechSynthesizer;

@interface VSRecognitionSession : NSObject {

	NSString* _modelIdentifier;
	VSKeepAlive* _keepAlive;
	id<VSRecognitionSessionDelegate> _delegate;
	VSRecognitionAction* _currentAction;
	NSArray* _topLevelKeywords;
	id _handlingThread;
	VSSpeechSynthesizer* _synthesizer;
	NSString* _languageID;
	NSString* _debugDumpPath;
	NSString* _audioInputPath;
	double _levelInterval;
	unsigned long long _keywordPhase;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	}  _sessionFlags;

}
-(BOOL)isBusy;
-(id)init;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(float)inputLevelDB;
-(CFDictionaryRef)_createKeywordIndex;
-(id)_createPhaseSortedKeywordsFromArray:(id)arg1 ;
-(id)_topLevelKeywords;
-(void)_keywordIndexChanged;
-(id)_beginSpeakingAttributedString:(id)arg1 ;
-(id)beginSpeakingString:(id)arg1 ;
-(id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2 ;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)arg1 ;
-(float)inputLevel;
-(id)beginNextAction;
-(BOOL)isRecognizing;
-(BOOL)isActivelyRecognizing;
-(BOOL)hasDeferredAction;
-(BOOL)nextActionWillTerminateSession;
-(BOOL)nextActionWillRecognize;
-(void)setSensitiveActionsEnabled:(BOOL)arg1 ;
-(BOOL)sensitiveActionsEnabled;
-(BOOL)setBluetoothInputAllowed:(BOOL)arg1 ;
-(void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3 ;
-(BOOL)_actionStarted:(id)arg1 ;
-(id)_notifyDelegateOpenURL:(id)arg1 ;
-(id)_recognitionResultHandlingThread;
-(id)displayResultString;
-(void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3 ;
-(id)displayStatusString;
-(void)setInputLevelUpdateInterval:(double)arg1 ;
-(void)setKeywordPhase:(unsigned long long)arg1 ;
-(id)keywordAtIndex:(long long)arg1 ;
-(long long)keywordCount;
-(id)_keywordsForModelIdentifier:(id)arg1 ;
-(id)beginSpeakingFeedbackString;
-(BOOL)setDebugDumpEnabled:(BOOL)arg1 ;
-(id)debugDumpPath;
-(BOOL)setNextRecognitionAudioInputPath:(id)arg1 ;
-(BOOL)setNextRecognitionRequiresReset:(BOOL)arg1 ;
-(BOOL)setPreferredEngine:(int)arg1 ;
-(void)setPerformRecognitionHandlerActions:(BOOL)arg1 ;
-(id)reset;
-(void)dealloc;
-(BOOL)isFinished;
-(BOOL)isValid;
-(void)_setAction:(id)arg1 ;
-(id)cancel;
-(void)_init;
-(void)setDelegate:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3 ;
-(void)_notifyDelegateActionStarted;
-(id)_currentRecognizeAction;
-(id)initWithModelIdentifier:(id)arg1 ;
-(id)cancelMaintainingKeepAlive:(BOOL)arg1 ;
@end

