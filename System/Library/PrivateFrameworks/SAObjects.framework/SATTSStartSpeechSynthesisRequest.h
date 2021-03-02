/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioType; 
@property (assign,nonatomic) BOOL enableAudioInfo; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * quality; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * voiceName; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startSpeechSynthesisRequest;
+(id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)gender;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(NSString *)quality;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)audioType;
-(void)setAudioType:(NSString *)arg1 ;
-(BOOL)enableAudioInfo;
-(void)setEnableAudioInfo:(BOOL)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(BOOL)streaming;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
