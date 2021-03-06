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

@class NSMutableDictionary, NSData, NSString;

@interface FTTextToSpeechVoice : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechVoice* _root;

}

@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * quality; 
@property (nonatomic,readonly) NSString * type; 
-(NSString *)gender;
-(NSString *)quality;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)type;
-(NSString *)version;
-(NSString *)name;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechVoice*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechVoice>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechVoice*)arg2 ;
@end

