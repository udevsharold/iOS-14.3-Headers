/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartMultilingualSpeechRequest, FTUpdateAudioInfo, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTAudioPacket, FTFinishAudio, FTLanguageDetected;

@interface FTMultilingualStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const MultilingualStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTStartMultilingualSpeechRequest * contentAsFTStartMultilingualSpeechRequest; 
@property (nonatomic,readonly) FTUpdateAudioInfo * contentAsFTUpdateAudioInfo; 
@property (nonatomic,readonly) FTSetRequestOrigin * contentAsFTSetRequestOrigin; 
@property (nonatomic,readonly) FTSetSpeechContext * contentAsFTSetSpeechContext; 
@property (nonatomic,readonly) FTSetSpeechProfile * contentAsFTSetSpeechProfile; 
@property (nonatomic,readonly) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,readonly) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,readonly) FTLanguageDetected * contentAsFTLanguageDetected; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(FTUpdateAudioInfo *)contentAsFTUpdateAudioInfo;
-(FTSetRequestOrigin *)contentAsFTSetRequestOrigin;
-(FTSetSpeechContext *)contentAsFTSetSpeechContext;
-(FTSetSpeechProfile *)contentAsFTSetSpeechProfile;
-(FTStartMultilingualSpeechRequest *)contentAsFTStartMultilingualSpeechRequest;
-(FTLanguageDetected *)contentAsFTLanguageDetected;
-(long long)content_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultilingualStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::MultilingualStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultilingualStreamingRequest*)arg2 ;
@end
