/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHSemanticTokenizerStep : CHPostprocessingStep {

	CHRecognizer* _recognizer;
	void* _languageModel;

}

@property (assign,nonatomic) CHRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) void* languageModel;                    //@synthesize languageModel=_languageModel - In the implementation block
-(id)process:(id)arg1 ;
-(void*)languageModel;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void)setLanguageModel:(void*)arg1 ;
-(id)initWithRecognizer:(id)arg1 languageModel:(void*)arg2 ;
-(void)_updateTokenInappropriateFlag:(id)arg1 ;
@end

