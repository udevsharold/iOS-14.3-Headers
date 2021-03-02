/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol {

	NSDictionary* _providerConfiguration;
	NSString* _providerBundleIdentifier;
	NSString* _pluginType;
	NSString* _designatedRequirement;

}

@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * designatedRequirement;                  //@synthesize designatedRequirement=_designatedRequirement - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithPluginType:(id)arg1 ;
-(id)init;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(NSString *)designatedRequirement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pluginType;
-(void)setDesignatedRequirement:(NSString *)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
