/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _ignoreRouteRules;
	BOOL _ignoreFallback;
	long long _cellularFallbackFlags;
	NSArray* _pathRules;
	NSArray* _payloadAppRules;

}

@property (copy) NSArray * payloadAppRules;                          //@synthesize payloadAppRules=_payloadAppRules - In the implementation block
@property (getter=isEnabled) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL ignoreRouteRules;                            //@synthesize ignoreRouteRules=_ignoreRouteRules - In the implementation block
@property (assign) BOOL ignoreFallback;                              //@synthesize ignoreFallback=_ignoreFallback - In the implementation block
@property (assign) long long cellularFallbackFlags;                  //@synthesize cellularFallbackFlags=_cellularFallbackFlags - In the implementation block
@property (copy) NSArray * pathRules;                                //@synthesize pathRules=_pathRules - In the implementation block
@property (nonatomic,readonly) BOOL hasNonDefaultRules; 
+(BOOL)supportsSecureCoding;
+(id)copyAggregatePathRules;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPathRules:(NSArray *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(BOOL)ignoreRouteRules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(void)setCellularFallbackFlags:(long long)arg1 ;
-(long long)cellularFallbackFlags;
-(void)setIgnoreRouteRules:(BOOL)arg1 ;
-(void)setPayloadAppRules:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyPathRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)ignoreFallback;
-(BOOL)hasNonDefaultRules;
-(BOOL)removePathRuleBySigningIdentifier:(id)arg1 ;
-(NSArray *)pathRules;
-(NSArray *)payloadAppRules;
-(void)setIgnoreFallback:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyPathRuleSigningIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
@end
