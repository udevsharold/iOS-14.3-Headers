/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSArray, _LTSpeechRecognitionSausage, NSString;

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding> {

	BOOL _final;
	NSLocale* _locale;
	NSArray* _transcriptions;
	_LTSpeechRecognitionSausage* _bestRecognitionAlternatives;
	NSString* _modelVersion;

}

@property (assign,getter=isFinal,nonatomic) BOOL final;                                              //@synthesize final=_final - In the implementation block
@property (nonatomic,retain) NSString * modelVersion;                                                //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSArray * transcriptions;                                               //@synthesize transcriptions=_transcriptions - In the implementation block
@property (nonatomic,retain) _LTSpeechRecognitionSausage * bestRecognitionAlternatives;              //@synthesize bestRecognitionAlternatives=_bestRecognitionAlternatives - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resultWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
+(id)emptyResultWithLocale:(id)arg1 isFinal:(BOOL)arg2 ;
+(id)resultWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(NSLocale *)locale;
-(id)_transcriptionWithResult:(id)arg1 locale:(id)arg2 ;
-(id)initWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(id)initWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(BOOL)arg4 ;
-(id)initEmptyResultWithLocale:(id)arg1 isFinal:(BOOL)arg2 ;
-(_LTSpeechRecognitionSausage *)bestRecognitionAlternatives;
-(BOOL)isFinal;
-(void)setFinal:(BOOL)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)bestTranscription;
-(id)initWithCoder:(id)arg1 ;
-(void)setTranscriptions:(NSArray *)arg1 ;
-(void)setBestRecognitionAlternatives:(_LTSpeechRecognitionSausage *)arg1 ;
-(id)initWithOspreyResponse:(id)arg1 confidenceThreshold:(long long)arg2 isSanitized:(BOOL)arg3 ;
-(id)initWithOspreyPartialRecognitionResponse:(id)arg1 isSanitized:(BOOL)arg2 ;
-(NSArray *)transcriptions;
-(NSString *)modelVersion;
-(void)setModelVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

