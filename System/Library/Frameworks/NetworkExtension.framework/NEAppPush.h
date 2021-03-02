/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface NEAppPush : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NSDictionary* _providerConfiguration;
	NSArray* _matchSSIDs;
	NSString* _pluginType;
	NSString* _providerBundleIdentifier;

}

@property (getter=isEnabled) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSArray * matchSSIDs;                              //@synthesize matchSSIDs=_matchSSIDs - In the implementation block
@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)overlapsWithConfiguration:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)matchSSIDs;
-(void)setMatchSSIDs:(NSArray *)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pluginType;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
