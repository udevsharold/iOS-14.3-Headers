/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/CHSWidgetPersonality.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INIntent;

@interface CHSWidget : NSObject <BSDescriptionProviding, BSXPCCoding, CHSWidgetPersonality, NSCopying, NSSecureCoding> {

	NSString* _extensionBundleIdentifier;
	NSString* _containerBundleIdentifier;
	NSString* _kind;
	long long _family;
	INIntent* _intent;

}

@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;              //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long family;                                       //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                      //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)extensionBundleIdentifier;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)init;
-(NSString *)containerBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)matchesPersonality:(id)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 family:(long long)arg4 intent:(id)arg5 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4 ;
-(id)widgetByReplacingIntent:(id)arg1 ;
-(id)initWithPersonality:(id)arg1 family:(long long)arg2 intent:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)family;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(INIntent *)intent;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)kind;
-(void)encodeWithCoder:(id)arg1 ;
@end

