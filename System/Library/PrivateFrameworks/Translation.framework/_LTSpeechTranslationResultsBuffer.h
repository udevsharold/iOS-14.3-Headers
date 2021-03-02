/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol _LTSpeechTranslationDelegate;
@class NSMutableDictionary, _LTTranslationResult, NSError, NSString;

@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate> {

	BOOL _isBuffering;
	NSMutableDictionary* _lastASRResults;
	_LTTranslationResult* _translationResult;
	BOOL _didFinish;
	NSError* _error;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)hasFailed;
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)stopBuffering;
-(BOOL)hasResults;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(id<_LTSpeechTranslationDelegate>)delegate;
@end
