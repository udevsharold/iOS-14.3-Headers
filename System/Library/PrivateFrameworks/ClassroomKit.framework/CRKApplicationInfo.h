/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CRKApplicationInfo : NSObject {

	NSString* _bundleIdentifier;
	NSString* _shortVersionString;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortVersionString;                        //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1 ;
+(id)bundleIdentifierFromDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)shortVersionString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2 ;
@end

