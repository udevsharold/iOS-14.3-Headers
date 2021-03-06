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

@class NSMutableDictionary, NSData, NSString, NSArray, FTUserLanguageProfile;

@interface FTCreateLanguageProfileRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const CreateLanguageProfileRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSArray * user_data; 
@property (nonatomic,readonly) FTUserLanguageProfile * user_language_profile; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(FTUserLanguageProfile *)user_language_profile;
-(NSString *)speech_id;
-(NSString *)session_id;
-(NSArray *)user_data;
-(id)initWithFlatbuffData:(id)arg1 root:(const CreateLanguageProfileRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::CreateLanguageProfileRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const CreateLanguageProfileRequest*)arg2 ;
@end

