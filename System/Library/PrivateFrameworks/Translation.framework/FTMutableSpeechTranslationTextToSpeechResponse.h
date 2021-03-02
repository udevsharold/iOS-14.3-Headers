/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationTextToSpeechResponse.h>

@class NSString, FTTextToSpeechResponse;

@interface FTMutableSpeechTranslationTextToSpeechResponse : FTSpeechTranslationTextToSpeechResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * target_locale; 
@property (nonatomic,copy) FTTextToSpeechResponse * text_to_speech_response; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)target_locale;
-(void)setTarget_locale:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTTextToSpeechResponse *)text_to_speech_response;
-(void)setText_to_speech_response:(FTTextToSpeechResponse *)arg1 ;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
@end
