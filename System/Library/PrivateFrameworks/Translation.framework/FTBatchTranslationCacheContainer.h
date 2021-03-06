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

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface FTBatchTranslationCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const BatchTranslationCacheContainer* _root;

}

@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * translated_text; 
@property (nonatomic,readonly) NSArray * spans; 
@property (nonatomic,readonly) int sentence_count; 
-(NSArray *)spans;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sentence_count;
-(NSString *)request_id;
-(NSString *)translated_text;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationCacheContainer*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::BatchTranslationCacheContainer>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const BatchTranslationCacheContainer*)arg2 ;
@end

