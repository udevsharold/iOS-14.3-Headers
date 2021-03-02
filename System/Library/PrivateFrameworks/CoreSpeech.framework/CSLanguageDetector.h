/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EARLanguageDetectorDelegate.h>
#import <libobjc.A.dylib/CSStartOfSpeechDetectorDelegate.h>

@protocol CSLanguageDetectorDelegate, OS_dispatch_queue;
@class _EARLanguageDetector, _EARLanguageDetectorAudioBuffer, CSStartOfSpeechDetector, CSAudioCircularBuffer, NSMutableArray, NSString, CSAsset, NSObject;

@interface CSLanguageDetector : NSObject <_EARLanguageDetectorDelegate, CSStartOfSpeechDetectorDelegate> {

	BOOL _startOfSpeechDetected;
	BOOL _needsToUpdateModel;
	int _notifyToken;
	id<CSLanguageDetectorDelegate> _delegate;
	_EARLanguageDetector* _languageDetector;
	_EARLanguageDetectorAudioBuffer* _audioBuffer;
	CSStartOfSpeechDetector* _startOfSpeechDetector;
	CSAudioCircularBuffer* _circBuffer;
	long long _currentState;
	NSMutableArray* _latestDetectedLanguages;
	unsigned long long _numLatestLanguages;
	NSString* _languageDetectorAssetHash;
	CSAsset* _currentAsset;
	NSString* _interactionID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _EARLanguageDetector * languageDetector;                      //@synthesize languageDetector=_languageDetector - In the implementation block
@property (nonatomic,retain) _EARLanguageDetectorAudioBuffer * audioBuffer;                //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (nonatomic,retain) CSStartOfSpeechDetector * startOfSpeechDetector;              //@synthesize startOfSpeechDetector=_startOfSpeechDetector - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * circBuffer;                           //@synthesize circBuffer=_circBuffer - In the implementation block
@property (assign,nonatomic) BOOL startOfSpeechDetected;                                   //@synthesize startOfSpeechDetected=_startOfSpeechDetected - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateModel;                                      //@synthesize needsToUpdateModel=_needsToUpdateModel - In the implementation block
@property (assign,nonatomic) long long currentState;                                       //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) int notifyToken;                                              //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * latestDetectedLanguages;                     //@synthesize latestDetectedLanguages=_latestDetectedLanguages - In the implementation block
@property (assign,nonatomic) unsigned long long numLatestLanguages;                        //@synthesize numLatestLanguages=_numLatestLanguages - In the implementation block
@property (nonatomic,copy) NSString * languageDetectorAssetHash;                           //@synthesize languageDetectorAssetHash=_languageDetectorAssetHash - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                       //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,copy) NSString * interactionID;                                       //@synthesize interactionID=_interactionID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSLanguageDetectorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(long long)arg1 ;
-(id)init;
-(int)notifyToken;
-(void)dealloc;
-(void)setNotifyToken:(int)arg1 ;
-(long long)currentState;
-(void)cancelCurrentRequest;
-(CSAsset *)currentAsset;
-(id)initWithModelURL:(id)arg1 ;
-(void)resetForNewRequest:(id)arg1 ;
-(void)addSamples:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(_EARLanguageDetectorAudioBuffer *)audioBuffer;
-(void)setDelegate:(id<CSLanguageDetectorDelegate>)arg1 ;
-(void)endAudio;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_EARLanguageDetector *)languageDetector;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAudioBuffer:(_EARLanguageDetectorAudioBuffer *)arg1 ;
-(id<CSLanguageDetectorDelegate>)delegate;
-(void)_startMonitorLanguageDetectorAssetDownload;
-(void)_setNumLatestLangFromConfigFile:(id)arg1 ;
-(id)_constructLangPriors;
-(void)_initializeStartOfSpeechDetector:(id)arg1 samplingRate:(float)arg2 ;
-(void)_resetStartOfSpeechDetector;
-(void)_setupLanguageDetectorWithOption:(id)arg1 ;
-(id)_readJsonDictionaryAt:(id)arg1 ;
-(id)_getDefaultValues;
-(void)_recordRecognitionLanguage:(id)arg1 ;
-(void)_logLanguageDetectorMetricsForLoggingInfo:(id)arg1 ;
-(void)_logSoSResult:(id)arg1 toPath:(id)arg2 ;
-(void)languageDetectorDidCompleteProcessing:(id)arg1 loggingInfo:(id)arg2 ;
-(void)languageDetector:(id)arg1 result:(id)arg2 ;
-(void)startOfSpeechDetector:(id)arg1 foundStartSampleAt:(unsigned long long)arg2 ;
-(void)setInteractionIDforCurrentRequest:(id)arg1 ;
-(void)recordRecognitionLanguage:(id)arg1 ;
-(void)setMostRecentRecognitionLanguage:(id)arg1 ;
-(void)setLanguageDetector:(_EARLanguageDetector *)arg1 ;
-(CSStartOfSpeechDetector *)startOfSpeechDetector;
-(void)setStartOfSpeechDetector:(CSStartOfSpeechDetector *)arg1 ;
-(CSAudioCircularBuffer *)circBuffer;
-(void)setCircBuffer:(CSAudioCircularBuffer *)arg1 ;
-(BOOL)startOfSpeechDetected;
-(void)setStartOfSpeechDetected:(BOOL)arg1 ;
-(BOOL)needsToUpdateModel;
-(void)setNeedsToUpdateModel:(BOOL)arg1 ;
-(NSMutableArray *)latestDetectedLanguages;
-(void)setLatestDetectedLanguages:(NSMutableArray *)arg1 ;
-(unsigned long long)numLatestLanguages;
-(void)setNumLatestLanguages:(unsigned long long)arg1 ;
-(NSString *)languageDetectorAssetHash;
-(void)setLanguageDetectorAssetHash:(NSString *)arg1 ;
-(NSString *)interactionID;
-(void)setInteractionID:(NSString *)arg1 ;
@end
