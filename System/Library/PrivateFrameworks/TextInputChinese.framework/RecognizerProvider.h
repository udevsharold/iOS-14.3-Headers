/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject {

	CHRecognizer* _recognizer;
	NSLocale* _recognitionLanguage;
	/*^block*/id _recognizerDidLoadBlock;

}

@property (readonly) NSLocale * recognitionLanguage;              //@synthesize recognitionLanguage=_recognitionLanguage - In the implementation block
@property (readonly) CHRecognizer * recognizer;                   //@synthesize recognizer=_recognizer - In the implementation block
@property (copy) id recognizerDidLoadBlock;                       //@synthesize recognizerDidLoadBlock=_recognizerDidLoadBlock - In the implementation block
-(void)dealloc;
-(NSLocale *)recognitionLanguage;
-(CHRecognizer *)recognizer;
-(id)initWithRecognitionLanguage:(id)arg1 ;
-(void)provideRecognizerToBlock:(/*^block*/id)arg1 ;
-(void)unloadRecognizer;
-(id)recognizerDidLoadBlock;
-(void)setRecognizerDidLoadBlock:(id)arg1 ;
@end

