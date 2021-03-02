/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber;

@interface GKGameDescriptor : GKInternalRepresentation {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _adamID;
	NSNumber* _externalVersion;
	NSString* _shortBundleVersion;
	long long _platform;

}

@property (nonatomic,retain) NSNumber * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersion;               //@synthesize externalVersion=_externalVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * shortBundleVersion;              //@synthesize shortBundleVersion=_shortBundleVersion - In the implementation block
@property (assign,nonatomic) long long platform;                       //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
+(long long)currentPlatform;
+(long long)gamePlatformFromServerGameDescriptorString:(id)arg1 ;
+(long long)gamePlatformFromServerPushString:(id)arg1 ;
+(id)platformStringForServerRequest:(long long)arg1 ;
+(id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4 ;
+(id)currentPlatformServerString;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(long long)platform;
-(void)setPlatform:(long long)arg1 ;
-(void)dealloc;
-(NSNumber *)externalVersion;
-(void)setAdamID:(NSNumber *)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)adamID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setShortBundleVersion:(NSString *)arg1 ;
-(NSString *)shortBundleVersion;
-(id)initWithPushDictionary:(id)arg1 ;
-(id)dictionaryForRequest;
-(void)setExternalVersion:(NSNumber *)arg1 ;
@end
