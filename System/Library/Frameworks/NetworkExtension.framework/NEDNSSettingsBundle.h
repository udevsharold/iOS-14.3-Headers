/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEDNSSettings;

@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NSArray* _onDemandRules;
	NEDNSSettings* _settings;

}

@property (getter=isEnabled) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSArray * onDemandRules;               //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEDNSSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)onDemandRules;
-(void)setSettings:(NEDNSSettings *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(NEDNSSettings *)settings;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
@end
