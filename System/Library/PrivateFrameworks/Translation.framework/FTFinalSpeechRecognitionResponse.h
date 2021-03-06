/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionResult, FTAudioAnalytics, FTLatnnMitigatorResult;

@interface FTFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const FinalSpeechRecognitionResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) long long lang_profile_recreate_codes; 
@property (nonatomic,readonly) FTAudioAnalytics * audio_analytics; 
@property (nonatomic,readonly) long long watermark_detection; 
@property (nonatomic,readonly) double watermark_peak_average; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) FTLatnnMitigatorResult * latnn_mitigator_result; 
@property (nonatomic,readonly) NSString * request_locale; 
@property (nonatomic,readonly) BOOL has_result; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)request_locale;
-(NSString *)language;
-(FTRecognitionResult *)recognition_result;
-(long long)lang_profile_recreate_codes;
-(FTAudioAnalytics *)audio_analytics;
-(BOOL)has_result;
-(long long)watermark_detection;
-(double)watermark_peak_average;
-(FTLatnnMitigatorResult *)latnn_mitigator_result;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(NSString *)session_id;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalSpeechRecognitionResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const FinalSpeechRecognitionResponse*)arg2 ;
@end

