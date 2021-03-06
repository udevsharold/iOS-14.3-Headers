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

@class NSMutableDictionary, NSData, NSArray;

@interface FTRecognitionPhraseTokensAlternatives : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionPhraseTokensAlternatives* _root;

}

@property (nonatomic,readonly) NSArray * tok_phrases; 
@property (nonatomic,readonly) BOOL has_unsuggested_alternatives; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)has_unsuggested_alternatives;
-(NSArray *)tok_phrases;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionPhraseTokensAlternatives*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionPhraseTokensAlternatives*)arg2 ;
@end

