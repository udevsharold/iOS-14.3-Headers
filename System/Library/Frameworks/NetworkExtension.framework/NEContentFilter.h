/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _enableManualMode;
	NEFilterProviderConfiguration* _provider;
	long long _grade;

}

@property (assign) BOOL enableManualMode;                               //@synthesize enableManualMode=_enableManualMode - In the implementation block
@property (getter=isEnabled) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEFilterProviderConfiguration * provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) long long grade;                           //@synthesize grade=_grade - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProvider:(NEFilterProviderConfiguration *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)grade;
-(id)init;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(BOOL)enableManualMode;
-(void)setEnableManualMode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(void)setGrade:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NEFilterProviderConfiguration *)provider;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
