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

@class NSMutableDictionary, NSData, NSString;

@interface FTRecognitionToken : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionToken* _root;

}

@property (nonatomic,readonly) NSString * token_text; 
@property (nonatomic,readonly) int start_milli_seconds; 
@property (nonatomic,readonly) int end_milli_seconds; 
@property (nonatomic,readonly) int silence_start_milli_seconds; 
@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL add_space_after; 
@property (nonatomic,readonly) NSString * phone_seq; 
@property (nonatomic,readonly) NSString * ipa_phone_seq; 
-(int)confidence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)start_milli_seconds;
-(int)end_milli_seconds;
-(int)silence_start_milli_seconds;
-(NSString *)phone_seq;
-(NSString *)ipa_phone_seq;
-(NSString *)token_text;
-(BOOL)add_space_after;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionToken*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionToken>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionToken*)arg2 ;
@end
