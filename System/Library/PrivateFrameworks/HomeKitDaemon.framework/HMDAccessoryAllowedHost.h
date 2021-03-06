/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDNetworkRouterFirewallRuleWAN, NSString, NSSet;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	HMDNetworkRouterFirewallRuleWAN* _cachedWANRule;
	NSString* _jsonWANRule;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWAN * wanRule; 
@property (readonly) NSString * name; 
@property (readonly) NSSet * addresses; 
@property (readonly) unsigned long long purpose; 
@property (readonly) NSString * jsonWANRule;                                           //@synthesize jsonWANRule=_jsonWANRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedHostsFromFirewallRuleConfiguration:(id)arg1 ;
+(id)allowedHostsFromJSONFirewallWANRules:(id)arg1 ;
+(id)allowedHostForFullWANAccess;
-(unsigned long long)purpose;
-(id)attributeDescriptions;
-(NSSet *)addresses;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDNetworkRouterFirewallRuleWAN *)wanRule;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)jsonWANRule;
-(id)initWithJSONFirewallWANRule:(id)arg1 ;
-(id)initWithWANRule:(id)arg1 ;
-(void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1 ;
@end

